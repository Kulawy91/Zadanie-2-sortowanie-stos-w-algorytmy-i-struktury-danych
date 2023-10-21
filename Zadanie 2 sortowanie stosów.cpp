#include <iostream>
#include <iostream>
#include <locale.h> //włączenie lokalnych znaków diakrytycznych
#include <list>


void sortowanie_drukowanie(int tablica[], int size) { //sortowanie wewnątrz tablicy
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (tablica[i] > tablica[j]) {
                int temp = tablica[i];
                tablica[i] = tablica[j];
                tablica[j] = temp;
              
            }
        }
    }

    for (int i = 0; i < size; i++) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int const x{ 5 }; //rozmiar pierwszej tablicy
    int tablica_1[x] = { 1, 9, 5, 8, 3 }; //inicjalizacja tablicy
        std::cout << "Tablica pierwsza zawiera: "; //drukowanie elementów
        sortowanie_drukowanie(tablica_1, x);
    int const y{ 5 }; //analogiczne działanie
    int tablica_2[y] = { 2, 3, 4, 5, 0 };
        std::cout << "Tablica druga zawiera: ";
        sortowanie_drukowanie(tablica_2, y);

   int const z=x+y; //rozmiar 3 tablicy
   int tablica_3[z]; //inicjalizacja 3 tablicy
       for (int i = 0; i < x; i++) { //wypisywanie elementów z pierwszej tablicy do 3
           tablica_3[i] = tablica_1[i];
       }

       for (int i = 0; i < y; i++) { //wypisywanie elementów z drugiej tablicy do 3
           tablica_3[x + i] = tablica_2[i];
       }
       std::cout << "Tablica trzecia zawiera elementy nieposortowane: ";
       for (int i = 0; i < z; i++) {
           std::cout << tablica_3[i] << " ";
       }
       std::cout << std::endl;
       std::cout << "Tablica trzecia zawiera elementy posortowane: ";
       sortowanie_drukowanie(tablica_3, z); //sortowanie 3 tablicy

       return 0;
    }




