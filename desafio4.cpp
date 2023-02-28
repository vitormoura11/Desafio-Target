/*
Desafio 4 - Faturamento de uma distribuidora em cada estado
Vitor Moura - www.github.com/vitormoura11
28/02/2023 - 17h09min
*/

#include <iostream>
#include <iomanip>

using namespace std;


//funcao para calcular a porcentagem da participacao de cada estado no faturamento 
double porcentagem(double n, double total){
    return ((n*100)/total);
}

int main(){

    double SP = 67836.43;
    double RJ = 36678.66;
    double MG = 29229.88;
    double ES = 27165.48;
    double Outros = 19849.53;

    double total = SP + RJ + MG + ES + Outros;

    cout << fixed << setprecision(2); // O numero de casass decimais foi ajustado para 2
    cout << "O total faturado pela distribuidora foi de R$" << total << " reais.";
    cout << endl;
    cout << "Porcentagem de SP: " << porcentagem(SP, total) << "%";
    cout << endl;
    cout << "Porcentagem de RJ: " << porcentagem(RJ, total) << "%";
    cout << endl;
    cout << "Porcentagem de MG: " << porcentagem(MG, total) << "%";
    cout << endl;
    cout << "Porcentagem de ES: " << porcentagem(ES, total) << "%";
    cout << endl;
    cout << "Porcentagem de outros estados: " << porcentagem(Outros, total) << "%";

    return 0;
}

