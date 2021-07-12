#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, opd;
	
	cout <<"\t\t\tCalculo de dois números desejado pelo usuário\n\n";
	
	cout <<"Digite em ordem os números inteiro que deseja calcular:\n";
	cin >>n1 >>n2;
	
	cout <<"\nSeus números foram: " <<n1 <<" e " <<n2 <<".\n\nAgora digite o número da operação que deseja realizar.\n";
	cout <<"Soma \t\t\t= 1\nSubtração \t\t= 2\nMultiplicação \t\t= 3\nDivisão Inteira \t= 4\nResto da Divisão \t= 5\nDivisão Real \t\t= 6\nPotência do 1 ao 2 \t= 7\n\n";
	cin >>opd;
	
	cout <<"O número escolhido foi: " <<opd;
	
	if (opd == 1){
		cout <<"\n\nO resultado da soma dos números é: "<<n1+n2 <<".";
	}
	else {
		if(opd == 2){
			cout <<"\n\nO resultado da subtração dos números é: " <<n1-n2 <<".";
		}
		else{
			if(opd == 3){
				cout <<"\n\nO resultado da multiplicação dos números é: "<<n1*n2 <<".";
			}
			else{
				if(opd == 7){
					cout <<"\n\nO resultado da potenciação do primeiro número elevado ao segundo é: "<<pow(n1,n2) <<".";
				}
				else{
					if(n2 == 0){
						cout <<"\n\nAs divisões não podem ser feitas devido não poder dividir por 0.";
					}
					else{
						if(opd == 4){
							cout <<"\n\nO resultado inteiro da divisão dos números é: "<<n1/n2 <<".";
						}
						else{
							if(opd == 5){
								cout <<"\n\nO resto da divisão inteira dos números é: "<<n1%n2 <<".";
							}
							else{
								cout <<"\n\nO resultado real da divisão dos números é: "<<(float) n1/n2 <<".";
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
