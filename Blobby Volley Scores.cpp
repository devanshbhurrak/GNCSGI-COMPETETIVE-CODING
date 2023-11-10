/* Problem Statement : https://www.codechef.com/practice/course/strings-cpp/PCPPST01/problems/BLOBBYVOLLEY */
/* Time complexity : O(n) */
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    int server = 'A', receiver = 'B';
	    int A_score = 0 , B_score = 0;
	    
	    for(int i=0; i<n; i++){
	        if(s[i] == server)
	            (server == 'A') ? A_score++ : B_score++;
	        else
	            swap(server,receiver);
	    }
	    cout<<A_score<<" "<<B_score<<endl;
	}
	return 0;
}
