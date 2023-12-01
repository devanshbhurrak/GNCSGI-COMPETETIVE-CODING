#include <iostream>
using namespace std;

bool isLuckyNum(long n){
    if(n%2 == 1)
        return true;
    
    int cnt = 0;
    while(n%2 == 0){
        cnt++;
        n/=2;
    }
    
    return !(cnt%2);
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    long n;
	    cin>>n;
	    
	    cout<<(isLuckyNum(n) ? "1" : "0")<<endl;
	}
}
