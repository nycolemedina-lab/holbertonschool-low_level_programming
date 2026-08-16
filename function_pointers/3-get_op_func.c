#include "calc.h"
#include <stdlib.h>
#include <string.h>
/**
* get_op_func - select the correct function to preform
*		the arithmetic operation
* @s: operetor string passed as argument
*
* Return: pointer to the function corresponding to the operator,
*	or NULL if the operator is invalud or is NULL
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && s != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
