#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	setlocale (LC_ALL, "Portuguese");
	//Terminal funciona sem a utilização do system("pause")
	
	string nome, sexo;
	int idade, turno, serie, aluno = 0, cadastro = 0, ficha , turnon = 0, serie3 = 0, mulheres2s = 0;

	do {
		cout << "\t\t\tCEFET\n\n";
		cout << "\t\tALUNO " << ++aluno;
		cout << "\n\nNOME: ";
		cin >> nome;
		cout << "\nIDADE: ";
		cin >> idade;
		cout << "\nSEXO M para Masculino / F para Feminino: ";
		cin >> sexo;
		cout << "\nTURNO : \n1 :\tMANHÃ\n2 :\tTARDE\n3 :\tNOITE\t";
		cin >> turno;
		cout << "\nSÉRIE : \n1 :\tPRIMEIRO ANO\n2 :\tSEGUNDO ANO\n3 :\tTERCEIRO ANO\t";
		cin >> serie;
		cout << "\n\n\t\tDeseja continuar o cadastro? 1 para SIM / 2 para NÃO: ";
		cin >> ficha;
		
		cadastro += 1;
		
		if (turno == 3){
			turnon += 1;
		}
		if (serie == 3){
			serie3 += 1;
		}
		if ((sexo == "F" || sexo == "f") && serie == 2){
			mulheres2s += 1;
		}
		
		system("cls");
	} while (ficha == 1);
	
	cout << "\t\t\tCEFET\n\n";
	cout << turnon << " alunos matriculados no turno da noite.\n\n";
	cout << serie3 << " alunos matriculado no terceiro ano.\n\n";
	cout << "São " << mulheres2s <<" alunas mulheres e que estão matriculadas no segundo ano.\n\n";
	cout << "O total de alunos, homens e mulheres cadastrados foram: " << cadastro <<".\n\n";
	
	
	return 0;
}
