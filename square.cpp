#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(scanf("%d%d", &a,&b) ){
            if((a==0 && b==0)){
                break;
            }
            int count=0,d=0;
            double c=0;
        for(int i=a ;i<=b ; i++){
            c= sqrt(i);
            d= c;
            if(c == d){
                count++;
            }


        }
        cout << count << endl;

    }
}
