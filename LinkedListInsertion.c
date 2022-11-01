#include<stdio.h>
#include<stdlib.h>
void traversing();
struct list{
int d;
struct list *next;
}*start=NULL,*p=NULL,*node=NULL,*r;
void insertAtFront(){
node->next=start;
start=node;
printf("\nElements of linked list:");

traversing();
}
void insertAtMiddle(){
int pos,i=1;
printf("\nEnter your position\n");
scanf("%d",&pos);
if(pos==1){
/*if(start==NULL){
node->next=NULL;
}else{
node->next=start;
}
start=node;*/
insertAtFront();
}
else{
        r=start;
        while(i<(pos-1)&&r!=NULL){
            i++;
            r=r->next;
        }
        if(r==NULL)
            printf("you have entered wrong position\n");
        else{
            node->next=r->next;
            r->next=node;
            printf("\nElements of linked list:");

            traversing();
        }

}
}
void insertAtEnd(){
//node->next=NULL;
if(start==NULL){
node->next=NULL;
start=node;
}
else{
p->next=node;
}
p=node;
printf("\nElements of linked list:");
traversing();
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
node=(struct list*)malloc(sizeof(struct list));
printf("\nEnter element for linked list\n");
scanf("%d",&n);
node->d=n;
printf("1 for insertion at front\n");
printf("2 for insertion in middle\n");
printf("3 for insertion at end\n");
printf("4 for insertion at exit\n");

printf("Enter choice\n");
scanf("%d",&c);
switch(c){


case 1:insertAtFront();
       break;
case 2:insertAtMiddle();
       break;
case 3:insertAtEnd();
       break;
case 4:exit(0);
default:printf("wrong choice\n");


}
}
}

