#include <iostream>

using namespace std;

int main() {
    float a = 12.3453; 

    // int b = a; 
    int b = int(a); // c style 

    int c = (int)a; // cpp style 
    int d = static_cast<int>(a); // cpp style



    cout<<b<<" "<<c<<" "<<d<<endl; 
}