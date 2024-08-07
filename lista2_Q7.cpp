/*7. O cardápio de uma lanchonete é o seguinte: 
Sanduíche 
Código Descrição Preço Unitário 
100 Cachorro quente 1,10 
101 Baurú simples 1,30 
102 Baurú com ovo 1,50 
103 Hamburger 1,10 
104 Cheesburger 1,30 
Bebida 
Código Descrição Preço Unitário 
105 Refrigerante 1,00 
106 Suco 2,00 
107 Nescau 1,50 
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche. */

#include <iostream>
using namespace std;

int main (){
	int codigoSanduiche, quantidadeSanduiche, codigoBebida, quantidadeBebida, totalpedido;
	
	cout << "sanduiche\n";
	cout <<"\nCodigo|    Descriçao    | Preço Unitario\n\t ";
	cout <<"\n 101   |   Bauru simple  | 1,30\n\t";
	cout <<"\n 102   |   Bauru com ovo | 1,50\n\t";
	cout <<"\n 103   |     Hamburger   | 1,10\n\t";
	cout <<"\n 104   |    Cheesburger  | 1,30\n\t";
	
	cout << "\nBebida\n";
	cout <<"\nCodigo|    Descriçao    | Preço Unitario\n\t ";
	cout <<"\n 105   |   Refrigerante  | 1,00\n\t";
	cout <<"\n 106   |      Suco       | 1,30\n\t";
	cout <<"\n 107   |     Nescau      | 1,30\n\t";
	
    cout << "Digite o codigo do sanduiche:";
    cin >> codigoSanduiche;
    cout << "Digite a quantidade do sanduíche:";
    cin >> quantidadeSanduiche;
    cout << "Digite o codigo da bebida: ";
    cin >> codigoBebida;
    cout << "Digite a quantidade da bebida:";
    cin >> quantidadeBebida;
	
	cout << "Valor total do pedido: R$ " << totalPedido << endl;

}
