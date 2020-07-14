#include<bits/stdc++.h>
using namespace std;

bool is_operand(char ch){
    if(ch == '*' || ch == '/'
               || ch == '+' || ch == '-' )
        return false;
    else
        return true;
}

double calculate(double num1, double num2, char ch){
    switch(ch){
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '/':
            return num1 / num2;
        case '*':
            return num1 * num2;
    }
}

void evaluate(string expre){
    int length = expre.size(), i=0 , j=0;
    double result,one, two;
    bool point = false;
    result = one = two =0.00;
    stack < char > my_equ;
    stack < double > digits;

    while(i < length){
        ///printf("before %c , ",expre[i]);
        if(expre[i] ==  ' '){
            ///printf("blank | ");
            i++;    continue;
        }
        else if( expre[i] == '(' ){
            my_equ.push(expre[i]);
        }
        else if(expre[i] == ')'){
            one = digits.top();     digits.pop();
            two = digits.top();     digits.pop();

            result = calculate(two,one, my_equ.top());
            ///printf("ch = %c, result= %0.2lf",expre[i], result);
            my_equ.pop();
            my_equ.pop();
            digits.push(result);
        }
        else if( !is_operand(expre[i]) ){
            one=0.0; j=0;
            int divide = 10;
            if( (expre[i+1]-'0')>= 0 && (expre[i+1]-'0')<= 9 ){
                one = 0.00;
                i++;
                while(expre[i] != ' ' && i<length){
                    if(expre[i] == '.'){
                        point = true;    i++;    continue;}
                    else if(point == false){
                        one = one*10 + (expre[i] - '0')*1.00;
                        ///printf("one d1 is %lf\n",one);
                        i++;
                    }
                    else{
                        int var = expre[i] - '0';
                        one = (one + ((double)var/(double)divide));
                        ///printf("var %d, one d2 is %lf\n",var,one);
                        divide *= 10 ;
                        i++;
                    }
                }
            point = false;
            one = one*(-1);
            digits.push(one);
            result = one;
            continue;
            }
            else
                my_equ.push(expre[i]);
        }
        else{
            one = 0.00;
            int divide = 10;
            while(expre[i] != ' ' && i<length){
                if(expre[i] == '.'){
                    point = true;    i++;    continue;}
                else if(point == false){
                    one = one*10 + (expre[i] - '0')*1.00;
                    ///printf("one d1 is %lf\n",one);
                    i++;
                }
                else{
                    int var = expre[i] - '0';
                    one = (one + ((double)var/(double)divide));
                    ///printf("var %d, one d2 is %lf\n",var,one);
                    divide *= 10 ;
                    i++;
                }
            }
            point = false;
            digits.push(one);
            result = one;
            continue;
        }
        ///printf("    end, after ch = %c\n", expre[i]);
    i++;}
    printf("%.2lf\n", result);
}

int main()
{
    int t,i=0;
    string expression;
    scanf("%d", &t);
    getchar();
    while(i < t){
        getline(cin, expression);
        evaluate(expression);
    i++;}
}
