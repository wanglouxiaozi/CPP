#include <iostream>
#include <fstream>
using namespace std;

//Write data to the file and read it out.
void file_wr(void)
{
	char data[100];
	//Write data to the file.
	ofstream outfile;
	outfile.open("test.txt");
	cout << "Write to the file" << endl;
	cout << "Enter your name:" << endl;
	cin.getline(data, 100);
	outfile << data << endl;
	cout << "Enter your age:" << endl;
	cin >> data;
	cin.ignore();
	outfile << data << endl;
	outfile.close();

	//Read the data from the file.
	ifstream infile;
	infile.open("test.txt");
	cout << "Read from the file" << endl;
	infile >> data;
	cout << data << endl;
	infile >> data;
	cout << data << endl;
	infile.close();
}


//Copy data from one file to another.
void file_copy(void)
{
	char data[100];
	ifstream infile;
	ofstream outfile;
	infile.open("test.txt");
	outfile.open("test_1.txt");
	cout << "copy from test.txt to test_1.txt" << endl;
	while(!infile.eof())
	{
		infile >> data;
		cout << data << endl;
		outfile << data << endl;
	}
	infile.close();
	outfile.close();
}

//Test the above read-write file and copy the file data.
int main(int argc, char* argv[])
{
	file_wr();
	file_copy();
	return 0;
}
