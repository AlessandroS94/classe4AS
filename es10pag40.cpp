#include <iostream>

using namespace std;

int numeriPerfetti(int n);

int main()
{
    int numero,numero2;
    cout << "NUMERI PERFETTI" << endl;
    // utente inserisce 9
    cin >> numero;
    numero2 = numeriPerfetti(numero);

    cout << numero2 << endl;
    return 0;
}

int numeriPerfetti(int n)
{
    int sum = 0;
    int counter = 0;
    for (int number = 2; number < n; number++) {
        for (int y = 1; y < number; y++) {
           
            if (!(number % y)) {
                sum += y;
                }   
        }
        if (sum == number)
            counter= counter+1;  
        sum = 0;
    }
    return counter;

}