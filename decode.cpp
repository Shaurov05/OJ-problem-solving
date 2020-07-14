#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k;
    char a[100000];
    while(gets(a)){
        j=strlen(a);
        for(i=0 ;i<j ;i++){
            printf("%c" ,(a[i]-7));
        }
        printf("\n");
    }
    return 0;
}
