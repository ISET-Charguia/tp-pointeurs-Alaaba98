#include <stdio.h>

int main(void)
{

    char ch[50];
    int i=1;

    do
    {
    printf("Donner une chaine ch: ");
    scanf("%s",&ch);
    }while(ch=="");

    //Methode N°1
    puts("Methode N\260 1");

    do
    {
        if(ch[0]!=ch[i])
            i+=1;
    }while (ch[i]!='\0' && ch[0]!=ch[i]);

    if (ch[i+1]=='\0' && ch[i-1]==ch[i])
        printf("Il est palindrome");
    else
{

    if (ch[i]=='\0')
        printf("N\'est pas Palindrome");
    else
    {
        int j=1;
        i++;
        char test='V';
        do
        {
            if(ch[j]!=ch[i])
                test='F';
            else
            {
                i+=1;
                j+=1;
            }
        }while(test=='V' && ch[i]!='\0');
        if (test=='F')
            printf("N\'est pas palindrome");
        else
            printf("Il est palindrome");
    }
}
    puts("");




    //Methode N°2
    puts("Methode N\260 2");

    i=1;
    int *p1,*p2;
    p1=ch[0];
    p1=ch[1];
    do
    {
        if(p1!=p2)
            p2+=1;
    }while (p2!='\0' && p1!=p2);

    if (p2+1=='\0' && p2-1==p2)
        printf("Il est palindrome");
    else
{
    if (p2=='\0')
        printf("N\'est pas Palindrome");
    else
    {
        p1+=1;
        p2+=1;
        char test='V';
        do
        {
            if(p2!=p1)
                test='F';
            else
            {
                p1+=1;
                p2+=1;
            }
        }while(test=='V' && ch[i]!='\0');
        if (test=='F')
            printf("N\'est pas palindrome");
        else
            printf("Il est palindrome");
    }
}



    return 0;
}
