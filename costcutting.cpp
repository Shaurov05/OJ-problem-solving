#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i,j,k,m;
    cin>> t;
    for(int l=0 ;l<t ;l++){
    cin>> i >> j>> k;
    if((i> j && i<k) || (i<j && i>k)){
        m=i;
    }
    else if((j<i && j>k) || (j>i && j<k)){
        m=j;
    }
    else{
        m=k;
    }
    printf("Case %d: %d\n", l+1,m);
}
return 0;
}
