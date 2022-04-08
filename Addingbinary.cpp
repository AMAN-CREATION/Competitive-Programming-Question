#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int ans=0;//insilais
    while (n>0)
    {
        int lastdigit = n%10;
        ans =ans*10 +lastdigit;
        n/=10;
    }
    return ans;
}

int addbinary(int a,int b){
    int ans=0;
    int prevCarry=0;
    while (a>0 && b>0)
    {
        if(a%2==0 && b%2==0) // case 1;
        {
            ans = ans*10 + prevCarry;
            prevCarry = 0; // update;
        }
        else if (a%2==0 && b%2==1 || a%2==1 && b%2==0) // case 2;
        {
            if(prevCarry==1)//append 0;
            {
                ans=ans*10+0;
                prevCarry=1;
            }
            else
            {
                ans=ans*10+1;
                prevCarry = 0;
            }
        }
        else //case 3;
        {
            ans = ans*10 + prevCarry;
            prevCarry =1; //update;
        }
        a/=10;
        b/=10;
    }
    while (a>0)
    {
        if (prevCarry==1)
        {
            if (a%2==1)
            {
                ans = ans*10+0;
                prevCarry =1; // update;
            }
            else
            {
                ans =ans*10+1;
                prevCarry =0;// update;
            }
        }
        else{
            ans = ans*10+ (a%2);
        }
        a/=10;// update;
    
    }
    while (b>0)
    {
        if (prevCarry==1)
        {
            if (b%2==1)
            {
                ans = ans*10+0;
                prevCarry =1; // update;
            }
            else
            {
                ans =ans*10+1;
                prevCarry =0;// update;
            }
        }
        else{
            ans = ans*10+ (b%2);
        }
        b/=10;// update;
    }
    if(prevCarry==1)
    {
        ans= ans*10 +1;
    }
    ans=reverse(ans);
    return ans;
}

int32_t main(){
    int a,b;
    cin>>a>>b;
    
    cout<<addbinary(a,b)<<endl;
}