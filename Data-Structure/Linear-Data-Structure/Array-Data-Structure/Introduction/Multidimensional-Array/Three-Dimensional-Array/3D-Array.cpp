#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int arr[x][y][z];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("3D Array:\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n"); // Separate 2D slices with a blank line
    }

    return 0;
}
