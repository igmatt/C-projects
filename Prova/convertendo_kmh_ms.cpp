#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese" );
	
	float velokmh;
	
	cout <<"\t\t\tConvertendo Velocidade de km/h em m/s\n\n";
	
	cout <<"Digite a velocidade a ser convertida: ";
	cin >>velokmh;
	cout <<"\n\nA velocidade de " <<velokmh <<" km/h convertida em m/s é de " <<velokmh/3.6 <<" m/s.\n";
	
	return 0;
}
