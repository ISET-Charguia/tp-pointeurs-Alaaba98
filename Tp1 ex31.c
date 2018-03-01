#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int a[50],b[49],n,m,i;
int *Pa,*Pb;

do
{
printf("Donner la taille du tableau A: ");
scanf("%d",&n);
}while (n<1);

Pa=&a;

for(;Pa<a+n;Pa++)
{
printf("Donner un entier A: ");
scanf("%d",Pa);
}

do
{
printf("Donner la taille du tableau B: ");
scanf("%d",&m);
}while (n+m>50);

Pb=&b;

for(;Pb<b+m;Pb++)
{
printf("Donner un entier B: ");
scanf("%d",Pb);
}

for(i=0;i<m;i++)
*(Pa+i)=b+i;

Pa=a;
for(i=0;i<n+m;i++)
printf("%d\t",&Pa+i);
return 0;
}
