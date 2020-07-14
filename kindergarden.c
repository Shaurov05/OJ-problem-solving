#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    while(1){
        char a[1000]= {"0"};
        gets(a);
        int i ,j,k,p=0;
        k = strlen(a);
        for(i=0 ; i<k ;i++){
                j=i+1;
            if((a[i]>='a' && a[i]<='z') || (a[i]>= 'A' && a[i]<='Z'))
                {

              if  ((a[j]<'a' || a[j]>'z') && (a[j]<'A' || a[j]>'Z' )){
                    {
                        p++;
                    }
              }
        }

    }
    printf("%d\n", p);
}
return 0;
}
