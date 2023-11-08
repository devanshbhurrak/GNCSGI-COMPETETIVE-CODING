#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n; 
	    
	    int hight = 0;
	    while(hight < n){
	        hight++;
	        n -= hight;
	    }
	    cout<<hight<<endl;
	}
	return 0;
}
