#include<stdio.h>
#include<string.h>

int main()
{
    char c[26]= {' ', 'a' , 'b' , 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 't', 'u', 'v', 'w', 'x', 'y' } ;
    int t,i;
    char b[100];
    scanf("%d", &t);
    for(i=0 ; i<t ; i++){


        gets(b);

        int j, k ,l ,count=0,e=0;
        l= strlen(b);
        for(j=0 ; j<l ;j++)
        {
            if(b[j] == 's' || b[j] == 'z'){
                e = 4;
                count += e;
                printf("here e is %d , count is %d\n",e , count);
            }
            else
            {

                for(k=0 ;  ; k++)
                {
                    if(b[j] == c[k]){
                        e = (k%3) - 1 ;
                        count += e;
                        printf("here k is %d , count is %d\n",k , count);
                        break;
                    }
                }
            }
        }
        printf("Case #%d: %d\n",i+1 , count);

   }

}
