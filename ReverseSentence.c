#include<stdio.h>
#include<string.h>
void reverse(char s[]);
void main(){
char s[50];
//char *p;
printf("Enter sentence:\n");
gets(s);
reverse(s);
/*p=reverse(s);
printf("your reverse sentence is :\n");
while(*p!='\0'){
    printf("%c",*p);
}*/
}
void reverse(char s[]){
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
//return s;
i=0;
while(s[i]!='\0'){
    printf("%c",s[i]);
    i++;
}
}
