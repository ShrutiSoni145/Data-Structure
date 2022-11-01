#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
char s[30];
int top=-1;
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
int pro(char e){
switch(e){

case '#':return 0;
case '(':return 1;
//case ('+'||'-'):return 2;//only constant integral expression are allowed in case statement.
case '+':
case '-':return 2;
case '*':
case '/':return 3;
case '$':return 4;
}
}
void main(){
char infix[30],postfix[30],ch,bracket;
int i=0,k=0;
printf("enter expression\n");
scanf("%s",&infix);
push('#');
while((ch=infix[i++])!='\0'){
    if(ch=='(')
        push(ch);
    else{
        if(isalnum(ch)){
            postfix[k]=ch;
            k++;
        }
        else{
            if(ch==')')
            {
            while(s[top]!='('){
                  postfix[k]=pop();
                  k++;
            }
            bracket=pop();

            }
            else{
                while(pro(s[top])>=pro(ch)){
                    postfix[k]=pop();
                    k++;

                }
                push(ch);
            }
        }
    }
}
while(s[top]!='#'){
    postfix[k]=pop();
    k++;

}
postfix[k]='\0';
printf("\n Given infix expression:%s",infix);
printf("\n Given postfix expression:%s",postfix);
}
