#include<iostream>
using namespace std;
template <class T>
void swap(T *a, T *b) {
	T t;
	t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int a, b;
	cin >> a >> b;
	swap(&a, &b);
	cout << "a=" << a << "b=" << b;

	return 0;

}
