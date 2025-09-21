#include <iostream>
using namespace std; 


namespace one {
    int x = 10; 
    void fun() {
        cout <<"namespace one"<<endl;
    }
}

// namespace two {
//     int x = 20; 
//     void fun1() {
//         cout <<"namespace two"<<endl;
//     }
// }


namespace two {
    int y = 20; 
    void fun1() {
        cout <<"namespace two"<<endl;
    }
}


int main() {

    // without using namespace
    // cout << one::x <<endl; 
    // cout << two::x <<endl;
    // one::fun(); 
    // two::fun1();

    cout << one::x <<endl; 
    cout << two::y <<endl;
    one::fun(); 
    two::fun1();

    // with using namespace
    using namespace one;
    using namespace two;

    cout << x <<endl;
    fun();

    cout << y <<endl;
    fun1();

    int a = x; 
    cout << a <<endl; 

    return 0; 

}