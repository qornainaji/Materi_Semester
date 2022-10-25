#include <stdio.h>
int main(void) {
int i,j,k,n;
scanf ("%d", &n);
for (i=0;i<n;i++) 
{
    for (j=0;j<i;j++) 
    {
        for (k=0;k<j;k++) 
        {
            printf("#");
        }
    printf("\n");
    }
}
return 1;
}