#include<iostream>
using namespace std;
class Complex {
private:
	double real, imag;
public:
	Complex(double r,double i):real(r),imag(i){}
	Complex():real(0),imag(0){}
	Complex(double r):real(r),imag(0){}
	void show() {
		cout << real << (imag>=0?"+":"") << imag << "i" << endl;
	}
	Complex &operator++() {
		real++;
		return *this;
	}
	friend Complex operator++(Complex &c,int);
	friend Complex operator + (Complex, Complex);
};
Complex operator++(Complex &c,int i) {
	Complex temp(c);
	c.real++;
	return temp;
}
Complex operator + (Complex c1, Complex c2) {
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
	Complex c1(1, 1), c2(2, 2), c3;
	c3 = c1 + 2.0;
	c3.show();
	c3++;
	c3.show();
	++c3;
	c3.show();
	c3 = c1 + c2;
	c3.show();
	return 0;
}
