#include <iostream>

using namespace std;

int main(){
    int myArray2D [2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    for(int i =0;i<2;i++)
        for (int j = 0; j < 4; j++)
        {
            cout<<"Numero "<<j<<" : "<<myArray2D[i][j]<<endl;

        }
    return 0;
}