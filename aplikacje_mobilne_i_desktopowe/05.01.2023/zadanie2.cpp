// Kartk�wka 
//
//
// Polecenie:
// Napisz program, kt�ry wygeneruje liczby z zakresu [5,30] dla dwuwymiarowej tablicy o 5 wierszach i 5 kolumnach. 
// Wy�wietl warto�ci tej tablicy w postaci tabeli. Wyznaczi wy�wietlwarto��  maksymaln�  znajduj�c�  si�  na  g��wnej  przek�tnej.  
// Sprawd�  czy  warto��  ta  jest podzielna przez 2, 3 czy 5 i wy�wietl odpowiedni komunikat.

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    int tab[5][5], i, j, num;

    srand(time(NULL));
    num = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            tab[i][j] = rand() % 26 + 5;
            if (i == j && tab[i][j] > num) {
                num = tab[i][j];
            }
            std::cout << tab[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\nMaksymalna wartosc na glownej przekatnej: " << num << "\n";
    if (num % 2 == 0) {
        std::cout << "Wartosc ta jest podzielna przez 2\n";
    }
    if (num % 3 == 0) {
        std::cout << "Wartosc ta jest podzielna przez 3\n";
    }
    if (num % 5 == 0) {
        std::cout << "Wartosc ta jest podzielna przez 5\n";
    }

    return 0;
}