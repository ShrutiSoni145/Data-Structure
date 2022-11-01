#include<stdio.h>
//#include<ctype.h>
#include<stdlib.h>
int s[30];
int top=-1;
void push(int e){
if(isFull()==0){
    printf("Stack is full\n");
    exit(0);
}
s[++top];
//top++;
//s[top]=e;
}
int pop(){
if(top==-1){
    printf("Stack is empty\n");
    exit(0);
}
return (s[top--]);//first return st[top],then top--.
}
int isFull(){
if(top==29)
    return 0;
else
    return 1;
}
void display(){
int i;
if(top==-1){
printf("stack is empty\n");
exit(0);
}
for(i=0;i<top;i++)
{
printf("%d\t",s[i]);
}
}
void main(){
int c,t;
while(1){
printf("Enter your choice\n");
scanf("%d",&c);
switch(c){
case 1: printf("\n enter element for stack\n");
        scanf("%d",&t);
        push(t);
        break;
case 2: t=pop();
        printf("\n deletion element:%d\n",t);
        break;
case 3: printf("The elements of stack are:\n");
        display();
        break;
default:printf("you have entered wrong choice please enter choice 1,2,or 3\n");
}
}
}
