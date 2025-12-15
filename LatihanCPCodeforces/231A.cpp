#include <bits/stdc++.h>
using namespace std;

int probNum;
int solveable = 0;

int main()
{
    cin >> probNum;

    for(int i = 0; i < probNum; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2)
        {
            solveable++;
        }
    }

    cout << solveable;

    return 0;
}