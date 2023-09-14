// Binary Search is defined as a searching algorithm
// used in a sorted array by repeatedly dividing the search interval in half.

// Time Complexity: O(log N)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>

using namespace std;

int iterativeBinarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        // int mid = left + (right-left)/2;
        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements separated by spaces: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int result = iterativeBinarySearch(arr, 0, size - 1, target);
    if (result == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index %d\n", result);
    }

    return 0;
}

// input
// Enter the size of the array: 7
// Enter 7 elements separated by spaces: 1 3 5 7 9 11 13
// Enter the target element to search: 7

// output
// Element found at index 3