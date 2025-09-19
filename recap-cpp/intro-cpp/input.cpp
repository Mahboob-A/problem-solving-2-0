#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
    int a, b, c; 
    cin>>a>>b>>c; 
    cout<<a<<" "<<b<<" "<<c<<endl;
    printf("%d %d %d", a, b, c);

    scanf("%d %d %d", &a, &b, &c); 
    printf("%d %d %d", a, b, c);
    cout<<endl; 
    cin.ignore(); 

    cout<<"\nenter a string: ";
    char str[20];
    scanf("%s", str);
    cout<<str<<endl;
    printf("%s", str);
    cin.ignore();  // Clear the newline character from the input buffer
    cout<<"\nenter a string: ";
    // fgets(str, sizeof(str), stdin);
    cin.getline(str, sizeof(str));
    puts(str);
    cout<<str<<endl;
    printf("%s", str);


    printf("\nEnter a string: ");
    char buffer[10];
    scanf("%9s", buffer);  // Safer scanf, limits input to 9 chars + null terminator

    printf("You entered: %s\n", buffer);

    return 0; 
}


