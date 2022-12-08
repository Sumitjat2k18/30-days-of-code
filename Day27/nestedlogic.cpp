#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int datereturn, monthreturn, yearreturn;
    int fine = 0;
    cin >> datereturn >> monthreturn >> yearreturn;
    int datedue, monthdue, yeardue;
    cin >> datedue >> monthdue >> yeardue;
    if (yearreturn > yeardue)
    {
        fine = 10000;
    }
    else if (yearreturn == yeardue && monthreturn > monthdue)
    {
        fine = 500 * (monthreturn - monthdue);
    }
    else if (yearreturn == yeardue && monthreturn == monthdue && datereturn > datedue)
    {
        fine = 15 * (datereturn - datedue);
    }
    cout << fine;
    return 0;
}
// }
//  int rday,rmonth,ryear;
//     cin>>rday >>rmonth >>ryear;
//     int dday,dmonth,dyear;
//     cin>>dday >>dmonth >>dyear;

//     int fine = 0;

//     if(ryear>dyear) {
//         fine = 10000;
//     }
//     else if(ryear==dyear && rmonth>dmonth) {
//         fine = 500 * (rmonth-dmonth);
//     }
//     else if(ryear==dyear && rmonth==dmonth && rday>dday) {
//         fine = 15 * (rday-dday);
//     }

//     cout<<fine;

//     return 0;
// }
