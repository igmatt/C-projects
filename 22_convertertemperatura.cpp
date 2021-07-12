#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float tempf, tempc;
	
	cout <<"\t\t\tConversor de Temperatura\n";
	cout <<"Qual a atual temperatura em Fahrenheit?\n";
	cin >>tempf;
	tempc = (tempf - 32) * 5 / 9;
	
	cout <<"A temperatura de " <<tempf <<"°F convertido em graus Celsius é de " <<tempc <<"°C.";
	
	return 0;
}
