// Time Complexity:
// Best Case: O(1)
// Average Case: O(log N)
// Worst Case: O(log N)

// Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space will be O(logN).

#include <bits/stdc++.h>

using namespace std;

int recursiveBinarySearch(int arr[], int left, int right, int target)
{
    if (left <= right)
    {
        // int mid = left + (right-left)/2;
        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            return recursiveBinarySearch(arr, left, mid - 1, target);
        }
        else
        {
            return recursiveBinarySearch(arr, mid + 1, right, target);
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
    int result = recursiveBinarySearch(arr, 0, size - 1, target);
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