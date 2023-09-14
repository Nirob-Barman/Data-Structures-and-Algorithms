#include <bits/stdc++.h>

using namespace std;

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

    printf("Before Insertion: ");
    printArrayElements(arr, n);

    int key;
    scanf("%d", &key);
    n += 1;
    arr[n - 1] = key;

    printf("After Insertion: ");
    printArrayElements(arr, n);
    return 0;
}

// input
// 4
// 50 40 30 20
// 10

// output
// Before Insertion: 50  40  30  20
// After Insertion: 50  40  30  20  10