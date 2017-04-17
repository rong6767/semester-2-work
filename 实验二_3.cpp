#include<iostream>
#include<vector>
using namespace std;
class Prime {
private:
	int m, n;
	vector<int> v;
public:
	Prime() {
		cout << "请输入需要查找的范围" << endl;
		cin >> m >> n;
	}
	void search() {
		int count = 0;
		int i = 0, j = 0;
		for (i = m; i <= n; i++) {
			for (j = 2; j <= i/2; j++)
				if (i%j == 0)
					count++;
			if (count == 0)
				v.push_back(i);
		}
	}
	void display()
		{
			for (int i=0;i<v.size();i++)
			{
				cout << v[i] << "  ";
			}
			cout << endl;
	}
};

int main() {
	Prime p1;
	p1.search();
	p1.display();

	return 0;
}
