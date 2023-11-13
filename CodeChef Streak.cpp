/*Problem Statement: https://www.codechef.com/practice/course/arrays-cpp/PCPPAR01/problems/CS2023_STK?tab=statement*/

#include <iostream>
using namespace std;

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
	        
	    int omStreaks = 0, addyStreaks = 0;
	    int om_maxStreaks = 0, addy_maxStreaks = 0;
	        
	    for(int i=0; i<n; i++){
	        if(a[i] > 0)
	            omStreaks++;
	        else
	            omStreaks = 0;
        	
        	if(b[i] > 0)
	            addyStreaks++;
	        else
	            addyStreaks = 0;     
	            
	        om_maxStreaks = max(om_maxStreaks, omStreaks);
	        addy_maxStreaks = max(addy_maxStreaks, addyStreaks);
	    }
	    if(om_maxStreaks > addy_maxStreaks)
	        cout<<"Om"<<endl;
	    else if(om_maxStreaks < addy_maxStreaks)
	        cout<<"Addy"<<endl;
	    else
	        cout<<"Draw"<<endl;
	}
	return 0;
}
