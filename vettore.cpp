#include <iostream>

using namespace std;
const int NUMVETT = 4; //costante dettare la grandezza del vettore

int trovaMax(int vettore[]);
int main(void){
    int vettoreInteri[NUMVETT]; // dichiarazione dell'array
    for(int i =0; i< NUMVETT; i++){
        cout<<"Inseriscio il valore ["<<i<<"] del vettore: \t";
        cin>>vettoreInteri[i];
    }
    int max = trovaMax(vettoreInteri);
    cout << "il vettore ordinato è pari a: "<<max<<endl;
    return 0;
}

int trovaMax(int vettore[]){
    int max=vettore[0];
    for(int i=1; i<NUMVETT;i++){
        if (vettore[i]>max)
            max = vettore[i];
    }
    return max;
}
