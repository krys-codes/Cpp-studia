#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

float calculateSquareArea(float a) {
    return a * a;
}

float square() {
    float a;
    cout << "Podaj dlugosc boku kwadratu (a): ";
    cin >> a;
    return calculateSquareArea(a);
}


float calculateRectangleArea(float a, float b) {
    return a * b;
}


float rectangle() {
    float a, b;
    cout << "Podaj dlugosc pierwszego boku prostokata (a): ";
    cin >> a;
    cout << "Podaj dlugosc drugiego boku prostokata (b): ";
    cin >> b;
    return calculateRectangleArea(a, b);

}

float calculateCircleArea(float r) {
    return 3.14 * r * r;
}



float circle() {
    float r;
    cout << "Podaj dlugosc promienia (r): ";
    cin >> r;
    return calculateCircleArea(r);
}


float calculateTriangleArea(float a, float h) {
    return 0.5 * a * h;
}



float triangle() {
    float a, b, c, h;
    cout << "Podaj dlugosc podstawy trojkata (a): ";
    cin >> a;
    cout << "Podaj dlugosc drugiego boku trojkata (b): ";
    cin >> b;
    cout << "Podaj dlugosc trzeciego boku trojkata (c): ";
    cin >> c;
    cout << "Podaj dlugosc wysokosci trojkata (h): ";
    cin >> h;
   return calculateTriangleArea(a, h);
}


void calculateFigureArea()  {
   int choice;
   int choice2;
   float area;

    cout << "Wybierz figure, aby obliczyc jej pole. Numer figury jest jej kolorem " << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Kolo" << endl;
    cout << "4. Trojkat" << endl;
    cout << "Twoj wybor: "<< endl;
    cin >> choice;
     while (choice < 1 || choice > 4) {
        cout << "Bledny wybor, podaj poprawny: "<<endl;
        cin >> choice;
    }
   
enum Figures
{
  Square = 1, 
  Rectangle = 2, 
  Circle = 3,
  Triangle = 4,
};    
    
enum Colors
{
  option1 = 1, 
  option2 = 2, 
  option3 = 3,
  option4 = 4,
  option5 = 5,
  option6 = 6,
  option7 = 7,
  option8 = 8,
};

 string figure;
 
switch(choice)
{
  case Square:
    figure = "kwadrat";
    break;
  case Rectangle:
     figure = "prostokat";
    break;
  case Circle:
    figure = "kolo";
    break;
      case Triangle:
    figure = "trojkat";
    break;
  default:
    cout << "Invalid Selection\n";
    break;
}


 string color;
    
    cout << "Wybierz kolor" << endl;
    cout << "1.czarny" << endl;
    cout << "2.rozowy" << endl;
    cout << "3.niebieski" << endl;
    cout << "4.czerwony" << endl;
    cout << "5.bialy" << endl;
    cout << "6.zielony" << endl;
    cout << "7.fioletowy" << endl;
    cout << "8.pomaranczowy" << endl;

   
    cin >> choice2;
    while (choice2 < 1 || choice2 > 8) {
        cout << "Bledny wybor, podaj poprawny: "<<endl;
        cin >> choice2;
    }
    
  

switch(choice2)
{
  case option1:
    color = "czarny";
    break;
  case option2:
     color = "rozowy";
    break;
  case option3:
    color = "niebieski";
    break;
    case option4:
    color = "czerwony";
    break;
    case option5:
    color = "bialy";
    break;
    case option6:
    color = "zielony";
    break;
    case option7:
    color = "fioletowy";
    break;
    case option8:
    color = "pomaranczowy";
    break;
  default:
    cout << "Invalid Selection\n";
    break;
}
    
     switch (choice) {
        case 1:
           // rectangle();
             cout << endl<< endl<< "figura to "<<  figure<< endl  << square() << endl << "Kolor "<< color << endl;
            break;
        case 2:
            cout << endl<< endl<< "figura to "<<  figure<< endl  << rectangle() << endl << "Kolor "<< color << endl;
            break;
        case 3:
             cout << endl<< endl<< "figura to "<<  figure<< endl  << circle() << endl << "Kolor "<< color << endl;
         break;
        case 4:
              cout << endl<< endl<< "figura to "<<  figure<< endl << triangle() << endl << "Kolor "<< color << endl;
            break;
             default:
    cout << "Invalid Selection\n";
    break;
    }
}


int main() {
    calculateFigureArea();
    
    cout << endl;
    return 0;
}
