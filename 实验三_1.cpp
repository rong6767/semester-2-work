#include<iostream>
using namespace std;
class Circle{
	private:
		static int num;
		double r;
		double circum;
	public:
		Circle(){
			num++;
			cout<<"ÇëÊäÈëÔ²µÄ°ë¾¶:"<<endl;
			cin>>r;
			circum=2*3.1415*r;
		}
		static int get_num();
	friend double addc(Circle &c1,Circle &c2);
		
}; 
int Circle::num=0;

int Circle::get_num(){
	return num;
}

double addc(Circle &c1,Circle &c2){
	return c1.circum+c2.circum;
}

int main(){
	Circle c1,c2;
	int num;
	double csum;
	num=Circle::get_num();
	csum=addc(c1,c2);
	cout<<num<<endl<<csum;
	
	return 0;
}
