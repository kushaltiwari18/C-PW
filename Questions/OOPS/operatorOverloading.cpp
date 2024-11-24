#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex(int x, int y){ // constructor for initializing
        real = x;
        img = y;
    }

    Complex operator+(Complex &c){   // return type first 
        Complex ans(0, 0);  // initialise
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }

      Complex operator*(Complex &c){   // return type first 
        Complex ans(0, 0);  // initialise
        ans.real = real * c.real;
        ans.img = img * c.img;
        return ans;
    }
};


int main(){

    Complex c1(1, 2);
    Complex c2(1, 3);

    Complex c3 = c1 + c2;
    cout<<c3.real<<" i"<<c3.img<<endl;

    Complex c4 = c1 * c2;
    cout<<c4.real<<" i"<<c4.img<<endl;

    return 0;
}