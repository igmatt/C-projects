#include <iostream>
#include <locale.h>

using namespace std;
int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	bool x;
	int y;
	
	y = 0;
	x = false;
	
	while (y != 6){
		x = !x;
		y += 1;
		
		if (x){
			cout << y;
		}
		else{
			cout << -y;
		}
	}
	
	return (0);
}
