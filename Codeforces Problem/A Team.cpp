#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a ;
    int p,v,t,pr=0;
    for(int i=1; i<=a;i++)
    {
        cin >> p >> v >> t;
        if(p==1 && t==1 && v==1)
        {
            pr=pr +1;
        } 
       if(p==1 && v==1 && t==0)
        {
            pr=pr+1;
        }

        if(p==0 && v==1 && t==1)
        {
            pr=pr+1;
        }
       if(p==1 && v==0 && t==1)
        {
            pr=pr+1;
        }  
        
    }

    cout << pr << endl;
}