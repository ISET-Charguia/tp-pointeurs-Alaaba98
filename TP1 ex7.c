#include <stdio.h>
#include <string.h>

void moins_dernier (char *ch,int x)
{

    ch[x]='\0';
}

int main (void)
{
    char *ch;
    int x;

    printf("Donner une chaine de caract/202re: ");
    scanf(" %s",ch);
    x=strlen(ch);
    //version 1
    ch[x]='\0';

    //version 2
    moins_dernier(ch,x);

    return 0;
}
