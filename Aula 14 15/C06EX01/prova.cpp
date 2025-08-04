#include <iostream>

using namespace std;

int main(void)
{
    int x = 7, r;
    int i = 0;

    //questão 3

    if (x++ == 7 && x++ == 8 && ++x == 10)
        r = x + 1;
    else
    {
        r =  x * 2;
        x++;
    }
    cout << r;

    // questão 4

    while (i <= 9)
        cout << i;
        i++;

    return 0;
}
