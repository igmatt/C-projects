#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float notap, notam, notad, mediaa, mediap;
	
	cout <<"				M�dia Aritm�tica e M�dia Ponderada\n\n";
	cout <<"MATERIA			PESO\nPORTUGUES		2\nMATEMATICA		4\nDIREITO			3\n\n";
	cout <<"Qual a nota de Portugu�s?\n";
	cin >>notap;
	
	cout <<"\nQual a nota de Matem�tica?\n";
	cin >>notam;
	
	cout <<"\nQual a nota de Direito?\n";
	cin >>notad;
	
	mediaa = notap + notam + notad / 3;
	
	cout <<"\nA m�dia aritm�tica das notas � " <<mediaa <<".\n\n";
	
	mediap = ((notap * 2) + (notam * 4) + (notad * 3)) / 9;
	
	cout <<"A m�dia ponderada das notas � " <<mediap <<".";
	
	return 0;
}
