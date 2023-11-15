//problem statement: https://www.codechef.com/problems/WARRIORCHEF

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool checkResistance(vector<int> arr, ll x, int h){
    int strength = h;
    int n = arr.size();
    
    for(int i=0; i<n; i++){
        int enemy = arr[i];
        if(x < enemy){
            if(strength-enemy <= 0)
                return false;
            else 
                strength -= enemy;
        }
    }
    return true;
}

ll minResistance(vector<int> arr, int h){
    ll left = 0;
    ll right = *max_element(arr.begin(), arr.end());
    
    while(left < right){
        ll mid = left + (right-left)/2;
        
        if(checkResistance(arr,mid,h))
            right = mid;
        else
            left = mid + 1;
    }
    return right;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    ll n, h;
	    cin>>n>>h;
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	        
	    ll ans = minResistance(a,h);
	    
	    cout<<ans<<endl;
	}
	return 0;
}
