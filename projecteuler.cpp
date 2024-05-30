#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool check_triplet(int a, int b, int c)
{
    if ((pow(a,2) + pow(b,2)) == pow(c,2))
    {
        // cout << "IS THIS EVER TRUE";
        // cout << a << b << c << endl;
        return true;
    }
    else
        return false;
}

int main()
{
    // int a=1;
    // int b=2;
    int c = 0;

    for (int b = 1000; b > 0; b--)
    {
        for (int a = 998; a > 0; a--)
        {
            if(a<b)
                break;
            c = 1000 - a - b;
            if (check_triplet(a, b,c))
            {
                cout << a*b*c;
            }
        }
    }


    return 0;
}