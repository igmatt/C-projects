#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	setlocale (LC_ALL, "Portuguese");
	//Terminal funciona sem a utilização do system("pause")
	
	string sexo, resposta;
	int cadastro, conts = 0, contn = 0;
	float contf = 0, contfs = 0;
	
	cout << "\t\t\tLANCAMENTO PRODUTOS IVONE\n\n";
	
	for (cadastro=0; cadastro<2000; cadastro++){
		cout << "SEXO DO ENTREVISTADO: M para Masculino / F para Feminino: ";
		cin >> sexo;
		cout << "O PRODUTO IVONE LHE AGRADOU? (S)IM / (N)ÃO: ";
		cin >> resposta;
		cout <<"\n";
		if (resposta == "S" || resposta == "s"){
			conts += 1;
		}
		else {
			contn += 1;
		}
		if (sexo == "F" || sexo == "f"){
			contf += 1;
		}
		if ((sexo == "F" || sexo == "f") && (resposta == "S" || resposta == "s")){
			contfs += 1;
		}
		
	}
	system ("cls");
	cout << "\t\t\tLANCAMENTO PRODUTOS IVONE\n\n";
	cout << "Dos entrevistados, " << conts <<" pessoas gostaram do lançamento do novo produto IVONE. \n";
	cout << "Dos entrevistados, " << contn <<" pessoas não gostaram do lançamento do novo produto IVONE. \n\n";
	cout << "A porcentagem de mulheres que aprovaram o novo produto IVONE foram : " <<(contfs / contf)*100 <<"%";
	
	
	
	return 0;
}
