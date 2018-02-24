#include <iostream>

using namespace std;

class Box
{
	public:
		static int objectCount;
		Box(double l=2.0, double b=2.0, double h=2.0)
		{
			cout << "Constructor called." << endl;
			length = l;
			breadth = b;
			height = h;
			objectCount++;
		}
		double volume()
		{
			return length * breadth * height;
		}
		static int getCount()
		{
			return objectCount;
		}

	private:
		double length;
		double breadth;
		double height;
};

int Box::objectCount = 0;

int main()
{
	cout << "Inital Stage Count: " << Box::getCount() << endl;

	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);

	cout << "Finial Stage Count: " << Box::getCount() << endl;
	return 0;
}
