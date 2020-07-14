#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,k,count=1;
    char a[100000];
    while(1)
        {
        char a[100000] = "0" ;
        cin>> a;
        cout<< a<<endl;
        j=strlen(a);
        printf("%d\n", j);
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
