#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <cstdlib>
#include "Funcoes.cpp"

#define MAX 20


int digitaEscolha(void);//PROTÓTIPO DE FUNÇÃO, EXIBE MENU


int main()
{   int escolha;
    int i; //Contador Geral
    int r=0;//Contador para array de retangulos
    int c=0;//Contador para array de circulos
    int t=0;//Contador para array de triangulos
    int l=0;//Contador para array de losangos

    while ((escolha = digitaEscolha()) != -1)
            {
                Canvas cav;
                Retangulo ret[MAX];
                Circulo circ[MAX];
                Triangulo tri[MAX];
                Losango los[MAX];

                switch (escolha)
                {

                    case 1://INFORMACOES CANVAS
                        cav.rec_tamanho();
                        cout << "\nINFORMACOES CANVAS!" << "\nTamanho da tela: "
                             << cav.tela[0] << " X " << cav.tela[1] << endl;
                        cav.rec_poligono();
                        cout << "\nLista de poligonos disponiveis: " << endl;
                        cav.exibir_canvas();
                        cout << "\n\n";
                        system("pause");
                        system("cls");
                    break;

                    case 2://INSERIR RETANGULO
                        if(r==0){r++;}//IDENTIFICA 1º OBJETO CRIADO
                        cout << "\nVOCE ESTA: INSERINDO O RETANGULO " << r <<  endl;

                        ret[r].ret_centro();
                        ret[r].ret_dados();
                        ret[r].ret_cor();

                       // cout << "\nEntre com a cor do poligono:" << endl;
                        //cin >> ret[r].cor;

                        cout << "\nPoligono criado com sucesso!\n\n" << endl;
                        r++;
                        system("pause");//FUNÇÃO PARA WINDOWS (PARALISA TELA)
                        system("cls");//FUNÇÃO PARA WINDOWS (LIMPA TELA)
                    break;

                    case 3://INSERIR CIRCULO
                        if(c==0){c++;}//IDENTIFICA 1º OBJETO CRIADO
                        cout << "\nVOCE ESTA: INSERINDO O CIRCULO " << c <<  endl;

                        circ[c].ret_centro();
                        circ[c].ret_dados();

                        cout << "\nEntre com a cor do poligono:" << endl;
                        cin >> circ[c].cor;

                        cout << "\nPoligono criado com sucesso!\n\n" << endl;
                        c++;
                        system("pause");
                        system("cls");
                    break;

                    case 4://INSERIR TRIANGULO
                        if(t==0){t++;}//IDENTIFICA 1º OBJETO CRIADO
                        cout << "\nVOCE ESTA: INSERINDO O TRIANGULO " << t <<  endl;

                        tri[t].ret_centro();
                        tri[t].ret_dados();

                        cout << "\nEntre com a cor do poligono:" << endl;
                        cin >> tri[t].cor;

                        cout << "\nPoligono criado com sucesso!\n\n" << endl;
                        t++;
                        system("pause");
                        system("cls");
                    break;

                    case 5://INSERIR LOSANGO
                        if(l==0){l++;}//IDENTIFICA 1º OBJETO CRIADO
                        cout << "\nVOCE ESTA: INSERINDO O LOSANGO " << l <<  endl;

                        los[l].ret_centro();
                        los[l].ret_dados();

                        cout << "\nEntre com a cor do poligono:" << endl;
                        cin >> los[l].cor;

                        cout << "\nPoligono criado com sucesso!\n\n" << endl;
                        l++;
                        system("pause");
                        system("cls");
                    break;

                    case 6://EXIBIR POLIGONOS
                    cout <<"\nExibindo Retangulos Criados:\n" << endl;
                        if(r==0){
                                cout << "\tNENHUM RETANGULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<r; i++)
                                {
                                    cout << "\nRetangulo " << i << endl;
                                    cout << "\tCentro: " << ret[i].centro[0] << "x"<< ret[i].centro[1] << endl;
                                    cout << "\tCoordenada Z: " << ret[i].z_Index << endl;
                                    cout << "\tArea: " << ret[i].cal_ret_area() << endl;
                                    cout << "\tPerimetro: " << ret[i].cal_ret_perim() << endl;
                                    cout << "\tCor: " << ret[i].cor << "\n" << endl;
                                }//FIM DO FOR
                                }//FIM DO ELSE

                    cout <<"\nExibindo Circulos Criados:\n" << endl;
                        if(c==0){
                                cout << "\tNENHUM CIRCULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<c; i++)
                                {
                                    cout << "\nCirculo " << i << endl;
                                    cout << "\tCentro: " << circ[i].centro[0] << "x"<< circ[i].centro[1] << endl;
                                    cout << "\tCoordenada Z: " << circ[i].z_Index << endl;
                                    cout << "\tArea: " << circ[i].cal_ret_area() << endl;
                                    cout << "\tPerimetro: " << circ[i].cal_ret_perim() << endl;
                                    cout << "\tCor: " << circ[i].cor << "\n" << endl;
                                }//FIM DO FOR
                                }//FIM DO ELSE

                    cout <<"\nExibindo Triangulo Criados:\n" << endl;
                        if(t==0){
                                cout << "\tNENHUM TRIANGULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<t; i++)
                                {
                                    cout << "\nTriangulo " << i << endl;
                                    cout << "\tCentro: " << tri[i].centro[0] << "x"<< tri[i].centro[1] << endl;
                                    cout << "\tCoordenada Z: " << tri[i].z_Index << endl;
                                    cout << "\tArea: " << tri[i].cal_ret_area() << endl;
                                    cout << "\tPerimetro: " << tri[i].cal_ret_perim() << endl;
                                    cout << "\tCor: " << tri[i].cor << "\n" << endl;
                                }//FIM DO FOR
                                }//FIM DO ELSE

                    cout <<"\nExibindo Losangos Criados:\n" << endl;
                        if(l==0){
                                cout << "\tNENHUM LOSANGO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<l; i++)
                                {
                                    cout << "\nLosango " << i << endl;
                                    cout << "\tCentro: " << los[i].centro[0] << "x"<< los[i].centro[1] << endl;
                                    cout << "\tCoordenada Z: " << los[i].z_Index << endl;
                                    cout << "\tArea: " << los[i].cal_ret_area() << endl;
                                    cout << "\tPerimetro: " << los[i].cal_ret_perim() << endl;
                                    cout << "\tCor: " << los[i].cor << "\n" << endl;
                                }//FIM DO FOR
                                }//FIM DO ELSE
                        system("pause");
                        system("cls");
                    break;

                    case 7://ELIMINAR POLIGONO
                        int exclui;

                        cout << "\nVOCE ESTA: ELIMINANDO POLIGONO\n" << endl;
                        cout << "Digite 1 - Para eliminar RETANGULO" << endl
                             << "Digite 2 - Para eliminar CIRCULO" << endl
                             << "Digite 3 - Para eliminar TRIANGULO" << endl
                             << "Digite 4 - Para eliminar LOSANGO" << endl;

                        cin >> exclui;

                        switch(exclui)
                        {
                            case 1:
                                delete &ret[r];
                                r--;
                            break;

                            case 2:
                                delete &circ[c];
                                c--;
                            break;

                            case 3:
                                delete &tri[t];
                                t--;
                            break;

                            case 4:
                                delete &los[l];
                                l--;
                            break;

                            default:
                                cout << "Escolha incorreta\n \a" << endl;
                            break;
                        }//FIM DO SWICTH
                        cout << "Poligono deletado com sucesso!!\n";
                        system("pause");
                        system("cls");
                    break;

                    case 8://SOMA AREAS
                        int soma_r, soma_c, soma_t, soma_l;
                            soma_r = soma_c = soma_t = soma_l = 0;

                        cout << "\nSoma de todas as Areas de Canvas!" << endl;

                            if(r==0){
                                cout << "\tNENHUM RETANGULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<r; i++)
                                    {
                                        soma_r += ret[i].cal_ret_area();
                                    }
                                cout << "\tSoma das areas dos Retangulos: " << soma_r << endl;
                                }

                            if(c==0){
                                cout << "\tNENHUM CIRCULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<c; i++)
                                    {
                                        soma_c += circ[i].cal_ret_area();
                                    }
                                cout << "\tSoma das areas dos Circulos: " << soma_c << endl;
                                }

                            if(t==0){
                                cout << "\tNENHUM TRIANGULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<t; i++)
                                    {
                                        soma_t += tri[i].cal_ret_area();
                                    }
                                cout << "\tSoma das areas dos Triangulos: " << soma_t << endl;
                                }

                            if(l==0){
                                cout << "\tNENHUM LOSANGO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<l; i++)
                                    {
                                        soma_l += los[i].cal_ret_area();
                                    }
                                cout << "\tSoma das areas dos Losangos: " << soma_l << endl;
                                }

                        cout << "\nSoma Total de Areas: " << soma_r + soma_c + soma_t + soma_l << "\n" << endl;

                        system("pause");
                        system("cls");
                    break;

                    case 9://SOMA PERIMETROS
                        //int soma_r, soma_c, soma_t, soma_l;
                            soma_r = soma_c = soma_t = soma_l = 0;

                        cout << "\nSoma de todas os Perimetros de Canvas!" << endl;

                            if(r==0){
                                cout << "\tNENHUM RETANGULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<r; i++)
                                    {
                                        soma_r += ret[i].cal_ret_perim();
                                    }
                                cout << "\tSoma dos Perimetros dos Retangulos: " << soma_r << endl;
                                }

                            if(c==0){
                                cout << "\tNENHUM CIRCULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<c; i++)
                                    {
                                        soma_c += circ[i].cal_ret_perim();
                                    }
                                cout << "\tSoma dos Perimetros dos Circulos: " << soma_c << endl;
                                }

                            if(t==0){
                                cout << "\tNENHUM TRIANGULO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<t; i++)
                                    {
                                        soma_t += tri[i].cal_ret_perim();
                                    }
                                cout << "\tSoma dos Perimetros dos Triangulos: " << soma_t << endl;
                                }

                            if(l==0){
                                cout << "\tNENHUM LOSANGO FOI CRIADO!!\n\n" << endl;
                                }

                            else{
                                for(i=1; i<l; i++)
                                    {
                                        soma_l += los[i].cal_ret_perim();
                                    }
                                cout << "\tSoma dos Perimetros dos Losangos: " << soma_l << endl;
                                }

                        cout << "\nSoma Total de Perimetros: " << soma_r + soma_c + soma_t + soma_l << "\n" << endl;

                        system("pause");
                        system("cls");
                    break;

                    default:
                        cout << "Escolha incorreta\n \a" << endl;
                        system("cls");
                    break;
                }//FIM DO SWITCH
            }//FIM DO WHILE
    return 0;
}//FIM DO MAIN


//MENU PARA ESCOLHAS
int digitaEscolha(void)
{
    int menuEscolha;

    cout << "SIMULACAO CANVAS" << endl
         << "Escolha uma opcao para prosseguir" << endl
         << "\n1. Exibir informacoes do canvas" << endl
         << "2. Inserir Retangulo" << endl
         << "3. Inserir Circulo" << endl
         << "4. Inserir Triangulo" << endl
         << "5. Inserir Losango" << endl
         << "6. Exibir Informacoes dos Poligonos" << endl
         << "7. Eliminar Poligono por Inercao" << endl
         << "8. Exibir soma das Areas do Poligono" << endl
         << "9. Exibir soma dos Perimetros do Poligono" << endl
         << "-1. Sair\n" << endl;

    cin >> menuEscolha;

    return menuEscolha;
}
