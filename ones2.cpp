#include<bits/stdc++.h>
using namespace std;

int main()
{
    char b[1000],d;
    while(scanf("%s", &b)!= EOF){
        int i,j,k,l=0,m=0,c,cou[100]={0},ara2[100]={0},max=1;
        k=strlen(b);
        sort(b,b+k);

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
    printf("\n");
}
return 0;
}

/**
106 1
105 1
98 1
91 1
79 1
76 1
75 1
74 1
73 1
71 1
70 1
67 1
57 1
46 1
42 1
39 1
33 1
92 2

96 1
72 1
**/
