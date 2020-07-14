#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n=0;
    while(scanf("%d", &n) != EOF){
        int num[100],num2[100] ,i , l= 1 ,count1= 0 ,c ;
        for(i=0 ;i<n ;i++){
            scanf("%d", &num[i]);
        }
        for(int k=0 ; k<n-1 ;k++){
            num2[k]= l;
            l++;
        }
        for(int j=0 ; j<n-1 ; j++){
        printf("%d ", num2[j]);
        }
        printf("\n");
        for(int m=0 ; m<n-1 ;m++){
            c=abs(num[m]-num[m+1]) ;
            for(int o=0 ; o<n-1 ;o++){
                if(c == num2[o]){
                    printf("%d %d c=%d num2 =%d\n", num[m] , num[m+1], c ,num2[o]);
                    break;
                }
                else if(c != num2[o]) {
                    printf("%d %d c=%d num2 =%d\n", num[m] , num[m+1], c ,num2[o]);
                    count1++;
                    continue;
                }
            }
        }
        printf("count is : %d\n",count1);
        if(count1 == (n-1))
        {
            printf("Not jolly\n");
        }
        else{
            printf("jolly\n");
        }
    }
}
