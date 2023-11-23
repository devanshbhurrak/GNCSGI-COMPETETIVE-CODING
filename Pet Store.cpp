// Problem : https://www.codechef.com/problems/PETSTORE?tab=submissions

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    unordered_map<int,int> freq;
	    
	    for(int i=0; i<n; i++){
	        int val;
	        cin>>val;
	        freq[val]++;
	    }
	    
	    if(n%2 == 1){
	        cout<<"No"<<endl;
	        continue;
	    }
	    
	    bool ans = false;
	    
	    for(auto &i : freq){
	        if(i.second % 2 == 1){
	            ans = true;
	            break;
	        }
	    }
        
        cout<<(ans ? "No" : "Yes")<<endl;
	}
	return 0;
}
