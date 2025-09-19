#include <iostream>
#include <iomanip> 

using namespace std; 


int main() {
    float a = 5.83537;
    float b = 10.37530; 

    cout << a << endl;
    cout<<fixed<<setprecision(4)<<a<<endl; 
    cout<<setprecision(2)<<b<<endl; 
     
    char c[5] = "ok";
    cout<<c<<endl; 

    char d[5] = {'o', 'k'};
    cout<<d<<endl;
}




