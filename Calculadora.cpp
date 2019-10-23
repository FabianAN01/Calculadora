#include <iostream>

using namespace std;

int main()
{
	int Salir;
	Salir = 0;
do{
	char op;
	float num1, num2;
	cout << "Se realizara la operacion que usted eliga\n";
	cin >> op;

	cout << "Introduce en orden los numeros que seran utilizados\n";
	cin >> num1 >> num2;

	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		break;
	default:
		cout << "No se reconocio esa operacion";
		break;
	}//Se acaba switch
	cout << "\nDeseas hacer otra operacion?\n";
	cout << "Si = 0\n No = 1\n";
	cin >> Salir;
} while (Salir == 0);
	

    }


