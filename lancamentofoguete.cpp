#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;
int main(){
	//Terminal funciona sem a utiliza��o do system("pause")
	setlocale(LC_ALL, "Portuguese");
	
	int contagem;
	
	contagem = 10;
	
	while (contagem >= 0){
		cout << "\a\t\tContagem Regressiva para lan�amento do Foguete ...\n\n";// O \a serve para dar um barulho na contagem regressiva.
		cout << " " << contagem << "\n";
		Sleep(1200);
		system("cls");
		contagem --;
	}
	
	cout << "\nPARAB�NS !! FOGUETE LAN�ADO COM SUCESSO !!!!\n";
	
	return (0);
}
