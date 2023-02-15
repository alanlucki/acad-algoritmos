#include <iostream>
#include <cmath>

using namespace std;

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
    cout << "Numeros Primos" << endl;
    cout << "==============" << endl;

    int n = 10000000;
    int i = 1;
    int c = 0;
    while (i <= n)
    {
        if (esPrimo(i)){
            //cout << i << endl;
            c++;
        }
            
        i++;
    }
    
    cout << c << endl;
    
    return 0;
}