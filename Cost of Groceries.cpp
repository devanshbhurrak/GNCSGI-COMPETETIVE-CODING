#include <iostream>
using namespace std;

int costForGrocery(int n, int x, int a[], int b[]){
    int cost = 0;
    for(int i=0; i<n; i++){
        if(a[i] >= x)
            cost += b[i];
    }
    return cost;
}

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int n, x;
	    cin>>n;
	    cin>>x;
	    int a[n];
	    int b[n];
	    
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    
	    for(int i=0; i<n; i++)
	        cin>>b[i];
	    
        int cost = costForGrocery(n,x,a,b);
        cout<<cost<<endl;
    }   
	return 0;
}
