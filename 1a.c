#include<stdio.h>
#include<stdlib.h>
int main()
{
system("getmac");
int*p=malloc(5*sizeof(int));
for(int i=0;i<5;i++)
p[i]=0;
for(int i=0;i<5;i++)
printf("%d ",p[i]);
free(p);
return 0;
}
