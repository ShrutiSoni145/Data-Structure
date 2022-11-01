#include<stdio.h>
//#include<ctype.h>
#include<stdlib.h>
char s[30];
int top=-1,len=0;
void push(char e){
if(isFull()==0){
    printf("Stack is full\n");
    exit(0);
}
//s[++top];
top++;
s[top]=e;
}
char pop(){
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
for(i=0;i<len;i++)
{
printf("%c",s[i]);
}
}
void reverse(){
int i;
char k;
for(i=0;i<(len/2);i++){
k=pop();
s[top+1]=s[i];
s[i]=k;
}
}
void main(){
char ch;
printf("Enter name:\n");
while((ch=getchar())!='\n'){
push(ch);
len++;
}
printf("\nyour name is:\n");
display();
reverse();
printf("\nyour reverse name is:\n");
display();
}
