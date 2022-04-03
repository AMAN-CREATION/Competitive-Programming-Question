#include<bits/stdc++.h>
using namespace std;

int binarytodecimal( int n){
    int ans =0;
    int x = 1; //temporary variable;
    while (n>0)
    {
        int y = n % 10; //for lasdigit;
        ans += x*y;
        x*=2;//base;
        n/=10; //second digit;
    }
    return ans; 
    
}

int octaltodecimal ( int n){
    int ans=0;
    int x=1;//temporary variable;
    while (n>0)
    {
        int y=n%10;//for lasdigit;
        ans+=x*y;
        x*=8;//base;
        n/=10;//second digit;
    
    }
    return ans;
    
}
int hexatodeciaml(string n){
    int ans =0;
    int x=1;
    
    int s = n.size();
    for (int i = s-1; i >=0; i--)
    {
        if (n[i]>='0' && n[i]<='9')
        {
            ans+=x*(n[i]-'0'); //gives 2;
        }
        else if (n[i]>='A' && n[i]<='f') //char incremeant;
        {
            ans+=x*(n[i]-'A'+10);
        }
        x*=16; //base;
    }
    return ans;
    

}
int decimaltobinary(int n){
    int x=1;
    int ans=0;
    while (x<=n)
    
        x*=2;
        x/=2;
        
    while(x>0) //loop or checking bits;
    {
        int lastdigit =n/x;
        n-=lastdigit*x; // decreasing n;
        x/=2; //update;
        ans =ans*10+lastdigit;
    }
    return ans;
    
}
int decimaltooctal(int n){
    int x=1;
    int ans=0;
    while (x<=n)
    x*=8;
    x/=8;
    while (x>0)
    {
        int lastdigit =n/x;
        n-=lastdigit * x;
        x/=8;
        ans =ans*10+lastdigit;
    }
    return ans;
}

string decimaltohexa(int n){
    int x=1;
    string ans="";
    while(x<=n)
    x*=16;
    x/=16;
    while (x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if (lastdigit<=9)
        {
            ans=ans + to_string(lastdigit);
        }
        else
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
        
    }
    return ans;
}

int32_t main(){
    int n;
    cin>>n;

    cout<< decimaltohexa(n) <<endl;
}