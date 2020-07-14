#include<bits/stdc++.h>
using namespace std;

int main()
{
    char d;
    string b;
    int count=0 ;
    while(getline(cin,b) && b!="0"){
        if(count==1){
            printf("\n");
        }
            int k=0;
            k=b.length();
            if (!b.empty() && b[k-1] == '\n') {
                printf("\\n removed\n");
                b.erase(b.length()-1);
            }
            if(b == "0"){
                break;
            }
            else{
        int i,j,l=0,m=0,c,cou[100]={0},ara2[100]={0},max=1;
        count=1;

        sort(b.begin() , b.end());

        for(i=0 ; i<k ;i++){
                int count=1;
                cou[l]= count ;
                ara2[l]= b[i];
                if(b[i] == 31 ){
                    continue;
                }

                else{

                for(j=i+1 ; j<k ;j++){
                    if(b[i] == b[j]){
                        ///printf("here b[i]= %c ,b[j] is = %c \n", b[i],b[j]);
                        b[j]= 31 ;
                        count++;
                        ara2[l] = b[i];
                        cou[l] = count;
                        if(max < count){
                            max= count;
                        }
                    }
                }
                l++;
            }
        }
        ///printf("max=%d\n", max);
        for( i =1  ; i<= max ;i++){
                int ara3[100]={0};
                int n=0;
                for(j=0 ; j<l ;j++){
                    if(i == cou[j]){
                        ara3[n]= ara2[j] ;
                        ///printf("here n=%d , count =%d ,ara3 = %d\n", n ,cou[j] ,ara3[n] );
                        n++;
                        }
                }
                for(m=n-1 ; m>=0 ;m--){
                        sort(ara3 , ara3+n);
                    printf("%d %d\n", ara3[m], i);
                }
    }

            }
}
}
