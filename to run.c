#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,count=1;
    char a[100000];
        while(gets(a) !=EOF)
            {
        ///gets(a);
        j=strlen(a);
        for(i=0 ; i< j ;i++){
            if((a[i]== '"') && (count%2 == 1)){
            count++;
            printf("``");
            continue;
            }
            else if((a[i]== '"') && (count%2==0)){
            printf("''");
            count++;
            continue;
            }
            else {
                printf("%c", a[i]);
                continue;
            }
        }
        printf("\n");
        char a[100000] = "0" ;
        }
    return 0;
}

