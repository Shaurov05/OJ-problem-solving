#include<bits/stdc++.h>

using namespace std;

int main()
{
    string b;
    while( getline(cin , b)){
        if( b == "0"){
            break;
        }
    int i , j=0 , r=0 , d = 0;
    j = b.length();
    r = b[0] - '0' ;
    for(i=1 ; i<j ; i++){

        if( b[i]>= '0' && b[i]<= '9' ){

                d = b[i] - '0' ;
                d = r*10 + d ;
                ///printf("r= %d , d= %d\n" , r , d);
                if( d%17 == 0){
                    r = 0 ;
                }
                else{
                    r= d%17 ;
                }
        }

    }
    if(r == 0){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }

    }
    return 0;
}
