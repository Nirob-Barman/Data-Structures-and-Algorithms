// Time complexity: O(N)
// Auxiliary Space : O(1)

#include <bits/stdc++.h>

using namespace std;

void printArrayElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

void insertElement(int arr[], int n, int key, int position)
{
    for (int i = n - 1; i >= position; i--)
        arr[i + 1] = arr[i];
    arr[position] = key;
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

    printf("Before Insertion: ");
    printArrayElements(arr, n);

    int key, position;
    scanf("%d %d", &key, &position);
    insertElement(arr, n, key, position);
    n += 1;

    printf("After Insertion: ");
    printArrayElements(arr, n);
    return 0;
}

// input
// 4
// 50 40 30 20
// 10 2

// output
// Before Insertion: 50  40  30  20
// After Insertion: 50  40  10  30  20
