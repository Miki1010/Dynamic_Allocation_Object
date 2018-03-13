#include <iostream>
#include <stdlib.h>
using namespace std;

class Complex_Number
{
private:
    float real;
    float imaginary;
public:
    Complex_Number() : real(12.0),imaginary(8.1) {    // DEFAULT CONSTRUCTOR INITIALISATION LIST
       // real = 0.0 ,imaginary = 0.0 ;
       cout << "I am inside default constructor " << endl;
    }
    Complex_Number(float r,float i) : real(r),imaginary(i) {    // DEFAULT CONSTRUCTOR INITIALISATION LIST
       // real = 0.0 ,imaginary = 0.0 ;
       cout << "I am inside 2 ARG. constructor " << endl;
    }
    void Set_complex(double r, double i) {
        real = r ;
        imaginary = i ;
    }
    double Get_real(){
        return real;
    }
    double Get_img(){
        return imaginary;
    }
    void print(){
        cout << "Real : " << real << " and Imaginary : " << imaginary <<endl;
    }
    ~Complex_Number(){
        cout << "Destructor is called " << endl;
		cout << "Object Deleted enjoy!!" << endl;
    }
};

int main()

{   
	Complex_Number *Dynamic =  new Complex_Number();
    Complex_Number *cDynamic = new Complex_Number(10.50,20.50);
    cout << "Printing out dynamically Allocated Object!" <<endl;
    cDynamic->print();
    delete (Dynamic);
    delete (cDynamic);
    return 0;
}
