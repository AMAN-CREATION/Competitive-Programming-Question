#include<iostream>
using namespace std;

int main(){
    int i, j, k, l, m;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
            cout<<(" ");
        for (k = 1; k <= i; k++)
            cout<<("*");
        for (l = 1; l <= i; l++)
            cout<<("*");
        for (m = 4; m >= i; m--)
            cout<<(" ");
        for (k = 1; k <= i; k++)
            cout<<("*");
        for (l = 1; l <= i; l++)
        cout<<("*");
        printf("\n");
    }
    for (i = 10; i >= 1; i--)
    {
        for (j = 10; j >= i; j--)
        cout<<(" ");
        for (l = 1; l <= i; l++)
            cout<<("*");
        for (m = i; m >= 2; m--)
            cout<<("*");
        printf("\n");
    }
    return (0);
}