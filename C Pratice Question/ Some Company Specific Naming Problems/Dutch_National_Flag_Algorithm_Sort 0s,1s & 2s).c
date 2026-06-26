//Dutch National Flag Algorithm ( Sort 0s,1s & 2s)
#include <stdio.h>

void sort012(int arr[], int n) 
{
    int low = 0, mid = 0, high = n - 1;
    int temp;

    while (mid <= high)
    {
        if (arr[mid] == 0) 
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1) 
        {
            mid++;
        }
        else { // arr[mid] == 2
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

int main() 
{
    int arr[] = {2, 0, 1, 2, 1, 0};
    int n = 6;

    sort012(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}