#include<stdio.h>
#include<string.h>
void concatenate(char *,char *);
void main(){
char s1[20],s2[20];
printf("Enter first string:\n");
gets(s1);
printf("Enter second string:\n");
gets(s2);
concatenate(s1,s2);
}
concatenate(char *p,char *q){
while(*p!='\0'){
    p++;
}
while(*q!='\0'){
    *p=*q;
    q++;
}
*p='\0';
//while(*p!='\0'){
  //  printf("%c",*p);
    //p++;
//}
}
