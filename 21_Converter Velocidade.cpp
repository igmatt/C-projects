#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float veloms, velokmh;
	
	cout <<"			CONVERTER VELOCIDADE \n\n";
	cout <<"Digite a velocidade em m/s: \n";
	cin >>veloms;
	
	velokmh = veloms * 3.6;
	
	cout <<"\nA velocidade de " <<veloms <<"m/s convertida em km/h é de " <<velokmh <<"km/h \n";
	
	return 0;
}
