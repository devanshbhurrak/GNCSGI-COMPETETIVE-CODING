/*
Problem Statement https://www.codechef.com/practice/course/strings-cpp/PCPPST01/problems/TWOSTR?tab=statement
T.C : O(n)
S.C : O(1)

Solution when we observe the test cases we can find an pattern to be an valid answer the answer needs to be following these conditions

1. Both the character must be same
2. Either of one character should be ?
3. Both the character should be ?
*/
#include <iostream>
using namespace std;

bool isStringMatched(string x, string y){
    if(x.size() != y.size())
        return false;
    
    int n = x.size();
    
    for(int i=0; i<n; i++){
        if((x[i] != y[i]) && (x[i] != '?' && y[i] != '?'))
            return false;
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    string x, y;
	    cin>>x;
	    cin>>y;
	    
	    cout<<(isMatched(x,y) ? "Yes" : "No")<<endl;;
	}
	return 0;
}

