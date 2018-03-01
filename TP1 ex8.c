#include <stdio.h>

void Lecture_tab(int tab,int n);
void Permuter (int tab, int n, int a, int b);
void Inverse_tab (int tab,int n);
void Affiche_tab (int tab, int n);

int main (void)
{
    int n,a,b,testa=-1,testb=-1,i;

    //Lecture de la taille du tableau
    do
    {
        puts("Donner la taille du tableau");
        scanf("%d",&n);
    }while (n<1);

    //Allocation du tableau
    int tab=malloc(n*sizeof(int));
    puts("Remplissage du tableau");

    //Remplissage
    Lecture_tab(tab,n);
    puts("");

    //Saisie & tester les valeur A et B
    do
    {
        printf("Donner un entier A: ");
        scanf("%d",a);
        for(i=0;i<n;i++)
        {
        if (tab+i==a)
        testa=i;
        break;
        }
    }while(testa==-1);

    do
    {
        printf("Donner un entier B: ");
        scanf("%d",b);
        for(i=0;i<n;i++)
    {
        if (tab+i==b)
        testb=i;
        break;

    }
    }while(testb==-1);

    //Permutation
    Permuter(tab,n,testa,testb);


    //Affichage
    Affiche_tab(tab,n);

    return 0;
}

                      //Les fonction


//Remplissage du tableau
void Lecture_tab(int tab,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Donner tab[%d]",i+1);
        scanf("%d",tab+i);
    }
}


//Permutation des deux entiers de tableau
void Permuter (int tab, int n, int *a, int *b)
{
    int aux;
    aux=tab+a;
    tab+a=tab+b;
    *a=b;
    tab+b=aux;
    *b=a;
}



//Inversion du tableau
void Inverse_tab (int tab[],int n)
{
    int *p1*p2,aux;
    for (p1=&tab,p2=&tab+n;p1<tab+n/2,p2>tab+n/2;p1++,p2--)
    {
        aux=&p1;
        p1=&p2;
        p2=aux;
    }
}


//Affichage du tableau
void Affiche_tab (int tab, int n)
{
    int *p;
    printf("Tab=[\t");
    for (p=tab;p<tab+n-1;p++)
    {
        printf("%d",&p);
    }
    printf("]");
}
