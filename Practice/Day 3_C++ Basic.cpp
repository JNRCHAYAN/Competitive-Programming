#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=2;
    int b=4;
    // conditional satement 
    cout<< (a==b)<< endl;
    // AND operator
    cout<< (a!=b && b!=a)<< endl;
    // OR operator
    cout<< (a!=b || b!=a) << endl;

    // if  else  and else if condition
    if (a%2==0)
    {
        cout<< "Even Number"<< endl;
    }
    else if(a==0)
    {
        cout<< "This number is zero"<< endl;
    }
    else
    {
        cout<< "Odd Number"<< endl;
    }

    // Using LOOP in C++ programming
    // While Loop
    int n=1;
    while (n<=5)
    {
        cout<< n<< endl;
        n++;
    }

    // for loop

    for (int i=1;i<5;i++)
    {
        cout<< i << endl;
    }

    // Nasted loop 
    for (int i=1;i<5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<< endl;
    }
    // break and continue statement

    for (int k=0; k<10; k++)
    {
        if(k==8)
        {
            break;
        }
        cout<<k<< endl;
    }
 for (int k=0; k<10; k++)
    {
        if(k==8)
        {
            continue;;
        }
        cout<<k<< endl;
    }


}