#ifndef __HMI_FRAME0_H
#define __HMI_FRAME0_H
extern volatile unsigned long g_TimerTicksCount;
extern int g_hmi_CurrentFrame;
extern void hmi_frame0();
extern void hmi_FreeCurrentFrame();
extern void hmi_GotoFrame(int nFrame);
extern void hmi_GetActiveFrame(char *str, unsigned int len);
extern void hmi_TimerTrigger();
extern void hmi_TurnBacklight(int bOn);
extern void hmi_IOScan_Process(void);

extern tTimerWidget Timer137;
extern void hmi_OnTimer137Execute(tWidget *pWidget);
extern tPushButtonWidget OK37;
extern void hmi_OnOK37Click(tWidget *pWidget);
extern void hmi_OnOK37Release(tWidget *pWidget);

extern tCheckBoxWidget QuatreVingtMA38;
extern void hmi_OnQuatreVingtMA38CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tCheckBoxWidget ZeroDixVolt39;
extern void hmi_OnZeroDixVolt39CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tCheckBoxWidget Impulsion40;
extern void hmi_OnImpulsion40CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tPushButtonWidget Adresse41;
extern void _OnAdresse41Paint(tWidget *, unsigned long);
extern void hmi_OnAdresse41Click(tWidget *pWidget);
extern void hmi_OnAdresse41Release(tWidget *pWidget);

extern tTimerWidget Timer140;
extern void hmi_OnTimer140Execute(tWidget *pWidget);
extern tPushButtonWidget Module6;
extern void _OnModule6Paint(tWidget *, unsigned long);
extern void hmi_OnModule6Click(tWidget *pWidget);
extern void hmi_OnModule6Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton46;
extern void _OnTextPushButton46Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton46Click(tWidget *pWidget);
extern void hmi_OnTextPushButton46Release(tWidget *pWidget);

extern tPushButtonWidget Quit129;
extern void _OnQuit129Paint(tWidget *, unsigned long);
extern void hmi_OnQuit129Click(tWidget *pWidget);
extern void hmi_OnQuit129Release(tWidget *pWidget);

extern tPushButtonWidget ZeroCapteur12;
extern void _OnZeroCapteur12Paint(tWidget *, unsigned long);
extern void hmi_OnZeroCapteur12Click(tWidget *pWidget);
extern void hmi_OnZeroCapteur12Release(tWidget *pWidget);

extern tPushButtonWidget MaxCapteur13;
extern void _OnMaxCapteur13Paint(tWidget *, unsigned long);
extern void hmi_OnMaxCapteur13Click(tWidget *pWidget);
extern void hmi_OnMaxCapteur13Release(tWidget *pWidget);

extern tPushButtonWidget Voie36;
extern void _OnVoie36Paint(tWidget *, unsigned long);
extern void hmi_OnVoie36Click(tWidget *pWidget);
extern void hmi_OnVoie36Release(tWidget *pWidget);

extern tPushButtonWidget Etalonnage138;
extern void hmi_OnEtalonnage138Click(tWidget *pWidget);
extern void hmi_OnEtalonnage138Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton55;
extern void _OnTextPushButton55Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton55Click(tWidget *pWidget);
extern void hmi_OnTextPushButton55Release(tWidget *pWidget);

extern tPushButtonWidget Unite35;
extern void _OnUnite35Paint(tWidget *, unsigned long);
extern void hmi_OnUnite35Click(tWidget *pWidget);
extern void hmi_OnUnite35Release(tWidget *pWidget);

extern tPushButtonWidget Quit128;
extern void _OnQuit128Paint(tWidget *, unsigned long);
extern void hmi_OnQuit128Click(tWidget *pWidget);
extern void hmi_OnQuit128Release(tWidget *pWidget);

extern tCanvasWidget Label144;
extern tCanvasWidget Label145;
extern tPushButtonWidget ValPhysique148;
extern void _OnValPhysique148Paint(tWidget *, unsigned long);
extern void hmi_OnValPhysique148Click(tWidget *pWidget);
extern void hmi_OnValPhysique148Release(tWidget *pWidget);

