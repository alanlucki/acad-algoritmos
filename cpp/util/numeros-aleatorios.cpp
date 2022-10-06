#include <iostream>
#include <random>

using namespace std;

double Math_random()
{
    random_device r;
    double rand = r();
    double base = r.max();
    return rand / base;
}

double aleatorioEntre(int min, int max)
{
    return Math_random() * (max + 1 - min) + min;
}

int main()
{

    for (int i = 0; i < 20; i++)
    {
        double val = aleatorioEntre(1, 10);
        cout << val << endl;
    }

    return 0;
}