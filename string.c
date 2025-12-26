#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(){
    system("getmac");
    char a[50],b[50];
    printf("Enter main string \n");
    printf("Enter match string \n");
    scanf("%s%s",a,b);
    if(strcmp(a,b)==0) printf("Strings are equal");
    else printf("Strings are not equal");
    return 0;
}
