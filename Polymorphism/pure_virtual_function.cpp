#include <iostream>

using namespace std;

class Shape
{
	protected:
		int width;
		int height;
	public:
		Shape(int a=0, int b=0)
		{
			width = a;
			height = b;
		}

		virtual int area() = 0;
};

class Rectangle: public Shape
{
	public:
		Rectangle(int a=0, int b=0):Shape(a, b) {}
		int area()
		{
			cout << "Rectangle class area :" << endl;
		}
		double getArea()
		{
			return width * height;
		}
};

class Triangle: public Shape
{
	public:
		Triangle(int a=0, int b=0):Shape(a, b) {}
		int area()
		{
			cout << "Tirangle class area :" << endl;
		}
		double getArea()
		{
			return width * height / 2;
		}
};

int main()
{
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);

	shape = &rec;
	shape->area();
	cout << rec.getArea() << endl;

	shape = &tri;
	shape->area();
	cout << tri.getArea() << endl;
	return 0;
}
