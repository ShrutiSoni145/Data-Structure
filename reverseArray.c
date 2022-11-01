#include<stdio.h>
void reverse(int *);
void main(){
int a[5];
reverse(a);
}
void reverse(int *p){
int i;
printf("Enter elements array:\n");
for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    printf("The elements of array:\n");
    for(i=0;i<5;i++){
        printf("%d ",*(p+i));

    }
    printf("\nArray elements in reverse order:\n ");
    for(i=4;i>=0;i--){
        printf("%d ",*(p+i));
    }
}
