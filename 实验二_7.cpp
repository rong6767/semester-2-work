#include<iostream>
using namespace std;
class Matrix{
private:
  int a[3][5],b[3][5],c[3][5];
public:
  Matrix(){
    cout<<"请输入a矩阵："<<endl;
    for(int i=0;i<3;i++)
      for(int j=0;j<5;j++)
        cin>>a[i][j];
    cout<<"请输入b矩阵："<<endl;    
    for(int i=0;i<3;i++)
      for(int j=0;j<5;j++)
        cin>>b[i][j];
  }
  void add(){
    for(int i=0;i<3;i++)
      for(int j=0;j<5;j++)
        c[i][j]=a[i][j]+b[i][j];
  }
  void display(){
    for(int i=0;i<3;i++)
      {
        for(int j=0;j<5;j++)
          cout<<c[i][j]<<" ";
        cout<<endl;
        }
      }
};

int main(){
  Matrix m1;
  m1.add();
  m1.display();
}
