#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese" );
	
	float n1, n2, n3, n4, n5, media;
	
	cout <<"\t\t\tCalculando a m�dia de 5 n�meros";
	
	cout <<"\n\nFavor digitar cada uma das notas que deseja fazer a m�dia: \n";
	cin >>n1 >> n2 >> n3 >> n4 >> n5;
	
	system("cls");
	cout <<"\t\t\tCalculando a m�dia de 5 n�meros";
	
	cout <<"\n\nSuas notas foram as seguintes: " <<n1 <<", " <<n2 <<", " <<n3 <<", " <<n4 <<", " <<n5 <<".\n\n";
	
	cout <<"A m�dia das notas apresentadas �: " <<(n1+n2+n3+n4+n5)/5 <<".\n";
	
	return 0;
}
