#include <stdio.h>
#include <stdlib.h>
int main(){
int text[100], pattern[100], n, m, i, j, found;
system("getmac");
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for(i = 0; i < n; i++)
scanf("%d", &text[i]);
printf("Enter size of pattern: ");
scanf("%d", &m);
printf("Enter pattern elements: ");
for(i = 0; i < m; i++)
scanf("%d", &pattern[i]);
printf("Pattern found at positions: ");
for(i = 0; i <= n - m; i++){
found = 1;
for(j = 0; j < m; j++){
if(text[i + j] != pattern[j]){
found = 0;
break;
}
}
if(found)
printf("%d ", i+1);
}
printf("\n");
return 0;
}
