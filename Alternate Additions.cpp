#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a, b;
        cin>>a>>b;
       
        cout<<(((b-a)%3 == 2) ? "NO" : "YES")<<endl;
    }
    return 0;
}
