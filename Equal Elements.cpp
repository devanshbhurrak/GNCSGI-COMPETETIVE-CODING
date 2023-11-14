/*Problem Statement : https://www.codechef.com/practice/course/arrays-strings-sorting/INTARR01/problems/EQUALELE */
/*  
  Time Complexity:O(n)
  Space Complexity:O(n)
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    int fr[n+1] = {0};
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        fr[a[i]]++;
	    }
	    int maxFreq = 0;
	    for(int i=1; i<=n; i++){
	        maxFreq = max(fr[i],maxFreq);
	    }
	    cout<<(n-maxFreq)<<endl;
	}
	return 0;
}
