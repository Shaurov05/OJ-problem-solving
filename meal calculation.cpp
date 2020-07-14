#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main ()
{
    int n,i=0;
    int k;
    float n_of_meal=0;
    float Expense;
    printf("Enter the number of mess members -");
    scanf("%d", &n);
    char name[n][15];
    float money[n], Tamount=0.0, Texpense=0.0;
    float meal[n];

    printf("\nEnter the total expense of this month -");
    scanf("%f", &Texpense);
    printf("\n");
    for(i=0 ;i<n ;i++)
    {
        printf("Enter the name of member no %d \n" ,i+1);
        scanf("%s" ,name[i]);
        printf("Enter the amount of given money-");
        scanf("%f" ,&money[i]);
        Tamount += money[i];
        printf("Enter the number of meal of %s  :" ,name[i]);
        scanf("%f" , &meal[i]);
        n_of_meal += meal[i];
        printf("\n");
    }

    printf("total number of meal is %0.2lf", n_of_meal);
    double meal_rate;
    meal_rate=((Texpense*1.0)/n_of_meal);
    printf("\nmeal rate of this month is- %0.3lf\n" ,meal_rate);
    printf("\nName\tGiven\tMeal\tExpense\tReceive\tLoan");
    for(i=0 ;i<n ;i++)
    {
    Expense=(meal_rate*meal[i]);

    printf("\n%s\t", name[i]);
    printf("%0.0lf\t" ,money[i]);
    printf("%0.2lf\t" ,meal[i]);
    printf("%0.2lf\t" ,ceil(Expense));
    if(Expense<money[i])
    {
        printf("%0.2lf\t", ceil(money[i]-Expense));
    }
    else
    {
        printf("0.00\t");
    }
    if(Expense>money[i])
    {
        printf("%0.2lf\t", ceil(Expense-money[i]));
    }
    else
    {
        printf("0.00\t");
    }
    printf("\n");
    }
    printf("manager will have %0.2lf taka at the end\n" ,ceil(Tamount-Texpense));

}
