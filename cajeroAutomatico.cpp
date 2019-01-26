//Simulador de cajero automatico

#include <iostream>

using namespace std;

int saldoInicial; 

int main(){
	int salida = 1;
	while(salida){
	/*
	
	Tendremos tres operaciones
		1. Retirar dinero
		2. Depositar dinero
		3. Salir
	
	*/
	
	int opcion;
	
	cout << "\nBienvenido, indique que desea hacer con su saldo.\n" << endl;
	
	cout << "\tPULSE 1 para Retirar dinero" << endl;
	cout << "\tPULSE 2 para Depositar dinero" << endl;
	cout << "\tPULSE 3 para Salir" << endl;
	cout << "Opcion: ";
	cin >> opcion;
	
	switch(opcion){
		case 1: 
			int retiro;
			cout << "Indique cuanto desea retirar: ";
			cin >> retiro;
			
				//Validacion de los retiros.
				if(retiro < saldoInicial){
					saldoInicial = saldoInicial - retiro;
					cout << "Tu saldo es de " << saldoInicial << " pesos.";	
				}else if(retiro > 10000){
					cout << "Solamente puedes retirar un total de 10000 pesos";
				}else{
					cout << "No cuentas con esa cantidad de saldo";
				}
			break;
		case 2:
			int agregado;
			cout << "Indique cuanto desea depositar: ";
			cin >> agregado;
			saldoInicial = saldoInicial + agregado;
			cout << "Tu saldo es de " << saldoInicial << " pesos.";
			break;
		case 3:
			cout << "Adios";
			salida = 0;
			break;
		default:
			cout << "Porfavor ingrese un valor valido"; break;
			
	}}
	
	return 0;
}
