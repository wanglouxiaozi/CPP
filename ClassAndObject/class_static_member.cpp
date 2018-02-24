#include <iostream>

using namespace std;

class Box
{
	public:
		static int objectCount;
		Box(double l=2.0, double b=2.0, double h=2.0) //构造函数
		{
			cout << "Constructor called." << endl;
			length = l;
			breadth = b;
			height = h;
			objectCount++;   //每次创建对象时增加1
		}
		
		double volume()
		{
			return length * breadth * height;
		}
	private:
		double length;
		double breadth;
		double height;
};

//初始化类Box的静态成员
int Box::objectCount = 0;

int main()
{
	Box Box1(3.3, 1.2, 1.5);
	cout << "Box1's objectCount: " << Box1.objectCount << endl;
	
	Box Box2(8.5, 6.0, 2.0);
	cout << "Box2's objectCount: " << Box2.objectCount << endl;
	
	cout << "Total objects: " << Box::objectCount << endl;
	return 0;
}
