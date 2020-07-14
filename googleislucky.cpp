#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p=0;
    scanf("%d", &t);
    while(t>0){
        string b[10];
        int n[10],maxi=0,c[10],i,j=0;

        for(i=0 ; i<10 ;i++){
                cin>> b[i];
                cin>>n[i];

            if(n[i]> maxi){
                maxi= n[i];
            }
        }
        printf("Case #%d:\n", p+1);
        p++;
        for(int k=0 ; k<10 ;k++){
                if(n[k] == maxi){
                    cout<< b[k] <<endl;
                }
        }



        t--;
    }
}
