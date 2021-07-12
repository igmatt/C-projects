#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese" );
	
	string sexo;
	float alt, alt1;
	
	cout <<"OBS: Lembre-se de colocar sua altura em cm !!!";
	cout <<"\n\nDigite seu sexo (M ou F): ";
	cin >>sexo;
	
	cout <<"\nDigite sua altura: ";
	cin >>alt;
	
	alt1 = alt /100;
	
	system ("cls");
	
	cout <<"			Peso ideal para Homens e Mulheres\n\n";
	
	if (sexo == "H"){
		cout <<"Por ser Homem, de acordo com sua altura de " << alt1 <<" seu peso ideal é de " << (72.7 * alt1) - 58 <<".";
	}
	
	else{
		cout <<"Por ser Mulher, de acordo com sua altura de " << alt1 <<" seu peso ideal é de " << (62.1 *alt1) - 44.7 <<".";
	}
	
	return 0;
}
