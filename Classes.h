#include <string>
using std::string;


class Canvas{
public:
    string nome_poli[4];
    int tela[1];


    int rec_tamanho();
    string rec_poligono();
    void exibir_canvas();

private:

};


class Poligono
{
public:
    int z_Index;
    char cor[20];
    int centro[1];

    int teste;

    int cal_ret_area();
    int ret_centro();
    char ret_cor();

};


class Retangulo:public Poligono
{
public:
    int base;
    int altura;

    void ret_dados();
    int cal_ret_area();
    int cal_ret_perim();

private:

};


class Circulo:public Poligono
{
public:
    int raio;

    void ret_dados();
    int cal_ret_area();
    int cal_ret_perim();

private:

};


class Triangulo:public Poligono
{
public:
    int base;
    int altura;

    void ret_dados();
    int cal_ret_area();
    int cal_ret_perim();

private:

};


class Losango:public Poligono
{
public:
    int Diagonal;
    int diagonal;

    void ret_dados();
    int cal_ret_area();
    int cal_ret_perim();

private:

};

