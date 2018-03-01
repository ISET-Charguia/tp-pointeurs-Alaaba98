#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int a[]= {12,23,34,45,56,67,78,89,90};
int *p=a;

printf("a)%d\n b)%d\n c)%d\n d)%d\n e)%d\n f)%d\n g)%d\n h)%d\n",*p+2,*(p+2),&p+1,*(&a[4]-3),*(a+3),&a[7]-p,p+(*p-10),*(p+(p+8)-a[7]));

return 0;
}
