#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("2D Array:\n");
    // printing 2d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// input
// 2 3
// 10 20 30
// 40 50 60

// output
// 2D Array:
// 10 20 30
// 40 50 60
