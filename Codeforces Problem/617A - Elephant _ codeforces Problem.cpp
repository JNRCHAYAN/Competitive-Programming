#include<iostream>

using namespace std;

int main()
{

    int a,co=0;
    cin >> a;
    if (a==1 || a==2 || a==3 || a==4 || a==5)
    {
        cout<< 1 <<endl;
    }

    else
    {
        for( int i=a;i>0;)
        {
           if (i>=5)
           {
               i=i-5;
               co=co+1;
           }
           else if (i>=4)
           {
               i=i-4;
               co=co+1;
           }
           else if (i>=3)
           {
               i=i-3;
               co=co+1;
           }
           else if (i>=2)
           {
               i=i-2;
               co=co+1;
           }
           else if (i>=1)
           {
               i=i-1;
               co=co+1;
           }

        }

        cout << co << endl;

    }
}
