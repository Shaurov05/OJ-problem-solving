#include<bits/stdc++.h>
using namespace std;

int main()
{
    int height , stage , down , fetigue;
    while(scanf("%d%d%d%d",&height , &stage, &down, &fetigue)==4){
        if(height==0){
            break;
        }
        double initial=0 ,stage2=stage*1.0, stage3=stage*1.0*fetigue/100 , target = height*1.0;
        int count=0,p=0;
        for( ; ; )
        {
            initial += stage2;
            count++;
            if(initial > target){
                p=7;
                break;
            }

            initial -= down;
            if(initial < 0){
                p=5;
                break;
            }
            if(stage2 >0 )
            stage2 = stage2 - stage3 ;

            if(stage2 < 0)
                stage2=0.0;
        }
        if(p == 7){
            printf("success on day %d\n",count);
        }
        else if(p == 5){
            printf("failure on day %d\n",count);
        }
    }
    return 0;
}
