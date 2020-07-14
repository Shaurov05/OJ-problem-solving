#include<bits/stdc++.h>
using namespace std;
int digits(int b){
    int m,r,sum=0;
    while(b>0){
        m = b%10;
        sum += m;
        b=b/10;
    }
        return sum;
}

int main()
{
    int c,i,j,k;
    while(cin>> c && c!=0){
        i = digits(c);
        while(i){
            if(i > 9){
                i=digits(i);
            }
            else{
                break;
            }
        }
        cout<< i <<endl;
    }
}
