#include<iostream>
#include<cmath>
using namespace std;
class Point{
private:
  int x,y;
public:
  Point(){
    cout<<"Please input the location of point"<<endl;
    cin>>x>>y;
  }
  void get_distance(Point p1,Point p2){
    double distance=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
    cout<<distance;
  }
};

int main(){
  Point p1;
  Point p2;
  p1.get_distance(p1,p2);

  return 0;
}
