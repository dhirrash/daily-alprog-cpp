#include <iostream>
using namespace std;

void inputData(int &arrSize, int arr[]);
void menu(int arrSize, int arr[]);
void swap(int &a, int &b);
void bubbleSort(int arrSize, int arr[]);
void selectionSort(int arrSize, int arr[]);
void outputData(int arrSize, int arr[]);

int main()
{
    int arrSize;
    int arr[100];
    inputData(arrSize, arr);
    menu(arrSize, arr);
    outputData(arrSize, arr);
    return 0;
}

void inputData(int &arrSize, int arr[])
{
    cout << "Input array size: ";
    cin >> arrSize;

    cout << "Input array elements: ";
    for(int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
}

void menu(int arrSize, int arr[])
{
    int choice;
    cout << "\n----- Choose sorting method -----\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "Your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            bubbleSort(arrSize, arr);
            cout << "\nArray sorted using Bubble Sort.\n";
            break;
        case 2:
            selectionSort(arrSize, arr);
            cout << "\nArray sorted using Selection Sort.\n";
            break;
        default:
            cout << "Invalid choice!\n";
            break;
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arrSize, int arr[])
{
    for(int i = 0; i < arrSize - 1; i++)
    {
        for(int j = 0; j < arrSize - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(int arrSize, int arr[])
{
    for(int i = 0; i < arrSize - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < arrSize; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void outputData(int arrSize, int arr[])
{
    cout << "\nSorted array: ";
    for(int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
