#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	cout <<"Digite o primeiro número inteiro para o calculo: ";
	cin >>n1;
	
	cout <<"\nDigite o segundo número inteiro para o calculo: ";
	cin >>n2;
	
	system("cls");

	cout<<"Os número foram: " <<n1 <<" e " <<n2 <<".";

	cout <<"\n\nA soma deles é\n" << n1+n2;
	
	cout <<"\n\nA subtração deles é\n" << n1-n2;
	
	cout <<"\n\nA multiplicação deles é\n" << n1*n2;
	
	cout <<"\n\nA potenciação deles é\n" << pow(n1,n2);
	
	if (n2 != 0) {
	
		cout <<"\n\nA divisão inteira deles é\n" << n1/n2;
	
		cout <<"\n\nO resto da divisão deles é\n" << n1%n2;
	
		cout <<"\n\nA divisão real deles é\n" <<(float) n1/n2;
	
	}
	
	else{
		
		cout <<"\n\nAs divisões não podem ser feitas devido não poder dividir por 0.\n";
	}
	
	return 0;
}
