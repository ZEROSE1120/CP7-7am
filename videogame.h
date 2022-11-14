#include <iostream>
using namespace std;
class Videogame
{

private:
    string title;
    string platform;
    int year;
    int hoursplayed;

public:
    Videogame();
    Videogame(string, string, int, int);
    string getTitle();
    void setTitle(string title);
    string getPlatform();
    void setPlatform(string platform);
    int getYear();
    void setYear(int year);
    int getHoursPlayed();
    void setHoursPlayed(int hours);
    void showVideoGame();
};
Videogame ::Videogame()
{
}

Videogame ::Videogame(string _title, string _platform, int _year, int _hoursplayed)
{
    this->title = _title;
    this->platform = _platform;
    this->year = _year;
    this->hoursplayed = _hoursplayed;
};

void Videogame::showVideoGame()
{

    cout << "----Juegos----" << endl;
    cout << "-> Titulo: " << title << endl;
    cout << "-> Plataforma: " << platform << endl;
    cout << "-> Anio de publicacion: " << year << endl;
    cout << "-> Horas: " << hoursplayed << endl;
}
