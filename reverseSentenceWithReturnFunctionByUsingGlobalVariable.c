#include<stdio.h>
#include<string.h>
//char s[50];
char *reverse(char s[]);
void main(){
char e[50];
char *q;
printf("Enter sentence:\n");
gets(e);
q=reverse(e);
printf("your reverse sentence is :\n");
while(*q!='\0'){
    printf("%c",*q);
    q++;
}
//printf("%u",reverse(e));
//printf("%s",reverse(e));
}
char *reverse(char s[]){
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
}
