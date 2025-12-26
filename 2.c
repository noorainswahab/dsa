#include <stdio.h>
#include <stdlib.h>

int main() {
    system("getmac");
    int n = 5;
    int *arr_malloc, *arr_calloc;

    // malloc
    arr_malloc = (int*)malloc(n * sizeof(int));
    printf("Contents of malloc array:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr_malloc[i]);  // Usually garbage values
    printf("\n");

    // calloc
    arr_calloc = (int*)calloc(n, sizeof(int));
    printf("Contents of calloc array:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr_calloc[i]);  // All zeros
    printf("\n");

    free(arr_malloc);
    free(arr_calloc);
    return 0;
}
