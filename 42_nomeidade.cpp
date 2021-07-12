#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	//Terminal funciona sem a utilização do system("pause")
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int cont, soma, idade;
	
	cout <<"\t\tCadastro de Nome e Idade\n\n";
	
	cont = 0;
	soma = 0;
	
	while (cont < 300){
		cout <<"\nDigite seu nome: ";
		cin >>nome;
		cout <<"\nDigite sua idade: ";
		cin >>idade;
		cont += 1;	
		soma += idade;
		if (idade >= 21){
			cout <<"\n" << nome << " tem idade igual ou superior a 21 anos .\n";
		}
	}
	cout <<"\n\nA soma das idades das pessoas cadastradas é: "<< soma;
	return 0;
}
