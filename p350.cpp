#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int m,z,l,i , visit=0,numbers=0,serial=1 ,repeat=0;
    ll mod=0, first_num=0;
    while(scanf("%d%d%d%d",&z,&i,&m,&l)==4){
        map<ll, bool> my_map;
        numbers = 0; visit=0,repeat=0;
        mod = l;
        if(z==0 && i==0 & m==0 && l==0)
            break;
        while(visit != 3){
            ///printf("mod = %d\n",mod);
            mod = (mod*z+i)%m;

            if(my_map[mod] == true){
                visit++;
                repeat++;
            }
            else if(visit>0 && my_map[mod]==false){
                visit=0;
            }
            my_map[mod] = true;
            numbers++;
        }
        printf("Case %d: %d\n",serial++,numbers-repeat);
    }
}
