#include<iostream>
using namespace std;
class CAL{
	private:
		long int fact;
		int n;
	public:
		CAL(){
			cout<<"����������Ҫ��ý׳ˣ�";
			cin>>n;
			fact=1;
		}
		void process(){
			for(int i=1;i<=n;i++)
				fact*=i;
		}
		void show(){
			cout<<"n="<<n<<endl;
			cout<<"n!="<<fact<<endl;
		}
};

int main(){
	CAL fac1;
	fac1.process();
	fac1.show();

	return 0;
}