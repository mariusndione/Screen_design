#define HMI_WDT_ENABLE 0
#define HMI_WDT_TIMEOUT 0
#define HMI_WDT_CLEAR 0
#define HMI_WDT_MTCP_TIMEOUT 60000
#define HMI_STARTUP_LED 1
#define HMI_STARTUP_BEEP 0
#define HMI_STARTUP_DELAY 100
#define HMI_BEEP_FREQ 800
#define HMI_BEEP_MS 25
#define HMI_LCD_AUTO_OFF 0
#define HMI_LCD_ON_BEEP 0
#define HMI_LCD_OFF_BEEP 0
#define HMI_LCD_BRIGHTNESS 180
#define HMI_TOUCH_BEEP 0
#define HMI_TCP_TIMEOUT_BEEP 0
#define HMI_NTP_ENABLE 0
#define HMI_NTP_ADDR "time.stdtime.gov.tw"
#define HMI_NTP_FREQ 15000
#define HMI_NTP_ZONE 1000
#define HMI_USER_FLASH 0


#include "hmiworks.h"
//#include "hmi_options.h"

#define TICKS_PER_SECOND 100
#define MS_PER_TICK      (1000 / TICKS_PER_SECOND)
//#define APPLICATION_TITLE "TouchPAD-ICPDAS"
//#define IPADDR(a,b,c,d)		(( ((unsigned int)a) << 24) | (b << 16) | (c << 8) | d)

#define USE_DHCP			         1

#define IPADDR_USE_STATIC       0
#define IPADDR_USE_DHCP         1
#define IPADDR_USE_AUTOIP       2

void SysTickIntHandler()
{
   hmi_TimerTrigger();
}

int main(void)
{
   unsigned char pucMACAddr[6];

   if ( HMI_STARTUP_DELAY )
      hmi_DelayUS( HMI_STARTUP_DELAY * 1000 ); 

   HMI_INIT(O_LANDSCAPE);
   hmi_BacklightSet( HMI_LCD_BRIGHTNESS );

   if ( HMI_WDT_ENABLE )  // Enable Watchdog
   {
      hmi_WdtAutoClear( HMI_WDT_CLEAR );
      hmi_WdtEnable( HMI_WDT_TIMEOUT );
   }

   hmi_Beep();

   hmi_MACAddrInit(pucMACAddr);

	hmi_TCPInit();
	hmi_TCPTimeoutBeep( HMI_TCP_TIMEOUT_BEEP );
	
#if USE_DHCP == 1
   lwIPInit(pucMACAddr, 0, 0, 0, IPADDR_USE_DHCP);
#elif USE_DHCP == 0
   #define DEFAULT_IPADDR          	IPADDR()
   #define DEFAULT_GATEWAY_ADDR    	IPADDR()
   #define DEFAULT_NET_MASK        	IPADDR()
   lwIPInit(pucMACAddr, DEFAULT_IPADDR, DEFAULT_NET_MASK, DEFAULT_GATEWAY_ADDR, IPADDR_USE_STATIC);
#elif USE_DHCP == 2
   do {
      unsigned long ulParams[4];
      hmi_NetworkParamsGet(ulParams, ulParams +1, ulParams +2, ulParams +3);
      if ( ulParams[0] == 1 ) // DHCP enabled
         lwIPInit(pucMACAddr, 0, 0, 0, IPADDR_USE_DHCP);
      else
         lwIPInit(pucMACAddr, ulParams[1], ulParams[2], ulParams[3], IPADDR_USE_STATIC);   
   } while (0);   
#endif
   LocatorMACAddrSet(pucMACAddr);

   hmi_SetLED( HMI_STARTUP_LED );
   if ( HMI_STARTUP_BEEP )
      hmi_Beep();

   if ( HMI_TOUCH_BEEP )
      hmi_TurnTouchBeep(1);
       
   if ( HMI_LCD_AUTO_OFF ) 
   {
      hmi_LCDIdleSetTimeout( HMI_LCD_AUTO_OFF * 1000 );
      hmi_LCDIdleSetBeep(HMI_LCD_OFF_BEEP, HMI_LCD_ON_BEEP);
   }

   hmi_UserFlashConfig(HMI_USER_FLASH);
   RegisterIOScan(hmi_IOScan_Process);
   hmi_frame0();
}
