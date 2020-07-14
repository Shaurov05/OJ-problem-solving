#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    int p=0,i=0;
    scanf("%d", &p);
    getchar();
    char c[26]= {'+', 'a' , 'b' , 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 't', 'u', 'v', 'w', 'x', 'y' } ;

    char b[100];

    while( p > 0 ){
        gets(b);

        int j, k ,l ,count=0,e=0;
        l= strlen(b);
        for(j=0 ; j<l ;j++)
        {
            if(b[j] == 's' || b[j] == 'z'){
                e = 4;
                count += e;
                ///printf("here e is %d , count is %d\n",e , count);
            }
            else if(b[j] == ' '){
                e=1;
                count += e ;
            }
            else
            {

                for(k=0 ;  ; k++)
                {
                    if(b[j] == c[k]){
                        e = (k%3) ;
                        if(e == 0){
                            e=3;
                            count += e;
                            break;
                        }
                        else{
                        count += e;
                        break;
                        }
                    }

                }
            }
        }
        printf("Case #%d: %d\n",i+1 , count);
        p--;
        i++;

   }

}
