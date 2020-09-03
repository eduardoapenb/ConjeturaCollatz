#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main (){
	int n = 0, i = 0;
	inicio:
	cout << "Ingrese un numero cualquiera:" << endl;
	cin >> n ;
	if ( n == 0 || n == 1){
		cout << "Este valor es invalido!"<< endl;
		
	} else {
	
	
	while (n != 1){
		
		if (n % 2 == 0){
			n = n / 2;
		cout << "En resultado No. " << i + 1 <<" es : " << n <<  endl;	
		}
		else {
			n =( (3*(n)) + 1);
		cout << "En resultado No. " << i+1   <<" es : " << n <<  endl;		
		}
		
		i ++ ;
	}
	cout << "El numero de pasos fue: "<< i << endl;
	i = 0;
}
	goto inicio;
	
	
	
system ("PAUSE");	
	
	return 0;
	
}

