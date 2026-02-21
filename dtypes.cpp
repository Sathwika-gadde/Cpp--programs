#include <iostream>
using namespace std;
int main(){
    int age=19;
    cout << "My age is:" << age << endl;
    char grade='A';
    cout << "My grade is: " << grade << endl;
    cout << sizeof(age) << endl;
    float pi=3.14f;
    cout << "Value of pi is: " << pi << endl;
    // Type casting(explicit conversion)
    int value=grade;
    cout << value << endl;
    double largePi=100.99;
    int smallpi= (int)largePi;
    cout << smallpi << endl;

    return 0;

}