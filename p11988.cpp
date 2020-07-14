#include<bits/stdc++.h>
using namespace std;

list <char> baidu;
string input;

int main()
{
    while(cin>>input){
        baidu.clear();
        list <char> :: iterator iter =baidu.begin();
        char letter;
        int length = input.size();
        for(int k=0 ; k!=length ;k++){
            letter = input[k];
            if(letter == '['){
                iter = baidu.begin();}
            else if(letter == ']'){
                iter = baidu.end();}
            else{
                baidu.insert(iter, letter);}
        }
        for(iter = baidu.begin() ; iter != baidu.end() ; ++iter){
            printf("%c",  *iter);
        }
        printf("\n");
    }
}

