#include "hmiworks.h"

HVAR One = {0, 0, 0, 0, 0, 2, 0};
HVAR NextF = {1, 0, 0, 0, 0, 2, 0};
HVAR tmp = {0, 0, 0, 0, 0, 2, 0};
HVAR ErrFrom = {0, 0, 0, 0, 0, 2, 0};
HVAR ErrFrom3 = {0, 0, 0, 0, 0, 2, 0};
HVAR ErrFrom4 = {0, 0, 0, 0, 0, 2, 0};
PVAR __var_table[6];
int table_init_flag = 0;

void var_table_init()
{
table_init_flag = 1;
  __var_table[0] = &One;
  __var_table[1] = &NextF;
  __var_table[2] = &tmp;
  __var_table[3] = &ErrFrom;
  __var_table[4] = &ErrFrom3;
  __var_table[5] = &ErrFrom4;
}

int __var_count() { return 6; }

void passDataThruBindingOnChange()
{
}

