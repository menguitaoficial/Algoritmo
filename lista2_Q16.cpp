/*16. Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos 
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a 
carteira. */

#include <iostream>
using namespace std;

int main (){
    int idade;
    cout <<"Digite a idade de uma pessoa:";
    cin >> idade;
    if (idade >= 18){
        cout <<"tem idade de tirar carteira de habilitação";
    }else{
      int anosfaltando = 18 - idade;
      cout <<"não pode tirar a carteira de habilitação";
      cout <<"faltam" << anosfaltando << "quantos anos faltam para carteira";
    }
 }
