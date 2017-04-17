#include<iostream>
using namespace std;
template <class T>
T findmax(T a, T b, T c) {
	T max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}
int main() {
	int a=1, b=2, c=3, max;
	float a1=1.0, b1=2.0, c1=3.0, max1;
	double a2=1.0, b2=2.0, c2=3.0, max2;

	max = findmax(a, b, c);
	max1 = findmax(a1, b1, c1);
	max2 = findmax(a2, b2, c2);

	cout<< max << "  " << max1 << "  " << max2 << endl;

	return 0;

}
