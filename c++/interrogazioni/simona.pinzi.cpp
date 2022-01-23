#include <iostream>
#include <string>

using namespace std;

class Albergo
{
private:
    int numeroStanze;
    int persone;
    string nome;
    void setNumeroStanze(int stanze);
    void setPersone(int persone);
    void setNome(string nome);

public:
    void getNumeroStanze();
    void getPersone();
    void getNome();
    int calcolaMediaStanzePersone();
    Albergo();
    Albergo(int numeroStanze, int persone, string nome);
    ~Albergo();
};

Albergo::Albergo()
{
    numeroStanze = 50;
    persone = 3;
    nome = "albergo toscana";
}
Albergo::Albergo(int numeroStanzeVal, int personeVal, string nomeVal)
{
    setNumeroStanze(numeroStanzeVal);
    setPersone(personeVal);
    setNome(nomeVal);
}
void Albergo::setNumeroStanze(int stanze)
{
    if (stanze)
    {
        numeroStanze = stanze;
    }
    else
    {
        numeroStanze = 50;
    }
}
void Albergo::setPersone(int persone)
{
    if (persone)
    {
        persone = persone;
    }
    else
    {
        persone = 3;
    }
}
void Albergo::setNome(string nome)
{
    if (!nome.empty())
    {
        nome = nome;
    }
    else
    {
        nome = "Albergo Toscana";
    }
}
void Albergo::getPersone() { cout << persone << endl; }

void Albergo::getNome() { cout << nome << endl; }

int Albergo::calcolaMediaStanzePersone()
{
    return (numeroStanze / persone);
}
void Albergo::getNumeroStanze()
{
    cout << numeroStanze << endl;
}
Albergo::~Albergo()
{
}

int main()
{
    Albergo albergo;
    cout << "Persone per stanza: \t" << albergo.calcolaMediaStanzePersone() << "\n";
    albergo.getNome();
    albergo.getNumeroStanze();
    albergo.getPersone();
    Albergo albergo2;
}

