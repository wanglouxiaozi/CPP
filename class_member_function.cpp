#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		double breadth;
		double height;
		
		double getVolume(void);
		void setLength(double len);
		void setBreadth(double bre);
		void setHeight(double hei);
};

double Box::getVolume(void)
{
	return length * breadth * height;
}

void Box::setLength(double len)
{
	length = len;
}

void Box::setBreadth(double bre)
{
	breadth = bre;
}

void Box::setHeight(double hei)
{
	height = hei;
}

int main()
{
	Box box1;
	Box box2;
	double volume, volume2;
	box1.setLength(10);
	box1.setBreadth(11);
	box1.setHeight(12);
	volume = box1.getVolume();
	cout << "volume: " << volume << endl;
	
	box2.setLength(6);
	box2.setBreadth(6);
	box2.setHeight(6);
	volume2 = box2.getVolume();	
	cout << "volume2: " << volume2 << endl;	
	return 0;
}	
