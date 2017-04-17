#include <bits/stdtr1c++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,q,t;
    cin>>n;
    map<int,int>mapita;
    for(int i=1;i<=n;i++){
        cin>>t;
        mapita[t] = i;
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>t;
        cout<<mapita[t]<<" ";
    }
    return 0;
}
