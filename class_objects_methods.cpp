#include <iostream>
using namespace std;

class cinu{
    public:
        int mynum;
        string mystring;
        void inmethod(){
            cout << "This is a method!" <<endl;
        }
        void outmethod();
};

void cinu::outmethod(){
    cout << "This is an outside method example!" <<endl;
}

int main(){
    cinu cObj;
    cObj.mynum = 12;
    cObj.mystring = "Cinu";
    
    cinu yymObj;
    yymObj.mynum = 1;
    yymObj.mystring = "llm";
    
    cinu yetanotherobject;
    yetanotherobject.inmethod();
    
    cinu myobject;
    myobject.outmethod();
    
    cout << cObj.mynum <<endl << cObj.mystring <<endl ;
    cout << yymObj.mynum << endl << yymObj.mystring <<endl;
    return 0;
}
