#include <iostream>
#include <string>

using namespace std;

class Armadio{
    private: 
    int numeroVestiti;
    int ante;
    string nome;
    void setnumeroVestiti (int vestiti);
    void setAnte (int numAnte);
    void setCassetti (int numCassetti);
    void setNome (string nome);
    public:
    void getnumeroVestiti();
    void getAnte();
    void getCassetti();
    int calcolamediavestitiante();

    Armadio();
    Armadio (int numeroVestiti,int ante,string nome);
    ~Armadio();

};

Armadio::Armadio(){
    numeroVestiti = 60;
    ante = 6;
    nome = "Programma in C++";
}

Armadio::Armadio(int numeroVestitiVol,int anteVol,string nome){
    setnumeroVestiti(numeroVestitiVol);
    setAnte(anteVol);
    setNome(nome);
}

void Armadio::setnumeroVestiti(int vestiti){
    if(vestiti){
        numeroVestiti = vestiti;
    }
    else 
    numeroVestiti = 60;
}

void Armadio::setAnte(int numAnte){
    if(numAnte){
        ante = numAnte;
    }
    else 
    ante = 6;
}
void Armadio::setCassetti(int numCassetti){
    if(numCassetti){
        ante = numCassetti;
    }
    else 
    numeroVestiti = 6;
}

void Armadio::setNome(string nome){
    if(!nome.empty()){
        nome = nome;
    }
    else 
        nome = "Programma in C++";
}

void Armadio::getAnte() { cout << ante << endl; }

void Armadio::getCassetti() { cout << nome << endl; }

int Armadio::calcolamediavestitiante(){
    return (numeroVestiti/ante);
}


Armadio::~Armadio()
{
}

int main()
{
    Armadio armadio;
    cout << "Vestiti per anta: \t" << armadio.calcolamediavestitiante() << "\n";
    armadio.getAnte();
}
 
