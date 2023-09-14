// Merge sort is defined as a sorting algorithm
// that works by dividing an array into smaller subarrays,
// sorting each subarray,
// and then merging the sorted subarrays back together
// to form the final sorted array.

// Complexity Analysis of Merge Sort:
// Time Complexity: O(nlogn)
// Auxiliary Space: O(N)

#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int left, int middle, int right)
{
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    int leftArray[leftSize], rightArray[rightSize];

    int k = 0;
    for (int i = left; i <= middle; i++)
    {
        leftArray[k] = arr[i];
        k++;
    }

    k = 0;
    for (int i = middle + 1; i <= right; i++)
    {
        rightArray[k] = arr[i];
        k++;
    }

    int i = 0, j = 0;
    int cur = left;
    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[cur] = leftArray[i];
            i++;
        }
        else
        {
            arr[cur] = rightArray[j];
            j++;
        }
        cur++;
    }

    // Copy the remaining elements of leftArray (if any)
    while (i < leftSize)
    {
        arr[cur] = leftArray[i];
        i++;
        cur++;
    }

    // Copy the remaining elements of rightArray (if any)
    while (j < rightSize)
    {
        arr[cur] = rightArray[j];
        j++;
        cur++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        // Divide the problem into subproblems
        // Find where to split the set

        // int middle = left + (right - left) / 2;
        int middle = (left + right) / 2;

        // Solve the subproblems
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Combine the solutions
        merge(arr, left, middle, right);
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

    mergeSort(arr, 0, size - 1);

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