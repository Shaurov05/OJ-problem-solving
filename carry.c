#include<stdio.h>


int main()
{
     int a , b;
     while(scanf("%d %d", &a, &b)){
            if(a==0 && b==0){
                break;
            }
         int i=1 ,j=1 ,k=0 , l=0 , d ;
        (a>b)? (d=a) : (d=b) ;
        while(d>0){
            i=a%10;
            j=b%10;
                if(i+j+l>9){
                        k++;
                        l=1;
                    }
                else{
                        l=0;
                }
    a=a/10;
    b=b/10;
    d=d/10;
    }
    if(k==0){
        printf("No carry operation.\n");
    }
    else if(k==1){
        printf("%d carry operation.\n",k);
    }
    else{
        printf("%d carry operations.\n",k);
    }
}
return 0 ;
}
