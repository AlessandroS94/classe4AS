#include <iostream>
#include <string>

using namespace std;

class Film
{
private:
    int numeroPersonaggi;
    int scene;
    string nome;
    void setNumeroPersonaggi(int personaggi);
    void setScene(int scene);
    void setNome(string nome);

public:
    void getNumeroPersonaggi();
    void getScene();
    void getNome();
    int calcolaMediaPersonaggiScene();
    Film();
    Film(int numeroPersonaggi, int scene, string nome);
    ~Film();
};

Film::Film()
{
    numeroPersonaggi = 20;
    scene = 15;
    nome = "Espiazione";
}
Film::Film(int numeroPersonaggiVal, int sceneVal, string nomeVal)
{
    setNumeroPersonaggi(numeroPersonaggiVal);
    setScene(sceneVal);
    setNome(nomeVal);
}
void Film::setNumeroPersonaggi(int personaggi)
{
    if (personaggi)
    {
        numeroPersonaggi = personaggi;
    }
    else
    {
        numeroPersonaggi = 20;
    }
}
void Film::setScene(int scene)
{
    if (scene)
    {
        scene = scene;
    }
    else
    {
        scene = 8;
    }
}
void Film::setNome(string espiazione)
{ //mancava l'empty
    if (!(espiazione.empty()))
    {
        nome = espiazione;
    }
    else
    {
        nome = "Espiazione";
    }
}
void Film::getScene() { cout << scene << endl; }

void Film::getNome() { cout << nome << endl; }

int Film::calcolaMediaPersonaggiScene()
{
    return (numeroPersonaggi / scene);
}
void Film::getNumeroPersonaggi()
{
    cout << numeroPersonaggi << endl;
}
Film::~Film()
{
}

int main()
{
    Film film;
    cout << "Personaggi per scene: \t" << film.calcolaMediaPersonaggiScene() << "\n";
    film.getNome();
    film.getNumeroPersonaggi();
    film.getScene();
    Film film2;
}
