#include <iostream>
using namespace std;

int main (){
	int anos, mes, dias, x, y, z, A;
	cout<<"Digite a idade";
	cin>> anos >> mes >> dias;
	x=anos - 2024;
	y= x * 365;
	z= mes * 30;
	dias = dias;
	A = y+z+dias;
	cout<<A;
	
	return 0;
}
