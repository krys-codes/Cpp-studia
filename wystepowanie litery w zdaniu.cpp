#include <iostream>
#include <conio.h>
using namespace std;
int liczonalitera( string tekst, string litera )
{
    int ileRazy = 0;
    for( int x = 0; x < tekst.length(); x++ ) 
    {
        int y = 0; 
        if( litera[ y ] == tekst[ x ] ) 
        {
            for( int z = x; litera[ y ] == tekst[ z ]; z++ ) 
            {
                litera[ y++ ];
                if( litera[ y ] == 0 ) ileRazy++; 
               
            }
        }
    }
    return ileRazy;
}

int main()


    {
    
	
    printf("Witaj!");
printf (" \n");
printf (" \n");
printf("Program podaje ilosc wybranej litery w zdaniu ");
printf (" \n");
printf (" \n");
    string tekst, litera;
    cout << "Podaj dowolny tekst: ";
    getline( cin, tekst );
    cout << "Podaj litere ktorej ilosc chcesz sprawdzic ";
    cin >> litera;
    cout << " Podana litera wystepuje w tekscie  " << liczonalitera( tekst, litera ) << " razy";
    getch();
} 

