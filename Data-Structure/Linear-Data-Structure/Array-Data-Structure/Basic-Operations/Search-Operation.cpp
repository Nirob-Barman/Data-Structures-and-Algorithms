// Time Complexity: O(N)
// Auxiliary Space : O(1)

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

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);
    int position = findElement(arr, n, key);
    if (position == -1)
    {
        printf("Element not present\n");
    }
    else
    {
        printf("Element present at %d\n", position);
    }
    return 0;
}

// input
// 4
// 50 40 30 20
// 30

// output
// Element present at 2