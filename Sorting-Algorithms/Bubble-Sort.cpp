// Bubble Sort is the simplest sorting algorithm
// that works by repeatedly swapping the adjacent elements
// if they are in the wrong order.

// Complexity Analysis of Bubble Sort:
// Time Complexity: O(N*N)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            // if (arr[j + 1] < arr[j])
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        // remaining portion of the array is already sorted
        // if sorted or like 10 20 30 40 50
        if (swapped == false)
            break;
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

    bubbleSort(arr, size);

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