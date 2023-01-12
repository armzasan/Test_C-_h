#include <stdlib.h>
#include <iostream>
using namespace std;
struct Digits
{
    int d = 0;
    int k = 0;
    int n;
    int g;
} * x, *y, *b, *e;

int sum_digit(Digits *d);
int sum_digit1(Digits *k);

int main()
{

    x = new Digits;
    b = new Digits;

    x->n = 15647;
    b->g = 1732;

    cout << x->n << " = ";
    sum_digit(x);
    cout << x->d << '\n';

    cout << b->g << " = ";
    sum_digit1(b);
    cout << b->k << '\n';

    system("pause");

    return 0;
}

int sum_digit(Digits *d)
{

    if (d->n != 0)
    {

        d->d += d->n % 10;

        d->n /= 10;

        return d->d + sum_digit(d);
    }
    else
    {
        // If the number is zero, return the running total
        return 0;
    }
}

int sum_digit1(Digits *k)
{

    if (k->g != 0)
    {

        k->k += k->g % 10;

        k->g /= 10;

        sum_digit1(k);
    }

    return k->k;
}

