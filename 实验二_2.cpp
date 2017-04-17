#include<iostream>
using namespace std;
int montharray_1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int montharray_2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
class Date{
	private:
		int year;
		int month;
		int day;
	public:
		Date(){
			cout<<"PLEASE INPUT YEAR MONTH AND DAY"<<endl;
			cin>>year>>month>>day;

		}
		bool judge_date(){
			if(((year/4==0)&&(year/100!=0))||(year/400==0))
				if(month<=12)
					if(day<=montharray_2[month-1])
						return true;
					else
						return false;
				else
					return false;
			else
				if(month<=12)
					if(day<=montharray_1[month-1])
						return true;
					else
						return false;
				else
					return false;
		}
		void showdate(){
			cout<<year<<"Äê"<<month<<"ÔÂ"<<day<<"ÈÕ"<<endl;
		}
		void addone(){
			if(((year/4==0)&&(year/100!=0))||(year/400==0))
				if(month==12)
					if(day==31){
						year++;
						month=1;
						day=1;
					}
					else
						day++;
				else
					if(day==montharray_2[month-1]){
						month++;
						day=1;
					}
					else
						day++;
			else
				if(month==12)
					if(day==31){
						year++;
						month=1;
						day=1;
					}
					else
						day++;
				else
					if(day==montharray_1[month-1]){
						month++;
						day=1;
					}
					else
						day++;
		}
};

int main(){
	Date time1;
	if(time1.judge_date()==true)
		{
			time1.addone();
			time1.showdate();
		}
	else
		cout<<"date false"<<endl;

	return 0;

}
