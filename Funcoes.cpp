#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
#include "Classes.h"



//MÉTODOS PARA CANVAS
int Canvas::rec_tamanho()
{
      tela[0] = 2000;
      tela[1] = 2500;
    return tela[1];
}

string Canvas::rec_poligono()
{
       nome_poli[0] = "Retangulo";
       nome_poli[1] = "Circulo";
       nome_poli[2] = "Triangulo";
       nome_poli[3] = "Losango";

    return nome_poli[3];
}

void Canvas::exibir_canvas()
{    int i;

       for(i=0; i<4; i++)
        {
         cout << nome_poli[i] << endl;
        }
}



//MÉTODOS PARA POLÍGONO
int Poligono::cal_ret_area()
{

}

int Poligono::ret_centro()
{   int i;

        cout << "\nEntre com coordenadas (x,y) do centro:" << endl;

        for(i=0; i<=1; i++)
        {
         cin >> centro[i];
        }

        teste = centro[1];

        cout << "\nEntre com a coordenada Z:" << endl;
        cin >> z_Index;

    return *centro;
}

char Poligono::ret_cor()
{
    cout << "\nEntre com a cor do poligono:" << endl;
    cin >> cor;

    return *cor;
}



//MÉTODOS PARA RETANGULO
void Retangulo::ret_dados()
{
    cout << "\nEntre com a base e a altura:" << endl;
    cin >> base >> altura;
}

int Retangulo::cal_ret_area()
{
    return base*altura;
}

int Retangulo::cal_ret_perim()
{
    return 2*(base+altura);
}



//MÉTODOS PARA CÍRCULO
void Circulo::ret_dados()
{
    cout << "\nEntre com o raio:" << endl;
    cin >> raio;
}

int Circulo::cal_ret_area()
{
    return M_PI * pow(raio, 2);
}

int Circulo::cal_ret_perim()
{
    return 2 * M_PI * raio;
}



//MÉTODOS PARA TRIÂNGULO
void Triangulo::ret_dados()
{
    cout << "\nEntre com a base e a altura:" << endl;
    cin >> base >> altura;
}

int Triangulo::cal_ret_area()
{
    return base*altura/2;
}

int Triangulo::cal_ret_perim()
{   int x;

    x = pow(base/2, 2) + pow(altura, 2);

    return base + 2*( sqrt(x) );
}



//MÉTODOS PARA LOSANGO
void Losango::ret_dados()
{
    cout << "\nEntre com a diagonal maior e a diagonal menor:" << endl;
    cin >> Diagonal >> diagonal;
}

int Losango::cal_ret_area()
{
    return (Diagonal*diagonal)/2;
}

int Losango::cal_ret_perim()
{   int x;

    x = pow(Diagonal/2, 2) + pow(diagonal/2, 2);

    return 4*( sqrt(x) );
}