extern tCanvasWidget Label151;
extern tTimerWidget Timer154;
extern void hmi_OnTimer154Execute(tWidget *pWidget);
extern tPushButtonWidget TextPushButton121;
extern void _OnTextPushButton121Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton121Click(tWidget *pWidget);
extern void hmi_OnTextPushButton121Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton149;
extern void _OnTextPushButton149Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton149Click(tWidget *pWidget);
extern void hmi_OnTextPushButton149Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton150;
extern void _OnTextPushButton150Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton150Click(tWidget *pWidget);
extern void hmi_OnTextPushButton150Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton152;
extern void _OnTextPushButton152Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton152Click(tWidget *pWidget);
extern void hmi_OnTextPushButton152Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton136;
extern void _OnTextPushButton136Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton136Click(tWidget *pWidget);
extern void hmi_OnTextPushButton136Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton108;
extern void _OnTextPushButton108Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton108Click(tWidget *pWidget);
extern void hmi_OnTextPushButton108Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton163;
extern void _OnTextPushButton163Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton163Click(tWidget *pWidget);
extern void hmi_OnTextPushButton163Release(tWidget *pWidget);

extern tPushButtonWidget Quit127;
extern void _OnQuit127Paint(tWidget *, unsigned long);
extern void hmi_OnQuit127Click(tWidget *pWidget);
extern void hmi_OnQuit127Release(tWidget *pWidget);

extern tCanvasWidget Label62;
extern tPushButtonWidget ValPhysique157;
extern void _OnValPhysique157Paint(tWidget *, unsigned long);
extern void hmi_OnValPhysique157Click(tWidget *pWidget);
extern void hmi_OnValPhysique157Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton158;
extern void _OnTextPushButton158Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton158Click(tWidget *pWidget);
extern void hmi_OnTextPushButton158Release(tWidget *pWidget);

extern tCanvasWidget Label168;
extern tCanvasWidget Label169;
extern tPushButtonWidget ValReelle63;
extern void _OnValReelle63Paint(tWidget *, unsigned long);
extern void hmi_OnValReelle63Click(tWidget *pWidget);
extern void hmi_OnValReelle63Release(tWidget *pWidget);

extern tPushButtonWidget erreur122;
extern void _Onerreur122Paint(tWidget *, unsigned long);
extern void hmi_Onerreur122Click(tWidget *pWidget);
extern void hmi_Onerreur122Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton71;
extern void _OnTextPushButton71Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton71Click(tWidget *pWidget);
extern void hmi_OnTextPushButton71Release(tWidget *pWidget);

extern tTimerWidget Timer52;
extern void hmi_OnTimer52Execute(tWidget *pWidget);
extern tPushButtonWidget TextPushButton50;
extern void _OnTextPushButton50Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton50Click(tWidget *pWidget);
extern void hmi_OnTextPushButton50Release(tWidget *pWidget);

extern tCheckBoxWidget logique58;
extern void hmi_Onlogique58CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tPushButtonWidget S1Couleur77;
extern void _OnS1Couleur77Paint(tWidget *, unsigned long);
extern void hmi_OnS1Couleur77Click(tWidget *pWidget);
extern void hmi_OnS1Couleur77Release(tWidget *pWidget);

extern tCheckBoxWidget S1_Y_N78;
extern void hmi_OnS1_Y_N78CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tPushButtonWidget S2Valeur79;
extern void _OnS2Valeur79Paint(tWidget *, unsigned long);
extern void hmi_OnS2Valeur79Click(tWidget *pWidget);
extern void hmi_OnS2Valeur79Release(tWidget *pWidget);

extern tPushButtonWidget S2Couleur82;
extern void _OnS2Couleur82Paint(tWidget *, unsigned long);
extern void hmi_OnS2Couleur82Click(tWidget *pWidget);
extern void hmi_OnS2Couleur82Release(tWidget *pWidget);

extern tCheckBoxWidget S2_Y_N83;
extern void hmi_OnS2_Y_N83CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tPushButtonWidget S3Valeur84;
extern void _OnS3Valeur84Paint(tWidget *, unsigned long);
extern void hmi_OnS3Valeur84Click(tWidget *pWidget);
extern void hmi_OnS3Valeur84Release(tWidget *pWidget);

extern tPushButtonWidget S3Couleur87;
extern void _OnS3Couleur87Paint(tWidget *, unsigned long);
extern void hmi_OnS3Couleur87Click(tWidget *pWidget);
extern void hmi_OnS3Couleur87Release(tWidget *pWidget);

