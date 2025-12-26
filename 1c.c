#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, oldn, i;
    {

        system("getmac");
        printf("Enter initial size: ");
        scanf("%d", &n);

        int *arr = (int *)malloc(n * sizeof(int));
        {
            printf("Enter %d integers:", n);
            for(i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
        }
        {
            oldn = n;
            printf("Enter new size: ");
            scanf("%d", &n);

            arr = (int *)realloc(arr, n * sizeof(int));

            printf("Enter %d more integers:", n - oldn);
            for(i = oldn; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
        }
        {
            printf("Final array elements:\n");
            for(i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        free(arr);
    }
    return 0;
}
