#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese" );
	
	string nome, sexo;
	float idade, salario;
	
	cout <<"				CADASTRO\n\n";
	
	cout <<"Favor digitar seu nome: ";
	cin >>nome;
	
	cout <<"\n\nFavor digitar sua idade: ";
	cin >>idade;
	
	cout <<"\n\nFavor digitar seu sexo, H para masculino, e M para feminino: ";
	cin >>sexo;
	
	cout <<"\n\nFavor digitar seu sal�rio: ";
	cin >>salario;
	
	system ("cls");
	
	if (sexo == "H") {
		cout <<"Sua idade � " <<idade <<".";
	}
	else {
		cout <<"Seu sal�rio � " <<salario <<".";
	}
	

	return 0;
}
