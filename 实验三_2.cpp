#include<iostream>
using namespace std;
class Student{
	private:
		int no,chi_score,eng_score,mat_score;
		char name[10];
		static double chi_sum;
		static double eng_sum;
		static double mat_sum;
		static double num;
	public:
		Student(){
			cout<<"Please input the number:";
			cin>>no;
			cout<<"Please input the name:";
			cin>>name;
			cout<<"Please input score of three subjects:";
			cin>>chi_score>>eng_score>>mat_score;
			chi_sum+=chi_score;
			eng_sum+=eng_score;
			mat_sum+=mat_score;
			num++;
		}
		static double chi_average();
		static double eng_average();
		static double mat_average();
		static int get_num();
	
}; 
double Student::chi_average(){
	return chi_sum/num;
}
double Student::eng_average(){
	return eng_sum/num;
}
double Student::mat_average(){
	return mat_sum/num;
}
int Student::get_num(){
	return num;
}
double Student::chi_sum=0;
double Student::eng_sum=0;
double Student::mat_sum=0;
double Student::num=0;

int main(){
	Student s1,s2;
	double chi_ave,eng_ave,mat_ave;
	chi_ave=Student::chi_average();
	eng_ave=Student::eng_average();
	mat_ave=Student::mat_average();
	cout<<chi_ave<<endl<<eng_ave<<endl<<mat_ave;
}
