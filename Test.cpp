#include <iostream>
using namespace std;

int main() {
    float anosFuma, cigarrosPorDia, precoCarteira;
    float precoCigarro, diasTotais, totalGasto;

    cout << "Quantos anos voc� fuma? ";
    cin >> anosFuma;

    cout << "Quantos cigarros voc� fuma por dia? ";
    cin >> cigarrosPorDia;

    cout << "Qual o pre�o da carteira? ";
    cin >> precoCarteira;

    precoCigarro = precoCarteira / 20;
    diasTotais = anosFuma * 365;
    totalGasto = diasTotais * cigarrosPorDia * precoCigarro;

    cout << "Total gasto: R$" << totalGasto << endl;

    return 0;
}
