#include "hmiworks.h"

extern int ladder_test_ldx(int);


BYTE ladder_main(BYTE en)
{
  ladder_test_ldx(en);
  return 1;
}

