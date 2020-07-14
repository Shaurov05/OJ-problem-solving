#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    while(scanf("%d", &i)!=EOF){
    char buffer [3];
    itoa (i,buffer, 10);
    printf ("decimal: %s\n",buffer);
    itoa (i,buffer,16);
    printf ("hexadecimal: %s\n",buffer);
    itoa (i,buffer,2);
    printf ("binary: %s\n",buffer);
    }
    return 0;
}
