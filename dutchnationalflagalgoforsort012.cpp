// DUTCH NATIONAL FLAg ALGORITHM;

// 0 0 0 0 0 1 1 1 1 1 _ _UNSORTED ARR________ _ 2 2 2 2;
// 0.        LOW.     mid.                    high.   n-1

#include <iostream>
using namespace std;
int main()
{
    int arr[12] = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    int low = 0;
    int mid = 0;
    int high = 11;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
}