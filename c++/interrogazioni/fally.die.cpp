#include <iostream>
#include <string>

using namespace std;

class Armadio
{
private:
    int numeroVestiti;
    int cassetti;
    int pantaloni;
    string nome;
    void setnumerovestiti(int vestiti);
    void setcassetti(int numcassetti);
    void setpantaloni(int numpantaloni);
    void setnome(string nome);

public:
    void getnumerovestiti();
    void getcassetti();
    void getPantaloni();
    int calcolamediavestiticassetti();

    Armadio();
    Armadio(int numeroVestiti, int cassetti, string nome);
    Armadio();
};
Armadio::Armadio()
{
    numeroVestiti = 8;
    cassetti = 4;
    nome = "Programma in C++";
}

Armadio::Armadio(int numerovestitival, int cassettival, string nome){
    setnumerovestiti(numerovestitival);
setcassetti(cassettival);
setnome(nome);
}

void Armadio::setnumerovestiti(int vestiti)
{
    if (vestiti)
    {
        numeroVestiti = vestiti;
    }
    else
    {
        numeroVestiti = 8;
    }
}
void Armadio:: setcassetti(int numcassetti)
{
    if (numcassetti)
    {
        cassetti = numcassetti;
    }
    else
    {
        cassetti = 4;
    }
}
void Armadio:: setpantaloni(int numpantaloni)
{
    if (numpantaloni)
    {
        pantaloni = numpantaloni;
    }
    else
    {
        pantaloni = 4;
    }
}
void Armadio:: setnome(string nome)
{
    if (!nome.empty())
    {
        nome = nome;
    }
    else
    {
        nome = "programma in C++";
    }
}
void Armadio::getcassetti() { cout << cassetti << endl; }

void Armadio::getPantaloni() { cout << pantaloni << endl; }

int Armadio::calcolamediavestiticassetti()
{
    return (numeroVestiti / cassetti);
}
void Armadio ::getnumerovestiti()
{
    cout << numeroVestiti << endl;
}
Armadio::Armadio()
{
}

int main()
{
    Armadio armadio;
    cout << "vestiti per cassetto:\t" << armadio.calcolamediavestiticassetti() << "\n";
    armadio.getnumerovestiti();
    armadio.getcassetti();
}