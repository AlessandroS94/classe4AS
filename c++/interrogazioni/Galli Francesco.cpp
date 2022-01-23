#include <iostream>
#include <string>


// metodo del distruttore
//;

using namespace std;

class Scuola
{
private:
    int numeroAlunni;
    int classi;
    string nome;
    void setNumeroAlunni(int alunni);
    void setClassi(int classi);
    void setNome(string nome);

public:
    void getNumeroAlunni();
    void getClassi();
    void getNome();
    int calcoloMediaAlunniClassi();
    Scuola();
    Scuola(int numeroAlunni, int classi, string nome);
    ~Scuola();
};

Scuola::Scuola()
{
    numeroAlunni = 100;
    classi = 10;
    nome = "Istituto Omnicomprensivo Leonardo da Vinci";
}
Scuola::Scuola(int numeroAlunniVal, int classiVal, string nomeVal)
{
    setNumeroAlunni(numeroAlunniVal);
    setClassi(classiVal);
    setNome(nomeVal);
}

void Scuola::setNumeroAlunni(int numeroAlunniVal)
{
    if (numeroAlunniVal)
    {
        numeroAlunni = numeroAlunniVal;
    }
    else
    {
        numeroAlunni = 250;
    }
}

void Scuola::setClassi(int classiVol)
{
    if (classi)
    {
        classi = classiVol;
    }
    else
    {
        classi = 20;
    }
}
void Scuola::setNome(string nome)
{
    if (!nome.empty())
    {
        nome = nome;
    }
    else
    {
        nome = "Istituto Omnicomprensivo Leonardo da Vinci";
    }
}

void Scuola::getClassi() { cout << classi << endl; }

void Scuola::getNome() { cout << nome << endl; }

int Scuola::calcoloMediaAlunniClassi()
{
    return (numeroAlunni / classi);
}
void Scuola::getNumeroAlunni()
{
    cout << numeroAlunni << endl;
} 
Scuola::~Scuola()
{
}

int main()
{
 Scuola scuola;
    cout << "Alunni per classe: \t" << scuola.calcoloMediaAlunniClassi() << "\n";
    scuola.getNome();
    scuola.getNumeroAlunni();
    scuola.getClassi();
 Scuola scuola2;
}