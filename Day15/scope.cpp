#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
public:
int computeDifference(int);
    
       Difference(vector<int> v)
       {elements = v;}// assign a value to each array element and print 
       void computeDifference(){
        int n = elements.size(), difference=0, max=0;
     for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                difference = abs(elements[i] - elements[j]);
                if(difference > max) max = difference;
            }
                        
        }
        
        maximumDifference = max;
    }
	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}