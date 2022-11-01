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
char prefix[30],ch,c,temp;
int i=0,len=0,p,q;
float a,b;
printf("Read prefix expression:\n");
while((ch=getchar())!='\n'){
    if(ch!=','){
        prefix[i++]=ch;
        len++;
    }
}
prefix[i]='\0';

q=len-1;
p=0;
while(p<len/2){
    temp=prefix[p];
    prefix[p]=prefix[q];
    prefix[q]=temp;
    p++;
    q--;
}

i=0;
while((c=prefix[i++])!='\0'){
      if(isdigit(c)){
         push((float) c-48);
      }
      else{
        a=pop();
        b=pop();
        switch(c){
        case '+':push(a+b);
                 break;
        case '-':push(a-b);
                 break;
        case '*':push(a*b);
                 break;
        case '/':push(a/b);
                 break;
        //case '%':push(a%b);
          //       break;
        //case '^':push(a^b);
              //   break;
        default: printf("wrong operator\n");

        }
      }
}
printf("prefix expression:%s\n",prefix);
printf("calculated value:%f\n",s[top]);
}
