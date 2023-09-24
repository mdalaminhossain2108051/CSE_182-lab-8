#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns, number,scalarMulArr[i][j], multi[i][j];

	cout << "\nPlease Enter the Matrix rows and Columns =  ";
	cin >> i >> j;

	cout << "\nPlease Enter the Matrix Items\n";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> scalarMulArr[rows][columns];
		}
	}

	cout << "\nPlease Enter the Multiplication Value = ";
 	cin >> number;

 	cout << "\nThe Result of a Scalar Matrix Multiplication is :\n";
	for(rows = 0; rows < i; rows++)
  	{
  		for(columns = 0; columns < j; columns++)
  		{
  			multi[rows][columns] = number * scalarMulArr[rows][columns];
  			cout << multi[rows][columns] << " ";
		}
		cout << "\n";
  	}

 	return 0;
}
