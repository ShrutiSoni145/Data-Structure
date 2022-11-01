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
while(*q!='\0'){      //Used pointer because the value of pointer points is allocated to heap that means value will not cleared when function ends but if s[]
                      // local variable ends because variable stores in stack Then why i can still access s[] by return pointer. if s[] ends then pointer's
                      // should be just integer not base address of s[].
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
printf("length=%d\n",len);
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
