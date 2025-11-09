#include <iostream>
using namespace std;

void inputData(int &arrSize, int arr[])
{
    cin >> arrSize;
    for(int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int &a, int arr[])
{
    for(int i = 0; i < a - 1; i++)
    {
        for(int j = 0; j < a - i - 1; j++)
        {
            if(arr[j] > arr [j + 1])
            {
                swap(arr[j], arr[j +1]);
            }
        }
    }
}

void outputData(int a, int arr[])
{
    for(int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a;
    int arr[100];
    inputData(a, arr);
    bubbleSort(a, arr);
    outputData(a, arr);

    return 0;
}

