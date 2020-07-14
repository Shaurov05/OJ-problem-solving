#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,count=1;
    char a[100000];
    while(1)
        {
        char a[100000] = "0" ;
        gets(a);
        j=strlen(a);
        for(i=0 ; i< j ;i++){
            if((a[i]== '"') && (count%2 == 1)){
            count++;
            printf("``");
            }
            else if((a[i]== '"') && (count%2==0)){
            printf("''");
            count++;
            }
            else {
                printf("%c", a[i]);
            }
        }
        printf("\n");
        }
    return 0;
}
