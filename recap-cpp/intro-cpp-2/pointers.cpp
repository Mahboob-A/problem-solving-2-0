#include <iostream>
using namespace std;


void fun() {
    int a = 10; 
    int *p = &a; 
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p (Address of a): " << p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Value pointed by p: " << *p << endl;
}

void fun2(int *x) {
    cout << "Value pointed by x: " << *x << endl;
    *x = 20; 
    cout << "New value pointed by x: " << *x << endl;
}

void fun3(int **y) {
    cout << "Value pointed by y: " << **y << endl;
    **y = 30;
    cout << "New value pointed by y: " << **y << endl;
}

int main() {


    // fun(); 

    int a = 10;
    int *p = &a;
    // fun2(&a); 
    // fun2(p); 

    fun3(&p);
    cout << "Value of a after fun3: " << a << endl;
    cout << "Value pointed by p after fun3: " << *p << endl;

    return 0;
}