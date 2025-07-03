/**
 * factorial - calcule la factorielle d'un nombre entier n
 * @n: l'entier dont on veut la factorielle
 *
 * Return : factoriel si nombre positif
 */ 
int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
