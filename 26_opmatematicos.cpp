#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	cout <<"Digite o primeiro n�mero inteiro para o calculo: ";
	cin >>n1;
	
	cout <<"\nDigite o segundo n�mero inteiro para o calculo: ";
	cin >>n2;
	
	system("cls");

	cout<<"Os n�mero foram: " <<n1 <<" e " <<n2 <<".";

	cout <<"\n\nA soma deles �\n" << n1+n2;
	
	cout <<"\n\nA subtra��o deles �\n" << n1-n2;
	
	cout <<"\n\nA multiplica��o deles �\n" << n1*n2;
	
	cout <<"\n\nA potencia��o deles �\n" << pow(n1,n2);
	
	if (n2 != 0) {
	
		cout <<"\n\nA divis�o inteira deles �\n" << n1/n2;
	
		cout <<"\n\nO resto da divis�o deles �\n" << n1%n2;
	
		cout <<"\n\nA divis�o real deles �\n" <<(float) n1/n2;
	
	}
	
	else{
		
		cout <<"\n\nAs divis�es n�o podem ser feitas devido n�o poder dividir por 0.\n";
	}
	
	return 0;
}
