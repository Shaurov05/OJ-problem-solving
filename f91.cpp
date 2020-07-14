#include<stdio.h>
int f91(int c){
    int e;
    if(c>100){
        e= c-10;
        return e;
    }
    else{
    e = f91( f91( c + 11 ) ) ;
    return e;
    }

}

int main()
{
    int t;
    while(scanf("%d", &t) && t> 0){
        int d;
        d=f91(t);
        printf("f91(%d) = %d\n",t,d);
    }
    return 0;
}
