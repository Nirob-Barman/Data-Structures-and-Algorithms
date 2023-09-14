// Complexity Analysis of Linear Search:
// Best Case: O(1)
// Worst Case: O(N)
// Average Case: O(N)

#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
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
    int result = linearSearch(arr, size, target);
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
// Enter the size of the array: 5
// Enter 5 elements separated by spaces: 10 20 30 40 50
// Enter the target element to search: 30

// output
// Element found at index 2