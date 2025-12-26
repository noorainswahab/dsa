#include <stdio.h>
#include <stdlib.h>
int main()
{
system("getmac");
int a = 1;
int *ptr;
ptr = &a;
printf("Value of a = %d\n", a);
printf("Address of a = %p\n", (void *)&a);
printf("Address stored in pointer ptr = %p\n", (void *)ptr);
printf("Address of pointer ptr = %p\n", (void *)&ptr);
return 0;
}
