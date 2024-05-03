#include <iostream>
using namespace std;

class cinu{
    public:
        cinu(){
            cout << "this is a constructor!" << endl;
            cout << "A constructor in C++ is a special method that is automatically called when an object of a class is created."<< endl;
            cout << "To create a constructor, use the same name as the class, followed by parentheses ():"<<endl;
        }
        
        cinu(int x){
            cout << "\n";
            cout << "Parameterised constructor. x value: "<< x<< endl;
        }
};

int main(){
    cinu myObject;
    cinu secObject(5);
    return 0;
}
