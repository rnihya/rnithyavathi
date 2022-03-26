#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,total words;
total words=1;
printf("\n please enter any string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==''||str[i]=='\n'||str[i]=='\t')
{
total words++;
}
}
printf("\n the total number of words in the string %s is =%d",str,total words);
return 0;
}
