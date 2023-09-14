#include <bits/stdc++.h>

using namespace std;

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

    // Sorting the array
    sort(arr, arr + size);

    // Using binary_search to find the target element
    bool result = binary_search(arr, arr + size, target);

    if (result)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }

    // lower_bound(start_ptr, end_ptr, num):
    // Returns pointer to the position of num
    // if the container contains only one occurrence of num

    //  It returns an iterator
    // pointing to the first element in the range
    // that is not less than the specified value.

    // Finding lower_bound
    auto lower = lower_bound(arr, arr + size, target);

    if (lower != arr + size && *lower == target)
    {
        printf("Next greater element: %d\n", *lower);

        int position = lower - arr;
        printf("Element found at index %d\n", position);
    }
    else
    {
        printf("Element not found\n");
    }

    // upper_bound(start_ptr, end_ptr, num):
    // Returns pointer to the position after the last occurrence of num

    // It returns an iterator
    // pointing to the first element in the range
    // that is greater than the specified value.

    // Finding upper_bound
    auto upper = upper_bound(arr, arr + size, target);

    if (upper != arr + size)
    {
        printf("Next greater element: %d\n", *upper);

        int position = upper - arr;
        printf("Element found at index %d\n", position);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}

// input
// Enter the size of the array: 5
// Enter 5 elements separated by spaces: 10 20 30 40 50
// Enter the target element to search: 30

// output
// Element found
// Next greater element: 30
// Element found at index 2
// Next greater element: 40
// Element found at index 3
