#ifndef FUCTION_POINTERS
#define FUCTION_POINTERS
void print_name(char *name, void (*f)(char *));
typedef __SIZE_TYPE__ size_t;
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif
