#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	//Terminal funciona sem a utiliza��o do system("pause")
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome, sexo;
	int cad, cont;
	float altura, somaalt, maior, menor;
	
	cont = 0;
	somaalt = 0;
	maior = 0;
	menor = 9999;
	
	cout << "\t\t\tCadastro de Pessoas !!\n\n";
	
	do{
		cout << "\n\nDigite seu nome: ";
		cin >> nome;
		cout << "\nDigite sua altura: ";
		cin >> altura;
		cout << "\nDigite seu sexo: M para Masculino e F para Feminino ";
		cin >> sexo;
		
		if (altura >= maior){
			maior = altura;
		}
		if (altura <= menor){
			menor = altura;
		}
		if (sexo == "M" || sexo == "m"){
			cont ++;
			somaalt += altura;
		}
		cout << "\n\nDeseja cadastrar? 1 para SIM / 0 para N�O ";
		cin >> cad;
	}
	while( cad == 1 );
	
	cout << "\n\tA M�dia da altura dos homens �: " <<somaalt/cont;
	cout << "\n\tA Maior altura � : " << maior;
	cout << "\n\tA Menor altura � : " << menor;
	
	return 0;
}
