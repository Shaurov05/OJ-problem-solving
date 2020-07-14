#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    string b;
    char c;
    int p=0;
    while(getline(cin , b))
    {
        if(p>0){
            printf("\n");
        }
        int j = b.length() , num4=0 , r4=0, r100=0 , r400=0 , r15=0 , r55=0, num100=0, num400=0,num15=0,num55=0 ,count=0 ;
            r4 = r4*10 + (b[0] - '0') ;
            r4 = r4*10 + (b[1] - '0') ;
            r100 = r400 = r15 = r55 = r4 = r4*10 + (b[2] - '0');
        for(int i=3 ; i<j ; i++ ){

            r4 = r4*10 + (b[i] - '0') ;
            ///printf("r4=%d , ", r4);
            r4 = r4%4 ;
            ///printf("modulus= %d\n", r4);

            r100 = r100*10 + (b[i] - '0') ;
            r100 = r100%100 ;

            r400 = r400*10 + (b[i] - '0');
            r400 = r400%400 ;

            r15 = r15*10 + (b[i] - '0') ;
            r15 = r15%15 ;

            r55 = r55*10 + (b[i] - '0') ;
            r55 = r55%55 ;
        }
        p++;
        ///printf("r4=%d , r100=%d , r400=%d , r15=%d , r55=%d\n", r4 ,r100,r400,r15,r55);
        if((r4==0 && r100!=0) || r400==0 ){
            printf("This is leap year.\n");
        }
        else count++;
        if(r15 == 0){
            printf("This is huluculu festival year.\n");
        }
        else count++;
        if(((r4==0 && r100!=0) || r400==0) && r55 == 0){
            printf("This is bulukulu festival year.\n");
        }
        else count++;
        if(count == 3){
            printf("This is an ordinary year.\n");
        }

    }
    return 0;
}
