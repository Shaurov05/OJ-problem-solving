#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%s", &a);
    char c[1000] ;
    int i,j,k=0,l,m,n,count;
    l=strlen(a);
    char d[1];
    d[0]=a[l-1];

    for(i=0 ;i<l-1 ;i++){
            if(a[i]== '1'){
                continue;
            }
            else
                {
            for(j=i+1 ;j<l ;j++){

            if(a[j]== '1'){
                continue;
            }
            else if((a[i] == a[j])){
            c[k]=a[j];
            a[j]='1';
            }
            else if((a[i] != a[j]) )
            {
               c[k]= a[i];
            }
        }
        k++;
                }
    }
    if((a[l-1] == '1')) {
    printf("%s\n", c);
    }
    else if(a[l-1] != '1') {
        c[k]='d' ;
        printf("%s\n" ,c);
    }
    n=strlen(c);
    return 0;
}
