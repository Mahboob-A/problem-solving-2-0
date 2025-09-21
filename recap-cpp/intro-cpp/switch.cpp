#include <iostream>
using namespace std; 



void fun() {
    char c; 
    cin>>c; 

    switch(c) {
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"vowel"<<endl;
            break;
        default: cout<<"consonant"<<endl;
    }
}


void dayofweek() {
    int day; 
    cin>>day; 
    
    switch(day) {
        case 1: 
            cout << "Monday" << endl;
            break;
        case 2: 
            cout << "Tuesday" << endl;
            break;
        case 3: 
            cout << "Wednesday" << endl;
            break;
        case 4: 
            cout << "Thursday" << endl;
            break;
        case 5: 
            cout << "Friday" << endl;
            break;
        case 6: 
            cout << "Saturday" << endl;
            break;
        case 7: 
            cout << "Sunday" << endl;   
            break;
        default:
            cout << "Invalid day" << endl;
            break;
    }
}

int main() {
    fun();
    dayofweek();
    return 0;
}

