#include <stdio.h>
#include<stdlib.h>
int main() {
int a, b;
system("getmac");
a = 5;
printf("Initial value of a: %d\n", a);
b = ++a;
printf("After pre-increment (++a): a = %d, b = %d\n", a, b);
a = 5;
b = a++;
printf("After post-increment (a++): a = %d, b = %d\n", a, b);
printf("\n");
a = 5;
printf("Initial value of a: %d\n", a);
b = --a;
printf("After pre-decrement (--a): a = %d, b = %d\n", a, b);
a = 5;
b = a--;
printf("After post-decrement (a--): a = %d, b = %d\n", a, b);
return 0;
}
