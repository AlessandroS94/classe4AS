#include <iostream>

#include <string>

using namespace std;

class Regione

{

private:
    int numeroAbitanti;

    int città;

    string province;

    void setNumeroAbitanti(int abitanti);

    void setCittà(int città);

    void setProvince(string sigla);

public:
    void getNumeroAbitanti();

    void getCittà();

    void getProvince();

    int calcolaMediaAbitantiCittà();

    Regione();

    Regione(int numeroAbitanti, int città, string province);

    ~Regione();
};

Regione::Regione()

{

    numeroAbitanti = 15000;

    città = 5;
}

Regione::Regione(int numeroAbitantiVal, int cittàVal, string provinceVal)

{

    setNumeroAbitanti(numeroAbitantiVal);

    setCittà(cittàVal);

    setProvince(provinceVal);
}

void Regione::setNumeroAbitanti(int abitanti)

{

    if (abitanti)

    {

        numeroAbitanti = abitanti;
    }

    else

    {

        numeroAbitanti = 15000;
    }
}

void Regione::setCittà(int città)

{

    if (città)

    {

        città = città;
    }

    else

    {

        città = 5;
    }
}

void Regione::setProvince(string sigla)

{

    if (!sigla.empty())

    {

        province = sigla;
    }
}

void Regione::getCittà() { cout << città << endl; }

void Regione::getProvince() { cout << province << endl; }

int Regione::calcolaMediaAbitantiCittà()

{

    return (numeroAbitanti / città);
}

void Regione::getNumeroAbitanti()

{

    cout << numeroAbitanti << endl;
}

Regione::~Regione()

{
}

int main()

{

    Regione regione;

    cout << "Abitanti per città: \t " << regione.calcolaMediaAbitantiCittà() << " \n ";

    regione.getNumeroAbitanti();

    regione.getCittà();

    Regione regione2;
}
