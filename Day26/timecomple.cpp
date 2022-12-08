#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int t,n,i,c = 0;
cin>>t;
    /*logic*/
    while(t--){
        cin>>n;
        if(n==1){cout <<"Not prime"<< endl;}
        else if(n==2){cout <<"Prime"<< endl;}
        else{
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 1)
    {
       cout <<"Prime"<<endl;
    }
    else
    {
         cout <<"Not prime"<< endl; 
    }
    c=0;
    }
    }
return 0;    
}
