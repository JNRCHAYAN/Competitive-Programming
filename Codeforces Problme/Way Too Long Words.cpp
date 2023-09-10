#include<iostream>
#include<string>
using namespace std;

int main()
{

    string name[100];
    
    int a,l;
    cin >> a;

       for(int i=0;i<a;i++)
       {
           cin >> name [i];
       }

       for(int j =0; j<a ;j++)
       {
            l= name[j].length();
          
            if (l<=10)
            {
                 cout << name[j] << endl;
            }
            else
            {
                string  my_str = name[j];
                cout << my_str.at(0) << l-2 << my_str.at(l-1) << endl ;
            }
          

       }


}
