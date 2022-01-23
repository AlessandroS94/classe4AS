#include <iostream>
#include <string>

using namespace std;

class Borsa
{
private:
    int numeroOggetti;
    int scompartimenti;
    string marca;
    void setNumeroOggetti(int oggetti);
    void setScompartimenti(int scompartimenti);
    void setMarca(string marca);

public:
    void getNumeroOggetti();
    void getScompartimenti();
    void getMarca();
    int calcolaMediaOggettiScompartimenti();
    Borsa();
    Borsa(int numeroOggetti, int scompartimenti, string marca);
    ~Borsa();
};

Borsa::Borsa()
{
    numeroOggetti = 6;
    scompartimenti = 3;
    marca = "Chanel";
}
Borsa::Borsa(int numeroOggettiVal, int scompartimentiVal, string marcaVal)
{
    setNumeroOggetti(numeroOggettiVal);
    setScompartimenti(scompartimentiVal);
    setMarca(marcaVal);
}
void Borsa::setNumeroOggetti(int oggetti)
{
    if (oggetti)
    {
        numeroOggetti = oggetti;
    }
    else
    {
        numeroOggetti = 100;
    }
}
void Borsa::setScompartimenti(int scompartimenti)
{
    if (scompartimenti)
    {
        scompartimenti = scompartimenti;
    }
    else
    {
        scompartimenti = 10;
    }
}
void Borsa::setMarca(string marca)
{
    if (!marca.empty())
    {
        marca = marca;
    }
    else
    {
        marca = "Christian Dior";
    }
}
void Borsa::getScompartimenti() { cout << scompartimenti << endl; }

void Borsa::getMarca() { cout << marca << endl; }

int Borsa::calcolaMediaOggettiScompartimenti()
{
    return (numeroOggetti / scompartimenti);
}
void Borsa::getNumeroOggetti()
{
    cout << numeroOggetti << endl;
}
Borsa::~Borsa()
{
}

int main()
{
    Borsa borsa;
    cout << "Oggetti per scompartimenti: \t" << borsa.calcolaMediaOggettiScompartimenti() << "\n";
    borsa.getMarca();
    borsa.getNumeroOggetti();
    borsa.getScompartimenti();
    Borsa borsa2;
}