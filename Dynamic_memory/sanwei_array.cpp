/*
int ***array;
// 假定数组第一维为 m， 第二维为 n， 第三维为h
// 动态分配空间
array = new int **[m];
for( int i=0; i<m; i++ )
{
	array[i] = new int *[n];
	for( int j=0; j<n; j++ )
	{
		array[i][j] = new int [h];
	}
}
//释放
for( int i=0; i<m; i++ )
{
	for( int j=0; j<n; j++ )
	{
		delete array[i][j];
	}
	delete array[i];
}
delete [] array;

*/

#include <iostream>
using namespace std;

int main()
{
	int i, j, k; //p[2][3][4]

	int ***p;
	p = new int **[2];
	for(i=0; i<2; i++) {
		p[i] = new int *[3];
		for(j=0; j<3; j++) {
			p[i][j] = new int[4];
		}
	}

	//输出p[2][3][4]三维数据
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			for(k=0; k<4; k++) {
				p[i][j][k] = i + j + k;
				cout << p[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	//释放内存
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			delete [] p[i][j];
		}
	}
	for(i=0; i<2; i++) {
		delete [] p[i];
	}
	delete [] p;
	return 0;
}
