#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n;
//     cin>>n;
//     map<string,string>mapping;
//     string name,phone,nametest;
//     for(int i=0;i<n;i++)
//     {
//         cin>>name>>phone;
//         mapping.insert(pair<string,string>(name,phone));
//     }
//     while(cin>>nametest)
//     {
//         if(mapping.find(nametest)!=mapping.end())
//         {
//             cout<<nametest<<"="<<mapping.at(nametest)<<endl;
//         }
//         else {
//         cout<<"Not found"<<endl;
//         }    }
//     return 0;}

int main()
{

    int n, phone;
    cin >> n;
    map<string, int> m;
    string name, nametest;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> phone;
        m.insert(pair<string, int>(name, phone));
    }

    while (cin >> nametest)
    {
        if (m.find(nametest) != m.end())
        {
            cout << nametest << "=" << m.at(nametest) << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
