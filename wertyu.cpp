#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    char c[1005];
    while( gets(c) ){
    char a[47] = {'A','S','D','F','G','H','J','K','L',';','Z','X','C','V','B','N','M',',','.','/','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','`','1','2','3','4','5','6','7','8','9','0','-','=' } ;
    int i,j,k,l,m=0;

    l= strlen(c);
    for(i=0 ; i<l ;i++){
            for(j=0 ; j<= 46 ; j++){
                if(c[i] == ' '){
                    printf(" ");
                    m++;
                    break;
                }
                else if(c[i] == 39 ){
                    printf(";");
                    break;
                }
                else if(c[i] == a[j]){
                       printf("%c", a[j-1]);
                       m++;
                       break;
                }
            }
    }
    printf("\n");
}
}
