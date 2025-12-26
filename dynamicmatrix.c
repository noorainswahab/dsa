#include <stdio.h>
#include <stdlib.h>
int main() {
int rows, cols;
system("getmac");
printf("Enter number of rows and columns: ");
scanf("%d %d", &rows, &cols);
int *arr = (int*)malloc(rows * cols * sizeof(int));
printf("Enter elements:\n");
for(int i = 0; i < rows; i++)
for(int j = 0; j < cols; j++)
scanf("%d", &arr[i*cols + j]);
printf("2D Array:\n");
for(int i = 0; i < rows; i++) {
for(int j = 0; j < cols; j++)
printf("%d ", arr[i*cols + j]);
printf("\n");
}
free(arr);
return 0;
}
