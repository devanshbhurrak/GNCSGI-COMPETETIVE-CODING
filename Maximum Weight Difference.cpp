#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n],sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    sort(arr,arr+n);
	    int start=0,end=0;
	    for(int i=0;i<k;i++){
	        start+=arr[i];
	        end+=arr[n-1-i];
	    }
	    
	    cout<<max(sum-2*start, 2*end-sum)<<endl;
	}
	return 0;
}
