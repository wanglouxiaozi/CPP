#include <iostream>

using namespace std;

class Line
{
	public:
		void setLength(double len);
		double getLength(void);
		Line()
		{
			cout << "Object is being created" << endl;
		}

		~Line(){
			cout << "Object is being deleted" << endl;
		}
	private:
		double length;
};

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}

int main()
{
	Line line;
	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;
	return 0;
}
