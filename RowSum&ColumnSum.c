#include<stdio.h>
//int a[2][2];
//#define TRUE 1;
//#define FALSE 0;
int *InputOutput(int a[][3]);
int sumAndAddOfRSSum(int a[][3],int choice);
void main(){
  int s[3][3];
  int *q;
  q=InputOutput(s);
  printf("addition of row sum = %d\n",sumAndAddOfRSSum(q,1));
  printf("addition of column sum=%d\n",sumAndAddOfRSSum(q,0));
}
int *InputOutput(int a[][3]){
int i,j;
int *p;
printf("Enter values:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("The 2D array is:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d  ",a[i][j]);
    }
    printf("\n");
}
p=a;
return p;
}
int sumAndAddOfRSSum(int a[][3],int choice){
int i,j;
int s=0;
int add=0;
for(i=0;i<3;i++){
    s=0;
    for(j=0;j<3;j++){
            if(choice){
                s=s+a[i][j];
            }else{
                s=s+a[j][i];
            }
    }
    printf("sum :%d\n ",s);
    add=add+s;
}
return add;
}
