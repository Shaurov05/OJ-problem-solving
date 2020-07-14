#include<cstdio>
#include<cstring>
#include<ctype.h>
using namespace std;
int main()
{
    int i=0,count=0,j=1,k;
    char c[1];
    c[0] = '-';
    printf("%c\n", c[0]);
    int b[10];
        for( ; ; i=i){
        if(scanf("%d", &b[i]) == 1){
            printf("i is = %d ", i);
            printf("ara is = %d", b[i]);
            i++;
            printf("array size is = %d\n", sizeof(b));
        }
        else{
            break;
        }
        }
        printf("\n%d\n", i);

    /*for(j=0 ; j<4; j++){
    printf("%d ", b[j]);
    }*/
    return 0;
}

