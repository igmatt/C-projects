#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	//Terminal funciona sem a utiliza��o do system("pause")
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome, sexo, nomemaior;
	int cad, cont;
	float horatr, salhora, salbruto, somasal, salmaior;
	
	cont = 0;
	somasal = 0;
	salmaior = 0;
	
	do{
		cout << "\t\t\tCADASTRANDO FUNCION�RIOS\n\n" << ++cont;
		cout << "\n\nDigite o nome do Funcion�rio: ";
		cin >> nome;
		cout << "\nSexo do funcion�rio: M para Masculino / F para feminino ";
		cin >> sexo;
		cout << "\nDigite as horas trabalhadas: ";
		cin >> horatr;
		cout << "\nDigite o sal�rio por cada hor�rio: ";
		cin >> salhora;
		cout << "\n\nCadastro de funcion�rios: 1 para digitar os dados / 0 para finalizar ";
		cin >> cad;
		
		salbruto = horatr * salhora;
		somasal += salbruto;
		
		if (salbruto >= salmaior){
			salmaior = salbruto;
			nomemaior = nome;
		}
	}
	while (cad == 1);
	
	cout << "\n\nA Soma dos sal�rios dos funcion�rios � : R$ " << somasal;
	cout << "\nO Maior sal�rio foi : R$ " <<salmaior <<" e seu nome � : " <<nomemaior;
	return 0;
}
