#include <bits/stdc++.h>

using namespace std;

int findElement(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int deleteElement(int arr[], int n, int key)
{
    int index = findElement(arr, n, key);
    if (index != -1)
    {
        for (int i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    // If the element to delete is not found,
    // no changes are made to the array
    return n;
}

void printArrayElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before deletion: ");
    printArrayElements(arr, n);
    int updatedSize = deleteElement(arr, n, 2);
    if (n != updatedSize)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("After deletion: ");
        printArrayElements(arr, updatedSize);
    }
    return 0;
}

// input
// 4
// 50 40 30 20
// 10

// output
// Before deletion: 50  40  30  20
// Element not found