#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[3000] , ara2[3000] ,n ;
    while(scanf("%d", &n) != EOF){
    int a, b, c, i ,j ,k,count=0;
    for(i=0 ;i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(j=0 ; j<n-1 ; j++){
        ara2[j]= j+1 ;
    }
    for(k=0 ;k<n-1 ; k++){
        c=abs(ara[k]-ara[k+1]);
        for(int m=0 ; m<n-1 ; m++){
            if(c == ara2[m]){
                ara2[m]= -1 ;
                count++;
                break;
            }
            else{
                continue;
            }
        }
    }
    if(count== n-1){
        cout<< "Jolly"<<endl;
    }
    else{
        cout<< "Not jolly"<<endl;
    }
}
        return 0;
}
