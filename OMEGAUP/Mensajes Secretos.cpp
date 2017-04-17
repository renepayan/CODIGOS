#include <bits/stdtr1c++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string entrada,salida;
    stack<char>pila;
    getline(cin,entrada);
    int activos = 0;
    for(int i=0;i<entrada.length();i++){
        char a = entrada[i];
        if(a=='('){
            pila.push(a);
            activos++;
        }else if(a==')'){
            activos--;
            if(activos!=0){
                queue<char>segundo;
                while(!pila.empty()){
                    char b = pila.top();
                    pila.pop();
                    if(b!='('){
                        segundo.push(b);
                    }else{
                        break;
                    }
                }
                while(!segundo.empty()){
                    char b = segundo.front();
                    segundo.pop();
                    pila.push(b);
                }
            }else{
                while(!pila.empty()){
                    char b = pila.top();
                    pila.pop();
                    if(b!='('){
                        salida+=b;
                    }else{
                        break;
                    }
                }
            }
        }else{
            if(activos!=0){
                pila.push(a);
            }else{
                salida+=a;
            }
        }
    }
    cout<<salida;
    return 0;
}
