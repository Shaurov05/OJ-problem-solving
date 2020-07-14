#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,co=0;
    cin>>t ;
    ///printf("\n");
    while(t>0) {
        int n,f ,j ,k ,l ,i;
        ///printf("\n");

        scanf("%d %d", &f,&n);

       for(i=0 ; i<n ;i++){
            if(co > 0){
            printf("\n");
        }
        for(k=1 ; k<=f ; k++ ){

                for(l=1 ; l<= k ; l++ ){
                        printf("%d", k);
                }
                printf("\n");
            }

        for(k=f-1 ; k>=1 ; k-- ){

                for(l=1 ; l<= k ; l++ ){
                        printf("%d", k);
                }
                printf("\n");
            }
     co++;
    }
    t--;
    }
return 0;
}
