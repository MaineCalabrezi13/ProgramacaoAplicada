#include <iostream>
using namespace std;

class Point{
	public:
		int x, y;
		Point(int a, int b);
		void getPoint();
		Point operator+(Point p);
};

Point Point::operator+(Point p){
	x=x+p.x;
	y=y+p.y;
	
	return Point(x,y);
}

Point::Point(int a, int b){
	x=a;
	y=b;
}

void Point::getPoint(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
	
	Point p1(1,2), p2(2,3);
	Point p3=p1+p2;
	p3.getPoint();
	
	return 0;
}
