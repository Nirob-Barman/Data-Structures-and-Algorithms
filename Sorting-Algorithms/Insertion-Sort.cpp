// Insertion sort is a simple sorting algorithm
// that works similar to the way you sort playing cards in your hands.

// Complexity Analysis of Insertion Sort:

#include <bits/stdc++.h>
// Time Complexity: O(N*N)
// Auxiliary Space: O(1)

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key,
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, size);

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