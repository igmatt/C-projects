#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	//Programa roda e aparece o terminal sem a necessidade do system("pause")
	
	setlocale(LC_ALL, "Portuguese" );
	
	string nome;
	int horast, cargocode, turno;
	float salariob1, salariob2;
	
	cout <<"\t\t\tPADARIA DA JUCR�CIA\n\n";
	
	cout <<"Informe seu nome: ";
	cin >>nome;
	
	cout <<"\n\nInforme quantas horas/m�s trabalhadas: ";
	cin >>horast;
	
	salariob1 = horast * 5;
	salariob2 = horast * 8;
	
	cout <<"\n\nInforme o C�digo do seu Cargo: ";
	cin >>cargocode;
	
	cout <<"\n\nInforme o seu turno:\nManh�\t= 1\nTarde\t= 2\nNoite\t= 3\n";
	cin >>turno;
	
	system("cls");
	
	switch (cargocode){
		case 1 :
			cout <<"\t\t\tPADARIA DA JUCR�CIA\n\n";
			cout <<"\nFuncion�rio: " <<nome;
			cout <<"\n\nSal�rio Base + Comiss�o\n\n";
			
			switch(turno){
				case 1:
					cout <<"R$ " <<salariob1 + (salariob1 * 0.03);
					break;
				case 2:
					cout <<"R$ " <<salariob1 + (salariob1 * 0.04);
					break;
				case 3:
					cout <<"R$ " <<salariob1 + (salariob1 * 0.05);
					break;
				default:
					cout <<"TURNO INV�LIDO!!";
					break;
			}
		default:
			cout <<"C�DIGO INV�LIDO!!";
			break;
	}
	
	switch (cargocode){
		case 2 :
			cout <<"\t\t\tPADARIA DA JUCR�CIA\n\n";
			cout <<"\nFuncion�rio: " <<nome;
			cout <<"\n\nSal�rio Base + Comiss�o\n\n";
			
			switch(turno){
				case 1:
					cout <<"R$ " <<salariob2 + (salariob2 * 0.03);
					break;
				case 2:
					cout <<"R$ " <<salariob2 + (salariob2 * 0.04);
					break;
				case 3:
					cout <<"R$ " <<salariob2 + (salariob2 * 0.05);
					break;
			}

	}
	
	
	return (0);
}
