#include <iostream>
#include <string>

using namespace std;

class Vivaio
{
private:
    int numeroPiante;
    int scaffali;
    string colore;
    void setNumeroPiante(int piante);
    void setScaffali(int scaffali);
    void setColore(string colore);

public:
    void getNumeroPiante();
    void getScaffali();
    void getColore();
    int calcolaMediaPianteScaffali();
    Vivaio();
    Vivaio(int numeroPiante, int scaffali, string colore);
    ~Vivaio();
};

Vivaio::Vivaio()
{
    numeroPiante = 100;
    scaffali = 10;
    colore = "Blu";
}
Vivaio::Vivaio(int numeroPianteVal, int scaffaliVal, string coloreVal)
{
    setNumeroPiante(numeroPianteVal);
    setScaffali(scaffaliVal);
    setColore(coloreVal);
}
void Vivaio::setNumeroPiante(int piante)
{
    if (piante)
    {
        numeroPiante = piante;
    }
    else
    {
        numeroPiante = 100;
    }
}
void Vivaio::setScaffali(int scaffali)
{
    if (scaffali)
    {
        scaffali = scaffali;
    }
    else
    {
        scaffali = 10;
    }
}
void Vivaio::setColore(string colore)
{
    if (!colore.empty())
    {
        colore = colore;
    }
    else
    {
        colore = "verde";
    }
}
void Vivaio::getScaffali() { cout << scaffali << endl; }

void Vivaio::getColore() { cout << colore << endl; }

int Vivaio::calcolaMediaPianteScaffali()
{
    return (numeroPiante / scaffali);
}
void Vivaio::getNumeroPiante()
{
    cout << numeroPiante << endl;
}
Vivaio::~Vivaio()
{
}

int main()
{
    Vivaio vivaio;
    cout << "Media piante per scaffale: \t" << vivaio.calcolaMediaPianteScaffali() << "\n";
    vivaio.getColore();
    vivaio.getNumeroPiante();
    vivaio.getScaffali();
    Vivaio vivaio2;
}
