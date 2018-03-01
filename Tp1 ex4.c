#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int a,b,n,aide,*P1,*P2;

do
{
printf("Donner la taille du tableau A: ");
scanf("%d",&n);
}while (n<1);

a = malloc(n * sizeof(int));

for(P1=a;P1<a+n;P1++)
{
    printf("Donner un entier A: ");
    scanf("%d",&P1);
}

P1=a;
P2=n;

for(;P1<a-n/2;P1++,P2--)
{
    aide=&P1;
    P1=P2;
    P2=aide;
}

int i;

for (i=0;i<n;i++)
    printf("%d\t",a[i]);

return 0;
}
