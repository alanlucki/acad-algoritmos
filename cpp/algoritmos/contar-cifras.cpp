#include <iostream>

using namespace std;

int main()
{
    cout << "Obtiene Cantidad de Cifras de un Numero" << endl;
    cout << "=======================================" << endl;
    
    int n = 0;
    cout << "Ingrese un numero -> " ;
    cin >> n;

    int numero = n;
    
    int c = 0;
    while (n > 0)
    {
        n = n / 10;
        c++;
    }

    cout << "El numero " << numero << " tiene " << c << " cifras " << endl;

    return 0;
}