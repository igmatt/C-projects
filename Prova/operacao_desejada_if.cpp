#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, opd;
	
	cout <<"\t\t\tCalculo de dois n�meros desejado pelo usu�rio\n\n";
	
	cout <<"Digite em ordem os n�meros inteiro que deseja calcular:\n";
	cin >>n1 >>n2;
	
	cout <<"\nSeus n�meros foram: " <<n1 <<" e " <<n2 <<".\n\nAgora digite o n�mero da opera��o que deseja realizar.\n";
	cout <<"Soma \t\t\t= 1\nSubtra��o \t\t= 2\nMultiplica��o \t\t= 3\nDivis�o Inteira \t= 4\nResto da Divis�o \t= 5\nDivis�o Real \t\t= 6\nPot�ncia do 1 ao 2 \t= 7\n\n";
	cin >>opd;
	
	cout <<"O n�mero escolhido foi: " <<opd;
	
	if (opd == 1){
		cout <<"\n\nO resultado da soma dos n�meros �: "<<n1+n2 <<".";
	}
	else {
		if(opd == 2){
			cout <<"\n\nO resultado da subtra��o dos n�meros �: " <<n1-n2 <<".";
		}
		else{
			if(opd == 3){
				cout <<"\n\nO resultado da multiplica��o dos n�meros �: "<<n1*n2 <<".";
			}
			else{
				if(opd == 7){
					cout <<"\n\nO resultado da potencia��o do primeiro n�mero elevado ao segundo �: "<<pow(n1,n2) <<".";
				}
				else{
					if(n2 == 0){
						cout <<"\n\nAs divis�es n�o podem ser feitas devido n�o poder dividir por 0.";
					}
					else{
						if(opd == 4){
							cout <<"\n\nO resultado inteiro da divis�o dos n�meros �: "<<n1/n2 <<".";
						}
						else{
							if(opd == 5){
								cout <<"\n\nO resto da divis�o inteira dos n�meros �: "<<n1%n2 <<".";
							}
							else{
								cout <<"\n\nO resultado real da divis�o dos n�meros �: "<<(float) n1/n2 <<".";
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
