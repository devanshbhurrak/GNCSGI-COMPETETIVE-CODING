// Problem : https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PREP17

#include <iostream>
#include <algorithm>
using namespace std;

int commonElement(int a[], int b[], int n){
    sort(a, a+n);
    sort(b, b+n);
    
    int i=0, j=0, count=0;
    
    while(i<n && j<n){
        if(a[i] == b[j]){
            count++;
            i++; j++;
        }
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }
    return count;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n], b[n];
	    
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	        
	    for(int i=0; i<n; i++)
	        cin>>b[i];
	        
	    int ans = commonElement(a,b,n);
	    
	    cout<<ans<<endl;
	}
}
