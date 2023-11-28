#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        string d;
        cin>>d;
        
        int zero = 0, one = 0;
        
        for(int i=0; i<d.length(); i++)
            (d[i] == '1') ? one++ : zero++;
        
        if(one==1 || zero==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	return 0;
}
