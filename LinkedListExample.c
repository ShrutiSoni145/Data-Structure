#include<stdio.h>
#include<stdlib.h>
struct list{
int d;
struct list *next;
}*start=NULL,*p=NULL,*node=NULL;
void insertAtFront(int n){
node=(struct list*)malloc(sizeof(struct list));
node->d=n;
node->next=start;
start=node;
}
void insertAtEnd(int n){

node=(struct list*)malloc(sizeof(struct list));
node->d=n;
node->next=NULL;
if(start==NULL){
start=node;
}
else{
p->next=node;
}
p=node;
}

void traversing(){
p=start;
while(p!=NULL){
printf("%d \t",p->d);
p=p->next;
}
}
/*int deletion(){
int k;
k=p->d;
p=NULL;
}*/

void main(){
int n,c;
while(1){
printf("\nEnter choice\n");
scanf("%d",&c);
switch(c){


case 1:printf("Enter element at the front\n");
       scanf("%d",&n);
       insertAtFront(n);
       break;
case 2:printf("Enter element at the end\n");
       scanf("%d",&n);
       insertAtEnd(n);
       break;
case 3:printf("The element of linked list:\n");
       traversing();
       break;


}
}
}

