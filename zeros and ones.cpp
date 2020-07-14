#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    string b;
    int l=0;
    while( cin>> b ){
        if(b == "0" ){
            break;
        }
    int t,a,c,i,j,k=0;
    scanf("%d", &t);

    printf("Case %d:\n", l+1);

    for( i=0 ; i<t ;i++){
        scanf("%d %d", &a, &c);

        if(a>c){
            swap(a,c);
        }

        for(j=a ; j<=c ;j++){
            if(b[a] != b[j] ){
                k=5;
                break;
            }
            else{
                k=4;
            }
        }
        if(k==5){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    l++;
    }
}
