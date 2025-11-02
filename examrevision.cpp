// REVISION
#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubblesort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void insertionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int m = (s + e) / 2;
    while (s <= e)
    {

        if (arr[m] == key)
        {
            return m;
        }

        if (arr[m] > key)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }

        m = (s + e) / 2;
    }
    return -1;
}
int main()
{
    int n = 5;
    int key;
    cin >> key;
    int arr[5] = {12, 13, 45, 65, 99};

    // selectionsort
    // selectionsort(arr, n);
    /*  */
    bubblesort(arr, n);
    // insertionsort(arr, n);
    // int p = binarysearch(arr, n, key);
    // cout << "elemnt is fount at" << p << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
