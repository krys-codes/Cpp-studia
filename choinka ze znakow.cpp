#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int liczba_poziomow,liczba_spacji,liczba_znakow,i,j,k;
    string znak;
    cout <<"==========[Progam do rysowania choinki z wybranego znaku]=========="<< endl;
    cout <<"\n1. Podaj liczbe poziomow choinki (1-40): "; cin >> liczba_poziomow;
    if ((liczba_poziomow <=0) || (liczba_poziomow > 40) == true)
    {   
        cout <<"\nWprowadzono zle dane. Program zostanie zamkniety!";
        getch();
        return EXIT_SUCCESS;
    }
    cout <<"\n2. Podaj znak, z ktorego powstanie choinka: "; 
    cin>>znak;
    cout<<endl;
    liczba_spacji = liczba_poziomow;
    liczba_znakow = 1;
    cout << endl;
    for (i=1;i<=liczba_poziomow;i++)
    { 
        for (j=1; j <= liczba_spacji; j++)
        {
            cout <<" ";
        }
        for (k = 1; k <= liczba_znakow; k++)
        {
            cout <<znak;
        }
        liczba_spacji = liczba_spacji -1;
        liczba_znakow = liczba_znakow + 2;
        cout << endl;
    }    
    getch();
}
