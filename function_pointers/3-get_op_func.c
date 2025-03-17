#include "3-calc.h"

/**
 * get_op_func - Sélectionne la fnction appropriée en fonction de l'opérateu
 * @s: L'opératur
 * Return: Le pointeur vers la fonction correspondante
 */
int (*get_op_func(char *s))(int, int)
{
	{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	while (i < )
}