extern tCheckBoxWidget S3_Y_N88;
extern void hmi_OnS3_Y_N88CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tPushButtonWidget S4Valeur89;
extern void _OnS4Valeur89Paint(tWidget *, unsigned long);
extern void hmi_OnS4Valeur89Click(tWidget *pWidget);
extern void hmi_OnS4Valeur89Release(tWidget *pWidget);

extern tPushButtonWidget S4Couleur92;
extern void _OnS4Couleur92Paint(tWidget *, unsigned long);
extern void hmi_OnS4Couleur92Click(tWidget *pWidget);
extern void hmi_OnS4Couleur92Release(tWidget *pWidget);

extern tCheckBoxWidget S4_Y_N93;
extern void hmi_OnS4_Y_N93CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tPushButtonWidget paramAvances94;
extern void _OnparamAvances94Paint(tWidget *, unsigned long);
extern void hmi_OnparamAvances94Click(tWidget *pWidget);
extern void hmi_OnparamAvances94Release(tWidget *pWidget);

extern tCanvasWidget Couleur176;
extern tCanvasWidget Couleur481;
extern tCanvasWidget Couleur386;
extern tCanvasWidget Couleur291;
extern tPushButtonWidget S1Valeur74;
extern void _OnS1Valeur74Paint(tWidget *, unsigned long);
extern void hmi_OnS1Valeur74Click(tWidget *pWidget);
extern void hmi_OnS1Valeur74Release(tWidget *pWidget);

extern tPushButtonWidget Quit125;
extern void _OnQuit125Paint(tWidget *, unsigned long);
extern void hmi_OnQuit125Click(tWidget *pWidget);
extern void hmi_OnQuit125Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton173;
extern void _OnTextPushButton173Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton173Click(tWidget *pWidget);
extern void hmi_OnTextPushButton173Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton174;
extern void _OnTextPushButton174Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton174Click(tWidget *pWidget);
extern void hmi_OnTextPushButton174Release(tWidget *pWidget);

extern tTimerWidget Timer175;
extern void hmi_OnTimer175Execute(tWidget *pWidget);
extern tPushButtonWidget Quitter176;
extern void _OnQuitter176Paint(tWidget *, unsigned long);
extern void hmi_OnQuitter176Click(tWidget *pWidget);
extern void hmi_OnQuitter176Release(tWidget *pWidget);

extern tCheckBoxWidget NO102;
extern void hmi_OnNO102CheckChange(tWidget *pWidget, unsigned long bSelected);

extern tPushButtonWidget hysteresis104;
extern void _Onhysteresis104Paint(tWidget *, unsigned long);
extern void hmi_Onhysteresis104Click(tWidget *pWidget);
extern void hmi_Onhysteresis104Release(tWidget *pWidget);

extern tPushButtonWidget Retard105;
extern void _OnRetard105Paint(tWidget *, unsigned long);
extern void hmi_OnRetard105Click(tWidget *pWidget);
extern void hmi_OnRetard105Release(tWidget *pWidget);

extern tPushButtonWidget Voie106;
extern void _OnVoie106Paint(tWidget *, unsigned long);
extern void hmi_OnVoie106Click(tWidget *pWidget);
extern void hmi_OnVoie106Release(tWidget *pWidget);

extern tPushButtonWidget Next107;
extern void _OnNext107Paint(tWidget *, unsigned long);
extern void hmi_OnNext107Click(tWidget *pWidget);
extern void hmi_OnNext107Release(tWidget *pWidget);

extern tPushButtonWidget adresse103;
extern void _Onadresse103Paint(tWidget *, unsigned long);
extern void hmi_Onadresse103Click(tWidget *pWidget);
extern void hmi_Onadresse103Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton153;
extern void _OnTextPushButton153Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton153Click(tWidget *pWidget);
extern void hmi_OnTextPushButton153Release(tWidget *pWidget);

extern tCanvasWidget Relai96;
extern tPushButtonWidget Prev164;
extern void _OnPrev164Paint(tWidget *, unsigned long);
extern void hmi_OnPrev164Click(tWidget *pWidget);
extern void hmi_OnPrev164Release(tWidget *pWidget);

extern tTimerWidget Timer110;
extern void hmi_OnTimer110Execute(tWidget *pWidget);
extern tPushButtonWidget Valider111;
extern void hmi_OnValider111Click(tWidget *pWidget);
extern void hmi_OnValider111Release(tWidget *pWidget);

