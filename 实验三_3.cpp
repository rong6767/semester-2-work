#include<iostream>
using namespace std;
class Date;
class Time{
	private:
		int hour,minute,second;
	public:
		Time(){
			cout<<"������ʱ���룺";
			cin>>hour>>minute>>second;
			}
		void display(Date &d);
	};
class Date{
	private:
		int year,month,day;
	public:
		Date(){
			cout<<"������������";
			cin>>year>>month>>day;
			}
		friend Time;
	};
	void Time::display(Date &d){
		cout<<d.year<<"-"<<d.month<<"-"<<d.day<<endl;
		cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
int main(){
	Time t;
	Date d;
	t.display(d);
	
	return 0;
}

