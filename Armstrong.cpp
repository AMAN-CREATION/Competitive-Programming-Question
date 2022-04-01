// Display the number in Armstorng Number;

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int sum=0;
    int Arms=num;
    while (num>0)
    {
        int lastdigit = num % 10;
        sum += pow(lastdigit,3);
        num = num/10;
    }
    if (sum!=num)
    {
        cout<<"The number is Armstrong number.";
    }
    else
    {
        cout<<"The number is not Armstrong number.";
    }
    
    return 0;
}
