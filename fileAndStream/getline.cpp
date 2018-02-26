#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	fstream iofile;
	iofile.open("t.txt", ios::out | ios::in | ios::trunc);
	string bookname;
	string bookwriter;
	cout << "input the bookname:" << endl;
	getline(cin, bookname);
	iofile << bookname << endl;
	cout << "input the bookwriter:" << endl;
	getline(cin, bookwriter);
	iofile << bookwriter << endl;
	iofile.close();
	cout << "read the input file:" << endl;
	iofile.open("t.txt");
	string str;
	while(getline(iofile, str))
	{
		cout << str << endl;
	}
	return 0;
}
