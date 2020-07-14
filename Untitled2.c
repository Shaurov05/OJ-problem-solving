#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,s=0,a=0;
cout<<"PERFECTION OUTPUT"<<endl;
while(1){
        cin>>n;
         s=0;
         if(n==0){
            break;
        }
for(i=1;i<n;i++){
    if(n%i==0)
        s=s+i;
}
if(s==n)
    cout<<"     "<<n<<"  "<<"PERFECT"<<endl;
else if(s<n)
    cout<<"     "<<n<<"  "<<"DEFICIENT"<<endl;
else
    cout<<"     "<<n<<"  "<<"ABUNDANT"<<endl;
}
cout<<"END OF OUTPUT"<<endl;

}
/**
PERFECTION OUTPUT
15 DEFICIENT
28 PERFECT
6 PERFECT
56 ABUNDANT
60000 ABUNDANT
22 DEFICIENT
496 PERFECT
END OF OUTPUT**/
