#include <iostream>
#include <string>

using namespace std;

class Casa
{
private:
    int numeroFinestre;
    int stanze;
    string colore;
    void setNumeroFinestre(int finestre);
    void setStanze(int stanze);
    void setColore(string colore);

public:
    void getNumeroFinestre();
    void getStanze();
    void getColore();
    int calcololaMediaFinestreStanze();
    Casa();
    Casa(int numeroFinestre, int stanze, string colore);
    ~Casa();
};

Casa::Casa()
{
    numeroFinestre = 10;
    stanze = 10;
    colore = "giallo";
}
Casa::Casa(int numeroFinestreVal, int stanzeVal, string coloreVal)
{
    setNumeroFinestre(numeroFinestreVal);
    setStanze(stanzeVal);
    setColore(coloreVal);
}
void Casa::setNumeroFinestre(int finestre)
{
    if (finestre)
    {
        numeroFinestre = finestre;
    }
    else
    {
        numeroFinestre = 10;
    }
}
void Casa::setStanze(int finestre)
{
    if (stanze)
    {
        stanze = finestre;
    }
    else
    {
        stanze = 10;
    }
}
void Casa::setColore(string colore)
{
    if (!colore.empty())
    {
        colore = colore;
    }
    else
    {
        colore = "giallo";
    }
}
void Casa::getStanze() { cout << stanze << endl; }

void Casa::getColore() { cout << colore << endl; }

int Casa::calcololaMediaFinestreStanze()
{
    return (numeroFinestre / stanze);
}
void Casa::getNumeroFinestre()
{
    cout << numeroFinestre << endl;
}
Casa::~Casa()
{
}

int main()
{
    Casa casa;
    cout << "Finestre per stanza: \t" << casa.calcololaMediaFinestreStanze() << "\n";
    casa.getColore();
    casa.getNumeroFinestre();
    casa.getStanze();
    Casa casa2;
}