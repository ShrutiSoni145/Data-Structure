#include<stdio.h>
#include<stdlib.h>
#define size 6
int q[size];
int f=-1,r=-1;
void Ifront(int e){
if(f==0&&r==(size-1)){
   printf("Queue is full\n");
   exit(0);
}
if(f==-1){
    f=0;
    r=0;
    q[f]=e;
}else if(f>0){
f--;
q[f]=e;
}
else{
    printf("queue is full from front, you should enter element at rear end\n");
}
}

void Irear(int e){
if(f==0&&r==(size-1)){
    printf("Queue is full\n");
    exit(0);
}
if(f==-1){
    f=0;
    r=0;
    q[r]=e;
}else if(r<(size-1)){
    r++;
    q[r]=e;
}else{
printf("queue is full from rear, you should enter element at front end\n");
}
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
    printf("\nEnter your choice\n1 for insertion \n2 for deletion\n3 for traversing\n");
    scanf("%d",&c);
    switch(c){
    case 1:printf("Enter element for queue\n");
           scanf("%d",&t);
           printf("Enter 1 for insertion at front end\nOr enter 2 for insertion at rear end\n");
    scanf("%d",&a);
    switch(a){
        case 1:Ifront(t);
                break;
        case 2:Irear(t);
               break;
        default:printf("wrong choice\n");
    }
           break;
    case 2:printf("Enter 1 for deletion at front end\nOr enter 2 for deletion at rear end\n");
           scanf("%d",&a);
           switch(a){
               case 1:t=dfront();
                      printf("Deleted element from front end:%d\n",t);
                      break;
               case 2:t=drear();
                       printf("Deleted element from rear end:%d\n",t);
                       break;
               default:printf("Wrong choice\n");
           }
           break;
    case 3:printf("The queue elements are:\n");
           traversing();
           break;
    case 4:exit(0);
    default:printf("wrong choice\n");
    }
}
}
