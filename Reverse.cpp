// Display the number in reverse order
#include<iostream>
using namespace std;

int main(){
    int num,rev,t,sum=0;
    cout<<"Input a number"<<endl;
    cin>>num;
    for ( t = num; num != 0; num=num/10)
    {
        rev= num%10;
        sum= sum*10+rev;
    }
    cout<<sum;
    return 0;
}