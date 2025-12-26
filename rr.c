#include <stdio.h>
#include<stdlib.h>
int main(){
system("getmac");
int r=3,c=3;
int mat[3][3]={
{0,0,5},
{0,8,0},
{3,0,0}
};
int sparse[10][3];
int k=0;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
if(mat[i][j]!=0){
sparse[k][0]=i;
sparse[k][1]=j;
    sparse[k][2]=mat[i][j];
   k++;
}
}}
printf("Row Col Value\n");
for(int i=0;i<k;i++)
printf("%d   %d   %d\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    return 0;
}
