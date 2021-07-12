#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float notap, notam, notad, mediaa, mediap;
	
	cout <<"				Média Aritmética e Média Ponderada\n\n";
	cout <<"MATERIA			PESO\nPORTUGUES		2\nMATEMATICA		4\nDIREITO			3\n\n";
	cout <<"Qual a nota de Português?\n";
	cin >>notap;
	
	cout <<"\nQual a nota de Matemática?\n";
	cin >>notam;
	
	cout <<"\nQual a nota de Direito?\n";
	cin >>notad;
	
	mediaa = notap + notam + notad / 3;
	
	cout <<"\nA média aritmética das notas é " <<mediaa <<".\n\n";
	
	mediap = ((notap * 2) + (notam * 4) + (notad * 3)) / 9;
	
	cout <<"A média ponderada das notas é " <<mediap <<".";
	
	return 0;
}
