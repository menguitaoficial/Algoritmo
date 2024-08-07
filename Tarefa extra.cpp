#include <iostream>
using namespace std;

void verificarNumeroNoVetor() {
    int vetor[20];
    int numero;

    // Lendo o vetor de 20 elementos
    cout << "Digite 20 numeros inteiros:" << endl;
    for(int i = 0; i < 20; i++) {
        cout << "Digite o " << i + 1 << "� n�mero do vetor: ";
        cin >> vetor[i];
    }

    // Lendo o n�mero a ser verificado
    cout << "Digite o n�mero a ser verificado: ";
    cin >> numero;

    // Verificando se o n�mero existe no vetor
    bool encontrado = false;
    int posicao = -1;
    for(int i = 0; i < 20; i++) {
        if(vetor[i] == numero) {
            encontrado = true;
            posicao = i;
            break;
        }
    }

    // Imprimindo o resultado
    if(encontrado) {
        cout << "O n�mero " << numero << " existe no vetor e est� na posi��o " << posicao << "." << endl;
    } else {
        cout << "O n�mero " << numero << " n�o existe no vetor." << endl;
    }
}

int main() {
    verificarNumeroNoVetor();
    return 0;
    
}
