#include <iostream>
using namespace std;

int main(){
	int usuario, senha, tentativa=1;
	cout <<"Digite o usuario:";
	cin >> usuario;
	cout <<"Digite a senha:";
	cin >> senha;
	if((usuario==4496)&&(senha==123)){
		cout <<"Bem-vindo";
	}else{
		cout <<"errou,tente-novo:";
	}
	
	
}
