#include<iostream>
using namespace std;
class Rectangle{
  private:
    int length,width,height,volume;
  public:
    Rectangle(){
      cout<<"please input length width and height"<<endl;
      cin>>length>>width>>height;
    }
    void show(){
      cout<<"length="<<length<<endl;
      cout<<"width="<<width<<endl;
      cout<<"height="<<height<<endl;
      cout<<"volume="<<volume<<endl;
    }
    int cal(){
      volume=length*width*height;
      return volume;
    }
};
int main(){
  Rectangle rec1,rec2,rec3;
  rec1.cal();
  rec2.cal();
  rec3.cal();
  rec1.show();
  rec2.show();
  rec3.show();

  return 0;
}
