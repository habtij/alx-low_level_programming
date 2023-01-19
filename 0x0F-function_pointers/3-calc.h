#ifndef _CALC_H_
#define _CALC_H_

/**
 * struct ops - struct operator
 * @op: first member
 * @f: second member
 *
 * Description: The structure has two members op and f, op is operator,
 * while f is the callback fua3cdfbd6d02e1bec3508nction
 */
typedef struct ops
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *s))(int, int);

#endif /* _CALC_H_ */
