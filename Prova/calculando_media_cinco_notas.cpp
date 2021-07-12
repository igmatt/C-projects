#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese" );
	
	float n1, n2, n3, n4, n5, media;
	
	cout <<"\t\t\tCalculando a média de 5 números";
	
	cout <<"\n\nFavor digitar cada uma das notas que deseja fazer a média: \n";
	cin >>n1 >> n2 >> n3 >> n4 >> n5;
	
	system("cls");
	cout <<"\t\t\tCalculando a média de 5 números";
	
	cout <<"\n\nSuas notas foram as seguintes: " <<n1 <<", " <<n2 <<", " <<n3 <<", " <<n4 <<", " <<n5 <<".\n\n";
	
	cout <<"A média das notas apresentadas é: " <<(n1+n2+n3+n4+n5)/5 <<".\n";
	
	return 0;
}
