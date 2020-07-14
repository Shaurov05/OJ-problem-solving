#include<bits/stdc++.h>

int main()
{
    int one[5] = {0, 1, 2, 3, 4};
    int b=6;

    for(int i=0 ; i<5 ; i++){

        printf("%x , %d\n", &one[i], one[i]);
    }
}
