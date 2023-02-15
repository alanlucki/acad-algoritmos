/* Programa: Hola mundo (Versión 2) */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include <time.h>

bool esPrimo(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    int i = 3;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
            return false;
        i = i + 2;
    }
    return true;
};

int main()
{
    double time_spent = 0.0;
	clock_t begin = clock();
    
    printf("\nNumeros Primos");
    printf("\n==============");

    int n = 10000000;
    int i = 1;
    int c = 0;
    while (i <= n)
    {
        if (esPrimo(i))
        {
            c++;
        }
        i++;
    }

    printf("\n%i", c);
	
    clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("\n%f seconds", time_spent);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}