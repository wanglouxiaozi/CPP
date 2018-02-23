#include <iostream>
using namespace std;

class Line
{
	public:
		void setLength(double len);
		double getLength();
		double getHeight();
		Line(double len, double);
		~Line();
	private:
		double length;
		double height;
};

Line::Line(double len, double hei):length(len), height(hei)
{
	cout << "Object is being created, length= " << len << " Height= " << hei << endl;
}

Line::~Line()
{
	cout << "Object is being deleted" << endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength()
{
	return length;
}

double Line::getHeight()
{
	return height;
}

int main()
{
	Line line(10.0,15.0);
	cout << "Length of line: " << line.getLength() << " height= " << line.getHeight() << endl;
	line.setLength(80);
	cout << "Length of line: " << line.getLength() << " height= " << line.getHeight() << endl;
	return 0;
}
