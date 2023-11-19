#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int c,d;
	    cin>>d>>c;
	    
	    int day1_cost = 0;
	    int day2_cost = 0;
	    
	    for(int i=0; i<3; i++){
	        int a; cin>>a;
	        day1_cost += a;
	    }
	    for(int i=0; i<3; i++){
	        int b; cin>>b;
	        day2_cost += b;
	    }
	    
	    int deliveryCost = day1_cost + day2_cost + 2*d;
	    int couponCost = day1_cost + day2_cost + c;
	    
	    if(day1_cost < 150)
	        couponCost += d;
	    if(day2_cost < 150)
	        couponCost += d;
	        
	    cout<<((couponCost < deliveryCost) ? "Yes" : "No")<<endl;
	}
	return 0;
}
