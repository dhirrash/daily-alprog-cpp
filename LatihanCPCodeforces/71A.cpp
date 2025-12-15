#include <string>
#include <iostream>
using namespace std;

int main()
{
    int numOfInput;
    cin >> numOfInput;
    string longWords[100];

    for (int i = 0; i < numOfInput; i++)
    {
        cin >> longWords[i];
    }
    
    for (int i = 0; i < numOfInput; i++)
    {
        size_t wordsLength =  longWords[i].length();
        if(wordsLength > 2)
        {
        wordsLength -= 2;
        }

        if(wordsLength > 8)
        {
            cout << longWords[i].front() << wordsLength
            << longWords[i].back() <<'\n';
        }
        else
        {
            cout << longWords[i] <<'\n';
        }

    }
    return 0;
}