#include<stdio.h>
#include<stdlib.h>
struct list{
int d;
struct list *next;
};
void main(){
    struct list *start=NULL,*p=NULL,*node=NULL;
    int n;
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
    printf("The elements of of linked list are:\n");
    p=start;
    while(p!=NULL){
            printf("%d\t",p->d);
            p=p->next;
    }
}
