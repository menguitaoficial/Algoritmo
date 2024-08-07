#include <iostream>
using namespace std;

int main() {
    float anosFuma, cigarrosPorDia, precoCarteira;
    float precoCigarro, diasTotais, totalGasto;

    cout << "Quantos anos você fuma? ";
    cin >> anosFuma;

    cout << "Quantos cigarros você fuma por dia? ";
    cin >> cigarrosPorDia;

    cout << "Qual o preço da carteira? ";
    cin >> precoCarteira;

    precoCigarro = precoCarteira / 20;
    diasTotais = anosFuma * 365;
    totalGasto = diasTotais * cigarrosPorDia * precoCigarro;

    cout << "Total gasto: R$" << totalGasto << endl;

    return 0;
}
