#include<iostream>
using namespace std;

int main()
{

    int n,i,a,c=0;
    cin >> n ;
    for (i=1 ; i<=n;i++)
    {

        cin >>a;
        if (a==1)
        {
            c++;
        }

    }
    if (c>=1)
    {
        cout<< "HARD" << endl;
    }
    else
    {

        cout << "EASY" << endl;
    }
}
