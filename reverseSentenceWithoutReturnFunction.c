#include<stdio.h>
#include<string.h>
const char *reverse(char s[]);
void main(){
char e[50];
char *q;
printf("Enter sentence:\n");
gets(e);

/*
const char* e = reverse(e);
printf("%s",e);
//reverse(s);*/
q=reverse(e);
printf("your reverse sentence is :\n");
while(*q!='\0'){
    printf("%c",*q);
}
}
const char *reverse(char s[]){
char *p;
char temp;
int i=0;
int j;
int len=0;
while(s[i]!='\0'){
    len++;
    i++;
}
j=len-1;
i=0;
while(i<len/2){
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;
}
p=s;
return p;
//return s;
/*i=0;
while(s[i]!='\0'){
    printf("%c",s[i]);
    i++;
}*/
}
