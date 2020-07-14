#include <iostream>
#include <sstream>
#include <string>
#include<cstdio>

using namespace std;

int main()
{
    string s ;
    getline(cin , s);
    istringstream iss(s);
    int c;
    while (iss >> c)
    {
        printf("%d ",c);
    }
}
