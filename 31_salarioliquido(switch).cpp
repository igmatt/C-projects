#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	//Programa roda e aparece o terminal sem a necessidade do system("pause")
	
	setlocale(LC_ALL, "Portuguese" );
	
	string nome;
	int horast, cf;
	float salariob1, salariob2;
	
	cout <<"\t\t\tSNOB Confec��es\n\n";
	cout <<"Digite seu nome: ";
	cin >>nome;
	
	cout <<"\n\nDigite quantas horas trabalhadas por m�s: ";
	cin >>horast;
	
	salariob1 = horast * 5;
	salariob2 = horast * 9;
	
	cout <<"Qual sua Classe Funcional? 1 ou 2\n";
	cin >>cf;
	
	system("cls");
	
	cout <<"\t\t\tSNOB Confec��es\n\n";
	cout <<"Funcion�rio: " <<nome;
	

	
	switch (cf){
		case 1:
			cout <<"\n\nCom base nas suas horas trabalhadas de " << horast <<" horas m�s. Seu sal�rio bruto � de R$ " <<salariob1 <<" .";
			cout <<"\nSeu sal�rio l�quido � de " << salariob1 - (salariob1 * 0.11);
			break;
		case 2:
			cout <<"Com base nas suas horas trabalhadas de " << horast <<" horas m�s. Seu sal�rio bruto � de R$ " <<salariob2 <<" .";
			cout <<"\nSeu sal�rio l�quido � de " << salariob2 - (salariob2 * 0.11);
			break;
	}
	
	return 0;
}
