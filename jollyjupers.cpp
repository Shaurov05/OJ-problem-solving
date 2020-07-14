#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int ara[100],a,b,c,i,l=0,k=0,ara2[100];
    scanf("%d%d", &a,&b);
    for(i=a ; i<=b ;i++){
        if(i%2!= 0 && i%3!= 0 && i%5!=0){
            ara[k]= i;
            k++;
        }
    }
    for(i=0 ; i<k ; i++){
        cout<< ara[i]<<endl;
    }
    for(i=0 ; i<k ; i++){
        ara2[i]= abs(ara[i]-ara[i+1]);
        l++;
    }
    for(i=0 ; i<l-1 ; i++){
        cout<< ara2[i]<<endl;
    }
}
