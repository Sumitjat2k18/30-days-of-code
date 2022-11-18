#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

// Write your code here
class Calculator
{
public:
    int power(int n, int p)
    {
        try
        {
            if (n < 0 || p < 0)
            {
                throw 0;
            }
            return pow(n, p);
        }
        catch (int e)
        {
            throw invalid_argument("n and p should be non-negative");
        }
    }
};
//         }
// class Calculator{
//   public:
//   int power(int n, int p){

//        if((n>=0&&n<=65535)&&(p>=0&&p<=65535)){
//       return pow(n,p);
//        }
//        else {
//            throw invalid_argument("n and p should be non-negative");
//        }
//   }
//  };

// return 0;
//     }
// };

int main()
{
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while (T-- > 0)
    {
        if (scanf("%d %d", &n, &p) == 2)
        {
            try
            {
                int ans = myCalculator.power(n, p);
                cout << ans << endl;
            }
            catch (exception &e)
            {
                cout << e.what() << endl;
            }
        }
    }
}