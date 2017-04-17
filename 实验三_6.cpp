#include<iostream>
#include<algorithm>
using namespace std;
#define N 100
template<class T>
class Array {
private:
	T data[N];
	int n;
public:
	Array() {
		cout << "请输入需要输入数组的长度:";
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> data[i];
	}
	T getmax(){
		T aa[N];
		for (int i = 0; i < n; i++)
			aa[i] = data[i];
		sort(aa, aa + n);
		return aa[0];
	}
	T getmin() {
		T aa[N];
		for (int i = 0; i < n; i++)
			aa[i] = data[i];
		sort(aa, aa + n);
		return aa[n - 1];
	}
	double getave() {
		double s;
		for (int i = 0; i < n; i++)
			s += data[i];
		return (double)s / n;
	}

};

int main() {
	Array<int> a;
	cout << "max=" << a.getmax() << endl;
	cout << "min=" << a.getmin() << endl;
	cout << "average=" << a.getave() << endl;
	Array<double> a1;
	cout << "max=" << a1.getmax() << endl;
	cout << "min=" << a1.getmin() << endl;
	cout << "average=" << a1.getave() << endl;
	return 0;
}
