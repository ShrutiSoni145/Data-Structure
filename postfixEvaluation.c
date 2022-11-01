#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
float s[30];
int top=-1;
void push(float e){
if(isFull()==0){
    printf("Stack is full\n");
    exit(0);
}
//s[++top];
top++;
s[top]=e;
}
float pop(){
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
void main(){
char postfix[30],ch,c;
int i=0,j=0;
float a,b;
printf("Read postfix expression:\n");
while((ch=getchar())!='\n'){
    if(ch!=',')
        postfix[i++]=ch;
}
postfix[i]='\0';
i=0;
while((c=postfix[i++])!='\0'){
      if(isdigit(c)){
         push((float) c-48);
      }
      else{
        a=pop();
        b=pop();
        switch(c){
        case '+':push(b+a);
                 break;
        case '-':push(b-a);
                 break;
        case '*':push(b*a);
                 break;
        case '/':push(b/a);
                 break;
        //case '%':push(b%a);
          //       break;
        //case '^':push(b^a);
              //   break;
        default: printf("wrong operator\n");

        }
      }
}
printf("postfix expression:%s\n",postfix);
printf("calculated value:%f\n",s[top]);
}
