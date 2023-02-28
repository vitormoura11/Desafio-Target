/*
Desafio 2 - Sequencia de Fibonacci
Vitor Moura - www.github.com/vitormoura11
28/02/2023 - 15h15min
*/

#include <iostream>
#include <math.h>

using namespace std;


//funcao que ira retornar 'true' se o numero 'n' pertence a sequencia de fibonacci e 'false' caso nao pertencer
bool ehFibonacci(int n){

    //Fibonacci comeca sempre por 0 e 1('a' e 'b'), sendo 'c' a soma de a+b
    int a = 0;
    int b = 1;
    int c = 1;

    if (n==0 || n==1) //caso seja 0 ou 1, nao precisa calcular e ambos pertencem a sequencia
        return true;

    //loop que ira verificar se o numero 'n' pertence a Fibonacci por meio da soma dos dois anteriores
    while(c <= n){
        if(c == n)  //'c' ira verficar a igualdade com 'n', se sim, pertence a Fibonacci
            return true;
        a = b;
        b = c;
        c = a + b; //'c' ira somar os 2 numeros anteriores na sequencia
    }

    return false;
}

int main (){

    int n;

    cout << "Qual numero deseja verificar se pertence a sequencia de Fibonacci? ";
    cin >> n;

    if(ehFibonacci(n)) 
        cout << n << " pertence a sequencia de Fibonacci." << endl;
    else
        cout << n << " nao pertence a sequencia de Fibonacci." << endl;
           
    return 0;
}