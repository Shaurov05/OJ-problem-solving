#include<bits/stdc++.h>
using namespace std;

int main()
{
    char word[1001];
    while(1){

    scanf("%s", &word);

    int uc=0 , lc=0 ;
    char c;

    for(int i=0 ; i<strlen(word) ; i++){
        c = word[i];
        if(c>= 'a' && c<= 'z'){
            lc++;
        }
        else if(c>= 'A' && c<= 'Z'){
            uc++;
        }
    }

    ///printf("lc=%d , uc=%d\n", lc , uc);

    if(lc > uc){
        for(int i=0 ; i<=strlen(word) ; i++){
            c = word[i];

            if(c>= 'A' && c<= 'Z'){
            c = 'a' + (c - 'A') ;
            printf("%c", c);
            }
            else{
                printf("%c",c);
            }
        }
        }
    else if(uc > lc){
        for(int i=0 ; i<=strlen(word) ; i++){
            c = word[i];
            if(c>= 'a' && c<= 'z'){
            c = 'A' + (c -'a');
            printf("%c", c);
            }
            else{
                printf("%c",c);
            }
        }
    }
    else
    {
        for(int i=0 ; i<=strlen(word) ; i++){
            c = word[i];
            if(c>= 'A' && c<= 'Z'){
            c = 'a' + (c - 'A') ;
            printf("%c", c);
            }
            else{
                printf("%c",c);
            }
        }
    }
    printf("\n");
    }
}
