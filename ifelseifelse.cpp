#include <iostream>
using namespace std;
int main(){
    int marks;
    cout <<"Enter marks:";
    cin >> marks;
    if(marks >=90){
        cout << "A";

    }
    else if(marks>=80 && marks <90){
        cout << "B";
    }
    else if(marks >=60 && marks<80){
        cout << "C";
    }
    else{
        cout << "F";
    }
    return 0;

}