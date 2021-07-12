#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float saldoi, ret1, ret2, dep, saldof;
	
	cout <<"				Calculando Saldo Bancário\n\n";
	cout<<"		CITYBANK\n";
	
	cout <<"Qual é o seu saldo atual?\n";
	cin >>saldoi;
	
	cout <<"Qual valor a ser sacado?\n";
	cin >>ret1;
	
		if (saldoi < ret1){
			cout <<"Saldo Insuficiente, por favor digite outro valor\n";
			cout <<"Saldo Atual	R$: " <<saldoi;
			cout <<"\nQual valor a ser sacado?\n";
			cin >>ret1;
	}
	
	cout <<"Qual novo valor sacado?\n";
	cin >>ret2;
	
		if ((saldoi-ret1) < ret2){
			cout <<"Saldo Insuficiente, por favor digite outro valor\n";
			cout <<"Saldo Atual	R$: " <<(saldoi-ret1);
			cout <<"\nQual valor a ser sacado?\n";
			cin >>ret2;
	}
	
	cout <<"Qual valor gostaria de depositar?\n";
	cin >>dep;
	
	saldof = saldoi - ret1 - ret2 + dep;
	
	system ("cls");
	
	cout <<"\nEXTRATO";
	cout <<"\nSaldo			R$ " <<saldoi;
	cout <<"\nRetiradas		R$ " <<ret1 + ret2;
	cout <<"\nDepósito		R$ " <<dep;
	cout <<"\nSaldo Atual		R$ " <<saldof;
	
	return 0;
}
