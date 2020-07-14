#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int  m=t;
    while(t>0){
        int j,k,l=0;
        char b[20] , c[20] ;
            scanf("%s %s", &b,&c);
            j=strlen(b);
            k=strlen(c);
    for(int i=0 ; i<j ;i++){
            if(b[i] == c[i]){
                l=6;
            }
            else if((b[i]== 'a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
               && (c[i]== '0' || c[i]== 'a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u') ){

                l=6;

            }
            else if((b[i]!= 'a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u') && b[i] != c[i]){
                l=4;
                break;
            }
            else{
                l=5;
                break;
            }
    }
    if(j != k){
            printf("No\n");
            }
    else if(l == 6){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

        t--;
    }
    return 0;
}
