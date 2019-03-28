#ifndef __DICT_H
#define __DICT_H

#undef One
extern HVAR One;
#undef NextF
extern HVAR NextF;
#undef tmp
extern HVAR tmp;

extern PVAR __var_table[];
extern int table_init_flag;
extern void passDataThruBindingOnChange();


#endif
