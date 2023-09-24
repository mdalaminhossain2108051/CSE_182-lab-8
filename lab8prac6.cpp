#include<iostream>
using namespace std;

int main()
{
   int row, col, m1[3][3],sum=0;

   cout<<"Enter the number of rows: ";
   cin>>row;
   cout<<"Enter the number of column: ";
   cin>>col;
   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<3;i++ ) {
     for (int j = 0;j < 3;j++ ) {
       cin>>m1[i][j];
     }
   }
   for (int i = 0;i<3;i++ ) {
     for (int j = 0;j < 3;j++ ) {
       cout<<m1[i][j]<<" ";
     }
     cout<<"\n";
   }
   cout<<"\nThe sum of minor diagonal matrix=";
   for (int i = 0;i<3;i++ ) {
     for (int j = 0;j < 3;j++ ) {
       if(i+j==3-1)
       {
           sum=sum+m1[i][j];
       }
     }
   }
   cout<<sum<<" ";
   return 0;
}
