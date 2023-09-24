#include<iostream>
using namespace std;

int main()
{
   int row, col, m1[10][10],isidentity=1;

   cout<<"Enter the number of rows: ";
   cin>>row;
   cout<<"Enter the number of column: ";
   cin>>col;
   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cout<<m1[i][j]<<" ";
     }
     cout<<"\n";
   }
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       if(m1[i][j]!=1 && m1[i][j]!=0)
       {
           isidentity=0;
       }
     }
   }
   if(isidentity==1)
   {
       cout<<"The matrix is identity";
   }
   else
   {
       cout<<"Not identity";
   }
   return 0;
}
