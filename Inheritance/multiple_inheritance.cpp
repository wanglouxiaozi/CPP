#include <iostream>

using namespace std;

class Shape
{
	public:
		void setWidth(int w);
		void setHeight(int h);
	protected:
		int width;
		int height;
};

class PaintCost
{
	public:
		int getCost(int area);
};

class Rectangle: public Shape, public PaintCost
{
	public:
		int getArea();
};

void Shape::setWidth(int w)
{
	width = w;
}

void Shape::setHeight(int h)
{
	height = h;
}

int PaintCost::getCost(int area)
{
	return area*70;
}

int Rectangle::getArea()
{
	return width * height;
}

int main()
{
	Rectangle Rect;
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();

	cout << "Total area: " << Rect.getArea() << endl;

	cout << "Total paint cost: $" << Rect.getCost(area) << endl;
	return 0;
}