extern tPushButtonWidget Quit126;
extern void _OnQuit126Paint(tWidget *, unsigned long);
extern void hmi_OnQuit126Click(tWidget *pWidget);
extern void hmi_OnQuit126Release(tWidget *pWidget);

extern tPushButtonWidget ConfigM113;
extern void hmi_OnConfigM113Click(tWidget *pWidget);
extern void hmi_OnConfigM113Release(tWidget *pWidget);

extern tPushButtonWidget ConfigE115;
extern void hmi_OnConfigE115Click(tWidget *pWidget);
extern void hmi_OnConfigE115Release(tWidget *pWidget);

extern tPushButtonWidget ConfigS116;
extern void hmi_OnConfigS116Click(tWidget *pWidget);
extern void hmi_OnConfigS116Release(tWidget *pWidget);

extern tPushButtonWidget ConfigC117;
extern void hmi_OnConfigC117Click(tWidget *pWidget);
extern void hmi_OnConfigC117Release(tWidget *pWidget);

extern tTimerWidget Timer179;
extern void hmi_OnTimer179Execute(tWidget *pWidget);
extern tPushButtonWidget Mesure118;
extern void _OnMesure118Paint(tWidget *, unsigned long);
extern void hmi_OnMesure118Click(tWidget *pWidget);
extern void hmi_OnMesure118Release(tWidget *pWidget);

extern tPushButtonWidget UniM119;
extern void _OnUniM119Paint(tWidget *, unsigned long);
extern void hmi_OnUniM119Click(tWidget *pWidget);
extern void hmi_OnUniM119Release(tWidget *pWidget);

extern tCanvasWidget Label223;
extern tPushButtonWidget TextPushButton224;
extern void _OnTextPushButton224Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton224Click(tWidget *pWidget);
extern void hmi_OnTextPushButton224Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton225;
extern void _OnTextPushButton225Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton225Click(tWidget *pWidget);
extern void hmi_OnTextPushButton225Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton226;
extern void _OnTextPushButton226Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton226Click(tWidget *pWidget);
extern void hmi_OnTextPushButton226Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton227;
extern void _OnTextPushButton227Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton227Click(tWidget *pWidget);
extern void hmi_OnTextPushButton227Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton228;
extern void _OnTextPushButton228Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton228Click(tWidget *pWidget);
extern void hmi_OnTextPushButton228Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton229;
extern void _OnTextPushButton229Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton229Click(tWidget *pWidget);
extern void hmi_OnTextPushButton229Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton230;
extern void _OnTextPushButton230Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton230Click(tWidget *pWidget);
extern void hmi_OnTextPushButton230Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton231;
extern void _OnTextPushButton231Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton231Click(tWidget *pWidget);
extern void hmi_OnTextPushButton231Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton232;
extern void _OnTextPushButton232Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton232Click(tWidget *pWidget);
extern void hmi_OnTextPushButton232Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton233;
extern void _OnTextPushButton233Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton233Click(tWidget *pWidget);
extern void hmi_OnTextPushButton233Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton234;
extern void _OnTextPushButton234Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton234Click(tWidget *pWidget);
extern void hmi_OnTextPushButton234Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton235;
extern void _OnTextPushButton235Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton235Click(tWidget *pWidget);
extern void hmi_OnTextPushButton235Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton236;
extern void _OnTextPushButton236Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton236Click(tWidget *pWidget);
extern void hmi_OnTextPushButton236Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton237;
extern void _OnTextPushButton237Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton237Click(tWidget *pWidget);
extern void hmi_OnTextPushButton237Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton238;
extern void _OnTextPushButton238Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton238Click(tWidget *pWidget);
extern void hmi_OnTextPushButton238Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton239;
extern void _OnTextPushButton239Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton239Click(tWidget *pWidget);
extern void hmi_OnTextPushButton239Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton240;
extern void _OnTextPushButton240Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton240Click(tWidget *pWidget);
extern void hmi_OnTextPushButton240Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton241;
extern void _OnTextPushButton241Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton241Click(tWidget *pWidget);
extern void hmi_OnTextPushButton241Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton242;
extern void _OnTextPushButton242Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton242Click(tWidget *pWidget);
extern void hmi_OnTextPushButton242Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton243;
extern void _OnTextPushButton243Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton243Click(tWidget *pWidget);
extern void hmi_OnTextPushButton243Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton244;
extern void _OnTextPushButton244Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton244Click(tWidget *pWidget);
extern void hmi_OnTextPushButton244Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton245;
extern void _OnTextPushButton245Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton245Click(tWidget *pWidget);
extern void hmi_OnTextPushButton245Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton246;
extern void _OnTextPushButton246Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton246Click(tWidget *pWidget);
extern void hmi_OnTextPushButton246Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton247;
extern void _OnTextPushButton247Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton247Click(tWidget *pWidget);
extern void hmi_OnTextPushButton247Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton248;
extern void _OnTextPushButton248Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton248Click(tWidget *pWidget);
extern void hmi_OnTextPushButton248Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton249;
extern void _OnTextPushButton249Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton249Click(tWidget *pWidget);
extern void hmi_OnTextPushButton249Release(tWidget *pWidget);

