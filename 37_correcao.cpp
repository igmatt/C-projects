#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	
	//Programa roda e aparece o terminal sem a necessidade do system("pause")
	
	setlocale (LC_ALL, "Portuguese");
	
	string nome, numero; //Usar número em STRING porque o INT não permite 9 dígitos
	int impulso, tipotel;
	float interurbanos, tarifa, vrimpulso;
	
	cout <<"\t\t\tTELEMAR\n\n";
	
	cout <<"Informe o seu nome:\n";
	cin >>nome;
	
	cout <<"\n\nInforme o seu número de telefone:\n";
	cin >>numero;
	
	cout <<"\n\nInforme quantos impulsos local registrados:\n";
	cin >>impulso;
	
	cout <<"\n\nInforme o interurbano registrados para EMBRATEL:\n";
	cin >>interurbanos;
	
	cout <<"\n\nTipos de telefone\nResidencial\t= 1\nComercial\t= 2\n\nInforme o tipo de telefone:\n";
	cin >>tipotel;
	
	if (tipotel == 1){
		tarifa = 38.14;
	}
	else {
		if (tipotel == 2){
			tarifa = 64.69;
		}
		else{
			cout <<"\n\nTIPO INVÁLIDO !!";
		}
	}
	
	if (impulso > 100){
		vrimpulso = (impulso - 100)*0.15;
	}
	
	system("cls");
	
	cout <<"\t\tCONTA - TELEMAR";
	cout <<"\n\nNOME: " <<nome;
	cout <<"\n\nTELEFONE: " <<numero;
	cout <<"\n\nTARIFA: " <<tarifa;
	if (impulso < 100){
	cout <<"\n\nSERVIÇO LOCAL: "<<vrimpulso;
	}
	cout <<"\n\nINTERURBANOS: "<<interurbanos* 1.05;
	cout <<"\n\nTOTAL: "<<(tarifa + vrimpulso + interurbanos * 1.05);
	
	return (0);
}
