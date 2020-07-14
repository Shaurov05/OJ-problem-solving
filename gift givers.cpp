#include<bits/stdc++.h>
using namespace std;
int p=0,q=0;
int main()
{
    int t;
    while(scanf("%d", &t) != EOF ){
        string s1[10] , s2[10];
        if(q != 0){
            printf("\n");
        }
        q++;
        for(int i=0 ; i<t ;i++){
            cin >> s1[i];
        }
        int i,j=0,l,k,money, mo[10]= {0} ;

        for( i=0 ; i<t ;i++){

            cin >> s2[0];
            scanf("%d%d",&money, &j);
            if(j==0){
                continue;
            }
            else{
                p=j;

            for(l=0 ; l<t ; l++){
                if(s1[l] == s2[0]){
                    mo[l] -= ((money/p)*p) ;
                    break;
                }
            }

            for( k=1 ; k<=j ; k++ ){
                cin >> s2[k];
                    for( l=0 ; l<t ; l++){
                        if(s2[k] == s1[l]){
                            mo[l] += ( money /p ) ;
                            break;
                        }
                }
            }
            }
    }
        for( i=0 ; i<t ; i++ ){
                cout<< s1[i];
            printf(" %d\n", mo[i]);
        }
    }
    return 0;
}
