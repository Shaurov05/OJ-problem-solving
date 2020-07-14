#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
        string a;
        while(getline(cin,a)) {
        int i ,j, k=0,l=0 ,p=0 ;

        for(i=0 ; a[i] != '\0' ; i++){
            j=i+1;
                if  (((a[j]<'A' || a[j]>'Z' ) && (a[j]<'a' || a[j]>'z'))
                && ((a[i]>='a' && a[i]<='z') || (a[i]>= 'A' && a[i]<='Z')))
                    {
                        p++;
                    }
                else{
                    continue;
              }}
    cout << p <<endl;
        }
return 0;
}
