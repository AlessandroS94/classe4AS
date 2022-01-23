#include <iostream>
#include <string>

using namespace std;

class Libreria
{
private:
    int numeroLibri;
    int mensole;
    string colore;
    void setNumeroLibri(int libri);
    void setMensole(int mensole);
    void setColore(string colore);

public:
    void getNumeroLibri();
    void getMensole();
    void getColore();
    int calcolaMediaLibriMensola();
    Libreria();
    Libreria(int numeroLibri, int mensole, string colore);
    ~Libreria();
};

Libreria::Libreria()
{
    numeroLibri = 35;
    mensole = 5;
    colore = "Bianca";
}
Libreria::Libreria(int numeroLibriVal, int mensoleVal, string coloreVal)
{
    setNumeroLibri(numeroLibriVal);
    setMensole(mensoleVal);
    setColore(coloreVal);
}
void Libreria::setNumeroLibri(int libri)
{
    if (libri)
    {
        numeroLibri = libri;
    }
    else
    {
        numeroLibri = 100;
    }
}
void Libreria::setMensole(int mensole)
{
    if (mensole)
    {
        mensole = mensole;
    }
    else
    {
        mensole = 10;
    }
}
void Libreria::setColore(string colore)
{
    if (!colore.empty())
    {
        colore = colore;
    }
    else
    {
        colore = "rosso";
    }
}
void Libreria::getMensole() { cout << mensole << endl; }

void Libreria::getColore() { cout << colore << endl; }

int Libreria::calcolaMediaLibriMensola()
{
    return (numeroLibri / mensole);
}
void Libreria::getNumeroLibri()
{
    cout << numeroLibri << endl;
}
Libreria::~Libreria()
{
}

int main()
{
    Libreria libreria;
    cout << "Libri per mensola: \t" << libreria.calcolaMediaLibriMensola() << "\n";
    libreria.getColore();
    libreria.getNumeroLibri();
    libreria.getMensole();
    Libreria libreria2;
}
