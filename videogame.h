#include <iostream>
using namespace std;
class Videogame {

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



    };
Videogame :: Videogame()
{

}

Videogame :: Videogame(string _title, string _platform,int _year, int _hoursplayed)
{
    setTitle(_title);
    setPlatform(_platform);
    setYear(_year);
    setHoursPlayed(_hoursplayed);
};

void Videogame :: setTitle(string title)
{
   title = title;
};
string Videogame :: getTitle()
{
    return title;
};
void Videogame :: setPlatform(string Platform)
{
    platform = platform;
};
string Videogame :: getPlatform()
{
    return platform;
};
void Videogame :: setYear(int year)
{
    year = year;
};
int Videogame :: getYear(){
    return year;
};
void Videogame :: setHoursPlayed(int hours)
{
    hoursplayed = hours;
};
int Videogame :: getHoursPlayed()
{
    return hoursplayed;
}