#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main() {
//     int n;
//   cin>>n;
//     for(int i=0;i<n;i++){
//     string s,s1,s2;
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
//     cin>>s; 
//     for(int j=0;j<=s.length();j++) {
//    // string s1,s2;
//     if(j%2==0){
//         s1+=s[j];
//     }
//     else{
//         s2+=s[j];
//     }
//     }
//     cout<<s1<<s2<</n;
//     }
//     return 0;}

  int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {        string name;
        cin>>name;
        for(int j=0;j<name.length();j++)
        {
             if(j%2==0)cout<<name[j];
         }
         cout<<" ";
         for(int k=0;k<name.length();k++)
        {
             if(k%2!=0)cout<<name[k];}        
         cout<<"\n";
     }  
     return 0;
 }
