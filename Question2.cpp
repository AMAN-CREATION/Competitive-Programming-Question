// Print Hollow Ractangle Patter
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    for (int  i = 1; i <= rows; i++) // loop for rows;
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i==1 || i==rows || j==1 || j==cols) // loop for coloumns;
            {
                cout<<"*";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}