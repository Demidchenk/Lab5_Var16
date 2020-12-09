#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 1;
    bool c = true;
    while (b < 100)
    {
        b += a;
        a = b - a;
        c = true;
        for (int i = 2; i < b / 2; i++)
        {
            if (b % i == 0) c = false;
        }
        if (c) cout << b << endl;
    }
    return 0;
}
