#include <bits/stdtr1c++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string temporal,temporal2;
    int n,m;
    cin>>n;
    map<string,int>mapita;
    vector< vector< int > >matriz;
    matriz.resize(n+2);
    for(int i=1;i<=n;i++){
        cin>>temporal;
        mapita[temporal] = i;
        matriz[i].resize(n+2);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>matriz[i][j];
        }
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>temporal>>temporal2;
        cout<<matriz[mapita[temporal]][mapita[temporal2]]<<'\n';
    }
    return 0;
}
