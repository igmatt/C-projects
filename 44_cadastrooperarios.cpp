#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	//Terminal funciona sem a utilização do system("pause")
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome, sexo, nomemaior;
	int cad, cont;
	float horatr, salhora, salbruto, somasal, salmaior;
	
	cont = 0;
	somasal = 0;
	salmaior = 0;
	
	do{
		cout << "\t\t\tCADASTRANDO FUNCIONÁRIOS\n\n" << ++cont;
		cout << "\n\nDigite o nome do Funcionário: ";
		cin >> nome;
		cout << "\nSexo do funcionário: M para Masculino / F para feminino ";
		cin >> sexo;
		cout << "\nDigite as horas trabalhadas: ";
		cin >> horatr;
		cout << "\nDigite o salário por cada horário: ";
		cin >> salhora;
		cout << "\n\nCadastro de funcionários: 1 para digitar os dados / 0 para finalizar ";
		cin >> cad;
		
		salbruto = horatr * salhora;
		somasal += salbruto;
		
		if (salbruto >= salmaior){
			salmaior = salbruto;
			nomemaior = nome;
		}
	}
	while (cad == 1);
	
	cout << "\n\nA Soma dos salários dos funcionários é : R$ " << somasal;
	cout << "\nO Maior salário foi : R$ " <<salmaior <<" e seu nome é : " <<nomemaior;
	return 0;
}
