// Problem : https://www.codechef.com/problems/NAME2?tab=statement

#include <iostream>
using namespace std;

bool isSubsequence(string s1, string s2) {
    int i = 0, j = 0;
    
    while (i < s1.length() && j < s2.length()) {
        if (s1[i] == s2[j]) 
            i++;
        
        j++;
    }
    return (i == s1.length());
}

int main() {
   int t;
   cin>>t;
   
   while(t--){
        string m,w;
        cin>>m>>w;
        
        if(isSubsequence(m,w) or isSubsequence(w,m)==1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}
