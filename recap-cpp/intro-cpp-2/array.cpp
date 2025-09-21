#include <iostream>
using namespace std; 


int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int arr2[5] = {0};  // all initialized to 0 
    cout << arr2[4] << endl;

    int arr3[5] = {1, 2}; // rest initialized to 0
    cout << arr3[4] << endl;

    int arr4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // size inferred from initializer list
    cout << arr4[3] << endl;
    cout << sizeof(arr4) << endl; // size in bytes
    cout << sizeof(arr4) / sizeof(int) << endl; // number of elements


    int arr5[5];
    // for(int i=0; i<5; i++) {
    //     // scanf("%d", &arr5[i]);
    //     cin>>arr5[i];
    // }
    // cout<<endl; 

    // for(int i=0; i<5; i++) {
    //     // printf("%d ", arr5[i]);
    //     cout<<arr5[i]<<" ";
    // }
    // cout<<endl;

    // char array for string in cpp 
    char arr6[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << arr6 << endl;
    cout<<arr6[3]<<endl;
    char arr7[5] = "abcd"; // null character is added automatically
    cout << arr7 << endl;
    cout<<arr7[3]<<endl;


    // int arr8[10]; 
    // cin>>arr8; // works only for char arrays (strings)
    // cout<<arr8<<endl; // works only for char arrays (strings)

    char arr9[10];
    cin.getline(arr9, 10); // to read string with spaces
    cout << arr9 << endl;

}



