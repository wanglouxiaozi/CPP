/*
* allenwang@tvunetworks.com
* g++ -std=c++11 xxx.cpp
*/


#include <fstream>
#include <string>
#include <iostream>
#include <streambuf>

using namespace std;

int WriteFile(string filepath, const string &Init)
{
	//Define the file output stream
	ofstream outfile;

	//Create the file to output based on the parameter path.
	outfile.open(filepath, ios::out | ios::trunc);
	if(!outfile)
		return 1;
	outfile << Init << endl;

	outfile.close();
	return 0;
}

string Read_Str(string filepath)
{
	ifstream infile;
	infile.open(filepath);
	if (!infile)  //Open failure, incorrect path.
		cout << "Open File Failed" << endl;
	
	//Reads the text content to the string.
	string readStr((std::istreambuf_iterator<char>(infile)),  std::istreambuf_iterator<char>());
	return  readStr;
}

int main()
{
	WriteFile("./C.txt", "Hello TVU!");
	cout << Read_Str("./C.txt") << endl;
	getchar();
	return 0;
}
