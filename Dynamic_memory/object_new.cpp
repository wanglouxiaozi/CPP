/*
	对象的动态内存分配
*/

#include <iostream>
using namespace std;

class Box
{
	public:
		Box() {
			cout << "called constructor " << endl;
		}
		~Box() {
			cout << "called destructor " << endl;
		}
};

int main()
{
	Box *myBoxArray = new Box[4];
	
	delete [] myBoxArray;
	return 0;
}
