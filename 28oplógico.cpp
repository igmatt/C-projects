#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese" );
	
	bool b1, b2, b3;
	
	b1= true;
	b2= true;
	b3= true;
	
	if (b1){
		cout <<"\n\nComando1";
	}
	else if(b2){
		if(b3){
			cout <<"\n\nComando2";
		}
		else{
			cout<<"\nnComando3";
		}
	}
	cout <<"Comando4";
	
	return 0;
}
