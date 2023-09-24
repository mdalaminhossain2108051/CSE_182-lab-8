#include<iostream>
using namespace std;
int main()
{
int arr[10][10];
int row, col, total_row, total_col, isupper;
cout<<"Enter the rows and columns: ";
cin>>total_row>>total_col;
cout<<"Enter the elements of matrix=";
for(row=0; row<total_row; row++)
{
for(col=0; col<total_col; col++)
{
cin>>arr[row][col];
}
}
isupper = 1;
for(row=0; row<total_row; row++)
{
for(col=0; col<total_col; col++)
{

if(row<col && arr[row][col]!=0)
{
isupper = 0;
}
}
}

if(isupper == 1)
{
cout<<"\nThe matrix is lower triangular matrix."<<endl;
}
else
{
cout<<"\nThe matrix is not lower triangular matrix."<<endl;
}
return 0;
}
