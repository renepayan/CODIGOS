#include <bits/stdtr1c++.h>

using namespace std;
struct nodo{
    int hijos[28];
    bool fin;
    int cuantos = 0;
};
vector<nodo>arbol;
int m = 1;
void add(string word){
    int pos = 1;
    for(int i=0;i<word.size();i++){
        int l = word[i]-'a';
        if(!arbol[pos].hijos[l])arbol[pos].hijos[l]=++m;
        arbol[pos].cuantos++;
        pos=arbol[pos].hijos[l];
    }
    arbol[pos].cuantos++;
    arbol[pos].fin = true;
}
int find(string word){
    int pos = 1;
    for(int i=0;i<word.size();i++){
        int l = word[i]- 'a';
        if(i==word.size()-1)return arbol[arbol[pos].hijos[l]].cuantos;
        pos = arbol[pos].hijos[l];
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,q;
    cin>>n;
    string entrada;
    arbol.resize(100002);
    for(int i=1;i<=n;i++){
        cin>>entrada;
        add(entrada);
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>entrada;
        cout<<find(entrada)<<'\n';
    }
    return 0;
}
