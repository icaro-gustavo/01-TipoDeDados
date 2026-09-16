// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - Fatec (2026/2)" << endl;

	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "int  maxima = " << INT_MAX << "\n";
	cout << "int  minima = " << INT_MIN << "\n";
	cout << "short maxima = " << SHRT_MAX << "\n";
	//um INT_MAX + 1´sera igual a -2147483648

	cout << endl << endl;

	int celcius = 0;
	double fahrenheit = celcius * 1.8 + 32;
	double kelvin = celcius + 273.15;

	cout << "Digite a temperatura em Celcius: \n";
	cin >> celcius;
	cout << "Temperatura em Fahrenheit: " << fahrenheit << "\n";
	cout << "Temperatura em Kelvin: " << kelvin << "\n";

	cout << endl << endl;

	long tempo_s = 0;

	cout << "Digite o tempo em segundos: \n";
	cin >> tempo_s;

	long QDias = tempo_s / 86400;
	 tempo_s = tempo_s % 86400;

	long QHoras = tempo_s / 3600;
	tempo_s = tempo_s % 3600;	

	long QMinutos = tempo_s / 60;
	tempo_s = tempo_s % 60;

	
	cout << "Tempo em dias: " << QDias << "\n";
	cout << "Tempo em horas: " << QHoras << "\n";
	cout << "Tempo em minutos: " << QMinutos << "\n";
	cout << "Tempo em segundos: " << tempo_s << "\n";




	cout << endl << endl;

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	

	cout << "Qualquer tecla para sair...";
	system("pause"); // somente no Windows


}

