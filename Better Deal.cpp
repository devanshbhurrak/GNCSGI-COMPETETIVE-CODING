//Problem : https://www.codechef.com/practice/course/interview-dsa/DSAPREP_01/problems/KNGATK

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    
	    int first = 100-a;
	    int second = 200-b*2;
	    
	    if(first < second)
	        cout<<"FIRST"<<endl;
	    else if(first > second)
	        cout<<"SECOND"<<endl;
	    else
	        cout<<"BOTH"<<endl;
	}
	return 0;
}
