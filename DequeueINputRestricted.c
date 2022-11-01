#include<stdio.h>
#include<stdlib.h>
#define size 6
int q[size];
int f=-1,r=-1;
void insert(int e){
if(f==0&&r==(size-1)){
    printf("Queue is full\n");
    exit(0);
}
if(f==-1){
    f=0;
    r=0;
}
else{
    r++;
}
q[r]=e;
}
int dfront(){
int k;
if(f==-1){
    printf("Queue is empty\n");
    exit(0);
}
k=q[f];
if(f==r){
    f=-1;
    r=-1;
}
else{
    f++;
}
return k;
}
int drear(){
int k;
if(f==-1){
    printf("Queue is empty\n");
    exit(0);
}
k=q[r];
if(f==r){
    f=-1;
    r=-1;
}
else{
    r--;
}
return k;
}
void traversing(){
int i;
    for(i=f;i<=r;i++)
        printf("%d\t",q[i]);
}
void main(){
int c,a,t;
while(1){
    printf("\nEnter your choice\n");
    scanf("%d",&c);
    switch(c){
    case 1:printf("Enter element for queue\n");
           scanf("%d",&t);
           insert(t);
           break;
    case 2:printf("Enter 1 for deletion from front end\nOr enter 2 for deletion from rear end\n");
    scanf("%d",&a);
    switch(a){
        case 1:t=dfront();
               break;
        case 2:t=drear();
               break;
        default:printf("wrong choice\n");
    }
    printf("Deleted element:%d\n",t);
    break;
    case 3:printf("The queue elements are:\n");
           traversing();
           break;
    case 4:exit(0);
    default:printf("wrong choice\n");
    }
}
}
