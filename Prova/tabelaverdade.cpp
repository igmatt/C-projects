#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int a, b, c;
	bool d, e;
	
	a = 10;
	b = 127;
	c = 15;
	d = false;
	e = true;
	
	cout << !d;
	cout << d && e;
	cout << (a>b) || (b<c);
	cout << !(a < b);
	cout << (d && e)||(a == b);
	cout << (d || e) && (a < b);
	cout << (a + b < c) && d || e && !d;
	cout << ((a + b * c / b) == 3) && !(d || e);
	
	return (0);
}
