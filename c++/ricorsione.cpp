#include <iostream>

using namespace std;

int pot_ricorsivo_semplice(int base, int esp);

int main(){
    cout<<" La potenza di "<<5<<" alla ^3";
    cout<<" è \n"<<pot_ricorsivo_semplice(5, 3)<<endl;
    return 0;
}

int pot_ricorsivo_semplice(int base, int esp)
{
     if (esp == 0)
          return 1;
     if (esp == 1)
          return base;
 
     return base*pot_ricorsivo_semplice(base, esp-1);
}