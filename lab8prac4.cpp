#include<iostream>
using namespace std;

int main()
{
   int row, col, m1[10][10], m2[10][10],isequal;

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

   cout<<"Enter the number of rows: ";
   cin>>row;
   cout<<"Enter the number of column: ";
   cin>>col;
   cout << "Enter the elements of second 1st matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }
      for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
            cout<<m2[i][j]<<" ";
     }
     cout<<"\n";
   }
   isequal=1;
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       if(m1[i][j]!=m2[i][j])
       {
           isequal=0;
           break;
       }
     }
   }
     if(isequal == 1)

    {

        cout<<"\nMatrix A is equal to Matrix B";

    }

    else

    {

        cout<<"\nMatrix A is not equal to Matrix B";

    }



    return 0;

}


