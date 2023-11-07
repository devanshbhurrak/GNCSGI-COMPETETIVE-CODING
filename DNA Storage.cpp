#include <iostream>
using namespace std;

string dnaStorage(int n, string s){
    string ans = "";
    for(int i=0; i<=n; i+=2){
        string ch = "";
        ch += s[i];
        ch += s[i+1];
        if(ch == "00")
            ans += 'A';
        else if(ch == "01")
            ans += 'T';
        else if(ch == "10")
            ans += 'C';
        else if(ch == "11")
            ans += 'G';
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;

        string ans = dnaStorage(n, s);
        cout<<ans<<" ";
    }
    return 0;
}
