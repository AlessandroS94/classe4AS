#include <iostream>

using namespace std;

int main(){
    int vettore[10];
    int max = 10;
    int numero;
    cout<<"INSERISCI UN ARRAY DI NUMERI NON NEGATIVI DI MAX 10 ELEMENTI\n";
    for(int i =0; i<10;i++){
        cout<<"Inserisci il "<<i<<" numero: \t";
        cin >> numero;
        vettore[i] = numero;
        if (vettore[i]<0)
        {
            max =i+1;
            i = 10;
            
        }
    }
    
    for(int i =0;i<max-1;i++){
        vettore[i] =(vettore[i-1] + vettore[i] +  vettore[i+1])/3;
    }

    cout<<"Il vettore è pari a :\n";
    for(int i = 0; i < max; i++)
    {
        cout << vettore[i]<<"\n";
    }
    cout<<"FINE"<<endl;
    


}