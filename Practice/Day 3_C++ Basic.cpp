#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=2;
    int b=4;
    // conditional satement 
    cout<< (a==b);
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
        cout<< "This number is zero";
    }
    else
    {
        cout<< "Odd Number"<< endl;
    }


}