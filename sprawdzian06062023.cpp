// sprawdzian06062023.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

ifstream plik("bin.txt");
ofstream wynik("licz5.txt");
ofstream wynik2("sum5.txt");
ofstream wynik3("odp.txt");
ofstream wynik4("licz53.txt");

string dec2quin(int dec)
{
    int a = 0;
    string quinar = "";
    while (dec > 0)
    {
        a = dec % 5;
        quinar.insert(0, to_string(a));
        dec /= 5;
    }
    return quinar;
}

int main()
{
    //zadanie 1.1:
    string binar;
    int decim;
    string quinar;
    for (int i = 0; i < 100; i++)
    {
        plik >> binar;
        decim = stoi(binar, nullptr, 2);
        quinar = dec2quin(decim);
        //cout << binar << "\t" << decim << "\t" << quinar << endl;
        wynik << quinar << endl;
    }
    plik.close();
    wynik.close();
    //zadanie 1.2:
    plik.open("licz5.txt");
    string quin1;
    string quin2;
    int dec1;
    int dec2;
    int suma;
    string sumaquin;
    for (int i = 0; i < 100; i+=2)
    {
        plik >> quin1;
        plik >> quin2;
        dec1 = stoi(quin1, nullptr, 5);
        dec2 = stoi(quin2, nullptr, 5);
        suma = dec1 + dec2;
        sumaquin = dec2quin(suma);
        wynik2 << quin1 << ";" << quin2 << ";" << sumaquin << endl;
    }
    plik.close();
    wynik2.close();
    //zadanie 1.3:
    plik.open("licz5.txt");
    string liczba5;
    string minliczba;
    int min = 0;
    int n = 0;
    bool spr;
    for (int i = 0; i < 100; i++) //sprawdzamy jak jest najmniejsza liczba znaków
    {
        plik >> liczba5;
        n = 0;
        for (int i = 0; i < 5; i++)
        {
            spr = false;
            for (int j = 0; j < liczba5.length(); j++)
            {
                if (int(liczba5[j]-48) == i) spr = true;
            }
            if (spr == true) n++;
        }
        if (min == 0) min = n;
        else if (n <= min) min = n;
    }
    plik.close();
    plik.open("licz5.txt");
    for (int i = 0; i < 100; i++) //wypisujemy liczby o najmniejszej liczbie znaków
    {
        plik >> liczba5;
        n = 0;
        for (int i = 0; i < 5; i++)
        {
            spr = false;
            for (int j = 0; j < liczba5.length(); j++)
            {
                if (int(liczba5[j] - 48) == i) spr = true;
            }
            if (spr == true) n++;
        }
        if (n == min)
        {
            wynik3 << liczba5 << "\t" << stoi(liczba5, nullptr, 5) << endl;
        }
    }
    plik.close();
    wynik3.close();
    //zadanie 1.4:
    plik.open("licz5.txt");
    for (int i = 0; i < 100; i++)
    {
        plik >> liczba5;
        n = 0;
        for (int i = 0; i < 5; i++)
        {
            spr = false;
            for (int j = 0; j < liczba5.length(); j++)
            {
                if (int(liczba5[j] - 48) == i) spr = true;
            }
            if (spr == true) n++;
        }
        if (n == 3)
        {
            wynik4 << liczba5 << endl;
        }
    }
    plik.close();
    wynik4.close();
    //sortowanie pliku "licz53.txt" za pomocą wektora
    plik.open("licz53.txt");
    vector<int> numery;
    int numer;
    while (plik >> numer) {
        numery.push_back(numer);
    }
    plik.close();
    sort(numery.begin(), numery.end());
    wynik4.open("licz53.txt");
    for (const auto& numer : numery) {
        wynik4 << numer << endl;
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
