#ifndef __DICT_H
#define __DICT_H

#undef One
extern HVAR One;
#undef NextF
extern HVAR NextF;
#undef tmp
extern HVAR tmp;
#undef ErrFrom
extern HVAR ErrFrom;
#undef ErrFrom3
extern HVAR ErrFrom3;
#undef ErrFrom4
extern HVAR ErrFrom4;

extern PVAR __var_table[];
extern int table_init_flag;
extern void passDataThruBindingOnChange();


#endif
