// Print the Ractangle pattern using loops:
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    for (int  i = 1; i <= rows; i++) //loop for rows;
    {
        for (int j = 1; j <= cols; j++) //loop for cols;
        {
            cout<<" * "; 
        }
        
        cout<<endl;
    }
    
}