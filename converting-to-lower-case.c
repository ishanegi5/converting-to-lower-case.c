#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char name[10]="IShA NegI";
    char name1[10];
    for(int i=0;i<strlen(name);i++)
    {
        name1[i]=tolower(name[i]);
    }
    name1[strlen(name)]='\0';
    printf("Name in Lower case= ");
    puts(name1);
}
