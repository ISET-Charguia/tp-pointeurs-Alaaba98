#include <stdio.h>

int main (void)
{
    char ch;
    int *P;

    printf("Donner une chaine: ");
    scanf(" %s",&ch);

    P=ch;

    while (&P != '\0')
    {
        P+=1;
    }

    printf ("La longuer du chaine CH=%d",P);
    return 0;
}
