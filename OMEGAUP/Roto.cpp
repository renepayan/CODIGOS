#include <bits/stdtr1c++.h>
using namespace std;
int main(){
	string entrada;
	vector<char>parte1,parte2;
	getline(cin,entrada);
	parte1.resize(entrada.length()+2);
	parte2.resize(entrada.length()+2);
	int sal = 0,sal2 = 0,posicion = 0;
	bool direccion = true;
	while(posicion<entrada.length()){
        if(entrada[posicion] == '[' or entrada[posicion] == ']' ){
            if(entrada[posicion]==']'){
                direccion=true;
			}else{
                direccion=false;
			}
            posicion++;
		}else{
            if(direccion){
                for(int i=posicion;posicion<entrada.length() and entrada[posicion]!='[' and entrada[posicion]!=']';i++){
                    parte2[sal]=entrada[i];
                    posicion++;
                    sal++;
                }
            }else{
                int d=posicion;
                for(int i=0;d<entrada.length() and entrada[d]!='[' and entrada[d]!=']';i++){
                    d++;
                }
                for(int i=d-1;i>=posicion;i--){
                    parte1[sal2]=entrada[i];
                    sal2++;
                }
                posicion=d;
            }
        }
    }
	for(int i=sal2;i>=0;i--){
		if(parte1[i]!='\000'){
            cout<<parte1[i];
        }
	}
	for(int i=0;i<sal;i++){
        cout<<parte2[i];
	}
	return 0;
}
