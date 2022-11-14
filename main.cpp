#include <iostream>
using namespace std;
#include "videogame.h"

int main()
{
    /* Videogame videojuego1(string, string, int, int);
    Videogame videojuego2(string, string, int, int);
    Videogame videojuego3(string, string, int, int);
    Videogame videojuego4(string, string, int, int);
    Videogame videojuego5(string, string, int, int);

    string title;
    string platform;
    int year;
    int hours; */

    int op;

    Videogame videojuego1("God of War", "PlayStation", 2020, 4);
    Videogame videojuego2("Just Dance", "Wii", 2022, 3);
    Videogame videojuego3("COD", "PlayStation", 2021, 6);
    Videogame videojuego4("Super Mario Bros", "nskjha", 2021, 2);
    Videogame videojuego5("Mortal Kombat", "Play Station", 2022, 6);

    do
    {
        cout << "--------MENU----------" << endl;
        cout << "Escriba una opcion" << endl;
        cout << "1. Ingresar Videjuego " << endl;
        cout << "2. Mostrar Videojuegos " << endl;
        cout << "3. Agregar horas de juego " << endl;
        cout << "4. Salir" << endl;
        cin >> op;
        switch (op)
        {
        case 1:

            break;
        case 4:
            break;
        default:
            cout << "Opcion invalida!" << endl;
            break;
        }
    } while (op != 4);

    return 0;
}