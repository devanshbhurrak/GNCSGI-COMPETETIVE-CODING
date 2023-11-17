// Problem : https://www.codechef.com/problems/ZEROSTRING

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int oneCount = 0;
	    int zeroCount = 0;
	    
	    for(int i=0; i<n; i++){
	        if(s[i] == '0')
	            zeroCount++;
	        else 
	            oneCount++;
	    }
	    cout<<((oneCount > zeroCount) ? zeroCount+1 : oneCount)<<endl;
	}
	return 0;
}
