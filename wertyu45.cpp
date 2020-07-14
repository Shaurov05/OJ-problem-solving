#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    while(1){
    string a = "ASDFGHJKL;'ZXCVBNM,./QWERTYUIOP[]\\`1234567890-=" ;
    int i,j,k,l,m=0;
    string c;
    getline(cin,c);
    k=a.length();
    l= c.length();
    for(i=0 ; i<l ;i++){
            for(j=0 ;j<k ;j++){
                if(c[i] == ' '){
                    printf(" ");
                    m++;
                    break;

                }
                else if(c[i] == a[j]){
                       printf("%c", a[j-1]);
                      m++;
                       break;
                }
            }
    }
    cout<<endl<< m <<endl;
}
}

