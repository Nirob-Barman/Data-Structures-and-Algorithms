// Selection sort is a simple and efficient sorting algorithm
// that works by repeatedly selecting the smallest (or largest) element
// from the unsorted portion of the list
// and moving it to the sorted portion of the list.

// Complexity Analysis of Selection Sort
// Time Complexity: O(N*N)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int curMinValueIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            // if (arr[j] < arr[curMinValueIndex])
            if (arr[curMinValueIndex] > arr[j])
            {
                curMinValueIndex = j;
            }
        }

        if (curMinValueIndex != i)
            swap(arr[i], arr[curMinValueIndex]);
    }
}

int main()
{
    int size;
    // printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    // printf("Enter %d elements separated by spaces: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, size);

    printf("Sorted array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// input
// Enter the size of the array: 5
// Enter 5 elements separated by spaces: 50 40 30 20 10

// output
// Sorted array:
// 10 20 30 40 50
