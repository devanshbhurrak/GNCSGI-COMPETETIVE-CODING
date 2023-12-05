// Problem : https://www.codechef.com/practice/course/number-theory/INTNT01/problems/APPLEORANGE

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, m;
	    cin>>n>>m;
	    
	    while(m!=0) {
	        int temp = m;
	        m = n%m;
	        n = temp;
	    }
	    
	    cout<<n<<endl;
	}
	return 0;
}
