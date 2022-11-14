#include <iostream>
#include <string>
using namespace std;

class Games
{
private:
    string title;
    string plataform;
    int year;
    int hoursPlayed;

public:
    void showVideoGame();
};

void Games::showVideoGame()
{

    cout << "----Juegos----" << endl;
    cout << "-> Titulo: " << title << endl;
    cout << "-> Plataforma: " << plataform << endl;
    cout << "-> Anio de publicacion: " << year << endl;
}
