#include <bits/stdc++.h>
using namespace std;
bool simp(int a)
{
    while(a%2==0) {a>>=1;}
    while(a%3==0) {a/=3;}
    while(a%5==0) {a/=5;}

    return a==1;
}
int main(){
    int cont=1,i;

    for(i=2;;i++){
        if(simp(i)) {
                cont++;
        printf("i=%d ,count= %d\n", i ,cont);
        }
        if(cont==1500){
            break;
        }
    }

    cout<<i<<endl;

    return 0;
}
