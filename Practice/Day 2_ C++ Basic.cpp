#include<bits/stdc++.h>
using namespace std;

int main()
{
    // precedence  of data type : char< int < long int < long long int < float < double
    // full calculation on higher order
    cout << 'c'+1 << endl;
    int a=3/2;
    cout<< a << endl;

    // Oprator precendace print on internet

    cout<< 7/2 *3 << endl;
    cout << 3*7/2 << endl;

    // Data type range and overflow Download throw in internet
    // Data type overflow

    int r = 100000;
    int i = 100000;
    int cal = r*i;
    cout << cal << endl;
    int mx = INT_MAX;
    cout << mx << endl;
    
    // oberflow calculate using Long int Not work 
     long int rr = 100000;
     long int ii = 100000;
     long int calo = rr*ii;
    cout << calo << endl;

     // oberflow calculate using Long Long int
     long long int rrr = 100000;
     long long int iii = 100000;
     long long int callong = rrr*iii;
    cout << callong << endl;
    
    // ** Not calculate anything using double or float beacuse the funtion overflow Must be get more knowledge of this topic

    
    






}