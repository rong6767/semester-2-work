#include<iostream>
using namespace std;

class Time {
private:
	int hour, min, sec;
public:
	Time() {
		cout << "Please input the time";
		cin >> hour >> min >> sec;
	}

	void add(int n) {
		int sum_sec = hour * 60 * 60 + min * 60 + sec;
		sum_sec += n;
		if (sum_sec>86400)
			while (sum_sec>86400)
				sum_sec -= 86400;
		hour = sum_sec / 3600;
		min = sum_sec % 3600 / 60;
		sec = sum_sec % 3600 %60;

	}
	void show() {
		cout << hour << ":" << min << ":" << sec << endl;
	}

};

int main() {
	Time time1;
	int n;
	cout << "Please add seconds" << endl;
	cin >> n;
	time1.add(n);
	time1.show();

	return 0;
}
