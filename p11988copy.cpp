#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <string> my_bracet;
    queue <string> my_text;

    char line[100000];

    while(gets(line)){

        char text[10000];
        char input;
        bool bracet=false;
        int i=0, j=0;

        for(int k=0 ; ; k++){
            input = line[k];

            if(k == strlen(line)){
                if(bracet == true)
                    my_bracet.push(text);
                else
                    my_text.push(text);
                break;
            }
            else if(input == '['){
                if(bracet == true)
                    my_bracet.push(text);
                else
                    my_text.push(text);
                bracet = true;
                memset(text, '\0', i);
                i=0;
            }
            else if(input == ']'){
                if(bracet == true)
                    my_bracet.push(text);
                else
                    my_text.push(text);
                memset(text, '\0', i);
                i=0;
                bracet = false;
            }
            else if(bracet == false){
                text[i++] = input;
            }
            else if(bracet==true){
                text[i++] = input;
            }
        }

        while(!my_text.empty()){
            while(!my_bracet.empty()){
                cout<<my_bracet.top();
                my_bracet.pop();
            }
            cout<<my_text.front();
            my_text.pop();
        }
        printf("\n");
    }

}