extern tPushButtonWidget Un250;
extern void _OnUn250Paint(tWidget *, unsigned long);
extern void hmi_OnUn250Click(tWidget *pWidget);
extern void hmi_OnUn250Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton251;
extern void _OnTextPushButton251Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton251Click(tWidget *pWidget);
extern void hmi_OnTextPushButton251Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton252;
extern void _OnTextPushButton252Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton252Click(tWidget *pWidget);
extern void hmi_OnTextPushButton252Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton253;
extern void _OnTextPushButton253Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton253Click(tWidget *pWidget);
extern void hmi_OnTextPushButton253Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton254;
extern void _OnTextPushButton254Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton254Click(tWidget *pWidget);
extern void hmi_OnTextPushButton254Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton255;
extern void _OnTextPushButton255Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton255Click(tWidget *pWidget);
extern void hmi_OnTextPushButton255Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton282;
extern void _OnTextPushButton282Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton282Click(tWidget *pWidget);
extern void hmi_OnTextPushButton282Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton256;
extern void _OnTextPushButton256Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton256Click(tWidget *pWidget);
extern void hmi_OnTextPushButton256Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton257;
extern void _OnTextPushButton257Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton257Click(tWidget *pWidget);
extern void hmi_OnTextPushButton257Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton258;
extern void _OnTextPushButton258Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton258Click(tWidget *pWidget);
extern void hmi_OnTextPushButton258Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton261;
extern void _OnTextPushButton261Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton261Click(tWidget *pWidget);
extern void hmi_OnTextPushButton261Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton262;
extern void _OnTextPushButton262Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton262Click(tWidget *pWidget);
extern void hmi_OnTextPushButton262Release(tWidget *pWidget);

extern tPushButtonWidget TextPushButton265;
extern void _OnTextPushButton265Paint(tWidget *, unsigned long);
extern void hmi_OnTextPushButton265Click(tWidget *pWidget);
extern void hmi_OnTextPushButton265Release(tWidget *pWidget);

extern tTimerWidget Timer292;
extern void hmi_OnTimer292Execute(tWidget *pWidget);
extern tCanvasWidget Label15;
extern tPushButtonWidget Sept16;
extern void _OnSept16Paint(tWidget *, unsigned long);
extern void hmi_OnSept16Click(tWidget *pWidget);
extern void hmi_OnSept16Release(tWidget *pWidget);

extern tPushButtonWidget Huit17;
extern void _OnHuit17Paint(tWidget *, unsigned long);
extern void hmi_OnHuit17Click(tWidget *pWidget);
extern void hmi_OnHuit17Release(tWidget *pWidget);

extern tPushButtonWidget Neuf18;
extern void _OnNeuf18Paint(tWidget *, unsigned long);
extern void hmi_OnNeuf18Click(tWidget *pWidget);
extern void hmi_OnNeuf18Release(tWidget *pWidget);

extern tPushButtonWidget Quatre19;
extern void _OnQuatre19Paint(tWidget *, unsigned long);
extern void hmi_OnQuatre19Click(tWidget *pWidget);
extern void hmi_OnQuatre19Release(tWidget *pWidget);

extern tPushButtonWidget Cinq20;
extern void _OnCinq20Paint(tWidget *, unsigned long);
extern void hmi_OnCinq20Click(tWidget *pWidget);
extern void hmi_OnCinq20Release(tWidget *pWidget);

extern tPushButtonWidget Six21;
extern void _OnSix21Paint(tWidget *, unsigned long);
extern void hmi_OnSix21Click(tWidget *pWidget);
extern void hmi_OnSix21Release(tWidget *pWidget);

