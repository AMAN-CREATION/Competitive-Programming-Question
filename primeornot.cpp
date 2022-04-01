// Check whether a number is prime or not

#include<iostream>
using namespace std;

int main(){
    int num,ctr=0;
    cout<<"Input a number: ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            ctr++;
        }
    }
    if (ctr==2)
    {
        cout<<"The number is prime number."<<endl;
    }
    else
    {
        cout<<"the number is a prime number."<<endl;
    }
    
    return 0;
}