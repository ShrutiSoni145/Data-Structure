
#include<stdio.h>
#include<stdlib.h>
void display();
void reverse();
int n,count=0;
struct list{
int d;
struct list *next;
};
struct list *start=NULL,*p=NULL,*node=NULL,*r=NULL,*t=NULL,*o=NULL;
void main(){


    printf("Enter element \n");
    scanf("%d",&n);
    while(n!=0){
        node=(struct list*) malloc(sizeof(struct list));
        node->d=n;
        node->next=NULL;
        if(start==NULL){
            start=node;
            p=node;
        }
        else{
                p->next=node;
                p=node;
        }
        printf("Enter element for insertion one more time or press 0 to stop insertion\n ");
        scanf("%d",&n);

    }
    display();
    reverse();
    printf("\nAfter reverse:\n");
    display();
}
void display(){
    printf("The elements of of linked list are:\n");
    p=start;
    while(p!=NULL){
            printf("%d\t",p->d);
            p=p->next;
    }
}
void reverse(){
//int i=1,j=1;
r=start->next;
while(r!=NULL){
    o=r->next;
    if(r==start->next){
        r->next=start;
        start->next=NULL;

    }
    else{
        r->next=t;
    }
    t=r;
    r=o;
}
start=t;
}


