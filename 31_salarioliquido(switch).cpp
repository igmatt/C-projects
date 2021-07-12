#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	//Programa roda e aparece o terminal sem a necessidade do system("pause")
	
	setlocale(LC_ALL, "Portuguese" );
	
	string nome;
	int horast, cf;
	float salariob1, salariob2;
	
	cout <<"\t\t\tSNOB Confecções\n\n";
	cout <<"Digite seu nome: ";
	cin >>nome;
	
	cout <<"\n\nDigite quantas horas trabalhadas por mês: ";
	cin >>horast;
	
	salariob1 = horast * 5;
	salariob2 = horast * 9;
	
	cout <<"Qual sua Classe Funcional? 1 ou 2\n";
	cin >>cf;
	
	system("cls");
	
	cout <<"\t\t\tSNOB Confecções\n\n";
	cout <<"Funcionário: " <<nome;
	

	
	switch (cf){
		case 1:
			cout <<"\n\nCom base nas suas horas trabalhadas de " << horast <<" horas mês. Seu salário bruto é de R$ " <<salariob1 <<" .";
			cout <<"\nSeu salário líquido é de " << salariob1 - (salariob1 * 0.11);
			break;
		case 2:
			cout <<"Com base nas suas horas trabalhadas de " << horast <<" horas mês. Seu salário bruto é de R$ " <<salariob2 <<" .";
			cout <<"\nSeu salário líquido é de " << salariob2 - (salariob2 * 0.11);
			break;
	}
	
	return 0;
}
