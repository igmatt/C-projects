#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	
	//Programa roda e aparece o terminal sem a necessidade do system("pause")
	
	setlocale (LC_ALL, "Portuguese");
	
	string nome;
	int numtel, imploc, impint, tipotel;
	float impexc, interurbano;
	
	cout <<"\t\t\tTELEMAR\n\n";
	
	cout <<"Informe o seu nome:\n";
	cin >>nome;
	
	cout <<"\n\nInforme o seu n๚mero de telefone:\n";
	cin >>numtel;
	
	cout <<"\n\nInforme quantos impulsos local registrados:\n";
	cin >>imploc;
	
	cout <<"\n\nInforme o interurbano registrados para EMBRATEL:\n";
	cin >>impint;
	
	cout <<"\n\nTipos de telefone\nResidencial\t= 1\nComercial\t= 2\n\nInforme o tipo de telefone:\n";
	cin >>tipotel;
	
	system ("cls");
	
	impexc = (imploc - 100) * 0.15;
	
	interurbano = impint * 1.05;
	
	cout <<"จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ";
	cout <<"\n\t\t\tTelemar\n";
	cout <<"จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ";
	cout <<"\n\nNome: " <<nome <<"\nN๚mero de Telefone: " <<numtel <<"\nImpulsos Locais: " <<imploc ;
	if (imploc <= 100){
		cout <<"\nImpulsos Locais Excedente: 0";
	}
	else{
		cout <<"\nImpulsos Locais Excedente: " << imploc - 100;
	}
	cout <<"\nInterurbano Embratel: " <<impint;

	
	switch (tipotel){
		case 1:
			cout <<"\nTipo de Telefone: Residencial";
			cout <<"\n\n\t\tValores";
			if (imploc <= 100){
				cout <<"\n\nImpulsos Locais: R$ 38.14";
				cout <<"\nImpulsos Locais Excedente: R$ 0";
				cout <<"\nImpulsos Interurbanos : R$ " <<interurbano;
				cout <<"\nValor da Conta : R$ " <<38.14 + interurbano <<"\n";
			}
			else {
				cout <<"\n\nImpulsos Locais: R$ 38.14";
				cout <<"\nImpulsos Locais Excedente: R$ " <<impexc;
				cout <<"\nImpulsos Interurbanos : R$ " <<interurbano;
				cout <<"\nValor da Conta : R$ " <<38.14 + impexc + interurbano <<"\n";
			}
			break;
		case 2:
			cout <<"\nTipo de Telefone: Comercial";
			cout <<"\n\n\t\tValores";
			if (imploc <= 100){
				cout <<"\n\nImpulsos Locais: R$ 64.69";
				cout <<"\nImpulsos Locais Excedente: R$ 0";
				cout <<"\nImpulsos Interurbanos : R$ " <<interurbano;
				cout <<"\nValor da Conta : R$ " <<64.69 + interurbano <<"\n";
			}
			else {
				cout <<"\n\nImpulsos Locais: R$ 64.69";
				cout <<"\nImpulsos Locais Excedente: R$ " <<impexc;
				cout <<"\nImpulsos Interurbanos : R$ " <<interurbano;
				cout <<"\nValor da Conta : R$ " <<64.69 + impexc + interurbano <<"\n";
			}
			break;
	}


	return (0);
}
