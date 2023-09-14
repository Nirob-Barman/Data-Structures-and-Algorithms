// Counting sort is a sorting technique
// based on keys between a specific range.
// It works by counting the number of objects
// having distinct key values (a kind of hashing).

// Counting sort is efficient if the range of
// input data is not significantly greater than
// the number of objects to be sorted.
// Consider the situation where the input sequence is
// between the range 1 to 10K and the data is 10, 5, 10K, 5K.

// Time Complexity: O(N + K)
// where N is the number of elements in the input array
// and K is the range of input.
// Auxiliary Space : O(N + K)

#include <bits/stdc++.h>

using namespace std;

void countingSort(int arr[], int n)
{
    // Find the maximum element to determine the range
    int maxElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    // Create a count array to store the frequency of each element
    int count[maxElement + 1] = {0};

    // Calculate the frequency of each element in the input array
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Reconstruct the sorted array using the count array
    int index = 0;
    for (int i = 0; i <= maxElement; i++)
    {
        while (count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
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

    countingSort(arr, size);

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