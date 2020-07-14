#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t>0){
    int i , j, k=0;
    string b;
    string c= "one";
    cin>>b;
    i=b.length();
    if(i == 5){
        printf("3\n");
    }
    else{
        for(j=0 ; j<i ;j++){
            if(b[j] == c[j]){
                k++;
            }
        }
        if(k>=2){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
    }

    t--;
    }
    return 0;
}