extern tPushButtonWidget Un22;
extern void _OnUn22Paint(tWidget *, unsigned long);
extern void hmi_OnUn22Click(tWidget *pWidget);
extern void hmi_OnUn22Release(tWidget *pWidget);

extern tPushButtonWidget Deux23;
extern void _OnDeux23Paint(tWidget *, unsigned long);
extern void hmi_OnDeux23Click(tWidget *pWidget);
extern void hmi_OnDeux23Release(tWidget *pWidget);

extern tPushButtonWidget Trois24;
extern void _OnTrois24Paint(tWidget *, unsigned long);
extern void hmi_OnTrois24Click(tWidget *pWidget);
extern void hmi_OnTrois24Release(tWidget *pWidget);

extern tPushButtonWidget Zero25;
extern void _OnZero25Paint(tWidget *, unsigned long);
extern void hmi_OnZero25Click(tWidget *pWidget);
extern void hmi_OnZero25Release(tWidget *pWidget);

extern tPushButtonWidget Point27;
extern void _OnPoint27Paint(tWidget *, unsigned long);
extern void hmi_OnPoint27Click(tWidget *pWidget);
extern void hmi_OnPoint27Release(tWidget *pWidget);

extern tPushButtonWidget Entrer26;
extern void _OnEntrer26Paint(tWidget *, unsigned long);
extern void hmi_OnEntrer26Click(tWidget *pWidget);
extern void hmi_OnEntrer26Release(tWidget *pWidget);

extern tPushButtonWidget Supprime28;
extern void _OnSupprime28Paint(tWidget *, unsigned long);
extern void hmi_OnSupprime28Click(tWidget *pWidget);
extern void hmi_OnSupprime28Release(tWidget *pWidget);

extern tTimerWidget Timer132;
extern void hmi_OnTimer132Execute(tWidget *pWidget);
extern void Ondemarrage2Paint(tWidget *pWidget, tContext *pContext);
extern void OnConfigModule29Paint(tWidget *pWidget, tContext *pContext);
extern void OnConfigCapteur7Paint(tWidget *pWidget, tContext *pContext);
extern void OnAlerte120Paint(tWidget *pWidget, tContext *pContext);
extern void OnEtalonnage134Paint(tWidget *pWidget, tContext *pContext);
extern void OnSeuillage45Paint(tWidget *pWidget, tContext *pContext);
extern void OnMsgErreur172Paint(tWidget *pWidget, tContext *pContext);
extern void OnSeuilUn95Paint(tWidget *pWidget, tContext *pContext);
extern void OnAffichage112Paint(tWidget *pWidget, tContext *pContext);
extern void OnClavier44Paint(tWidget *pWidget, tContext *pContext);
extern void OnPavetNum14Paint(tWidget *pWidget, tContext *pContext);

extern tCanvasWidget Canvasdemarrage;
extern tCanvasWidget CanvasConfigModule;
extern tCanvasWidget CanvasConfigCapteur;
extern tCanvasWidget CanvasAlerte;
extern tCanvasWidget CanvasEtalonnage;
extern tCanvasWidget CanvasSeuillage;
extern tCanvasWidget CanvasMsgErreur;
extern tCanvasWidget CanvasSeuilUn;
extern tCanvasWidget CanvasAffichage;
extern tCanvasWidget CanvasClavier;
extern tCanvasWidget CanvasPavetNum;

extern void hmi_FreeFrameWidgets1();
extern void hmi_FreeFrameWidgets2();
extern void hmi_FreeFrameWidgets3();
extern void hmi_FreeFrameWidgets4();
extern void hmi_FreeFrameWidgets5();
extern void hmi_FreeFrameWidgets6();
extern void hmi_FreeFrameWidgets7();
extern void hmi_FreeFrameWidgets8();
extern void hmi_FreeFrameWidgets9();
extern void hmi_FreeFrameWidgets10();
extern void hmi_FreeFrameWidgets11();


extern void hmi_demarrage();
extern void hmi_ConfigModule();
extern void hmi_ConfigCapteur();
extern void hmi_Alerte();
extern void hmi_Etalonnage();
extern void hmi_Seuillage();
extern void hmi_MsgErreur();
extern void hmi_SeuilUn();
extern void hmi_Affichage();
extern void hmi_Clavier();
extern void hmi_PavetNum();

#endif
