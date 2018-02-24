#include <iostream>
using namespace std;

class Adder
{
	public:
		Adder(int i = 0)
		{
			total = i;
		}
		
		void addNum(int number) //对外的接口
		{
			total += number;
		}

		int getTotal() //对外的接口
		{
			return total;
		}
	private:
		int total;
};

int main()
{
	Adder a;
	a.addNum(10);
	a.addNum(20);
	a.addNum(30);

	cout << "Total: " << a.getTotal() << endl;
	return 0;
}
