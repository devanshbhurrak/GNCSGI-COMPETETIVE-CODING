// Problem : https://www.codechef.com/START93D/problems/SEVENRINGS?tab=statement

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
        int n, x;
        cin>>n>>x;
        
        int cost = n*x;
        
        cout<<((cost<100000 && cost>9999)?"YES":"NO")<<endl;
	}
	return 0;
}
