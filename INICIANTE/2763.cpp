#include <iostream>

/*

Your teacher would like to make a program with the following characteristics:

    Read the data of a CPF in the format XXX.YYY.ZZZ-DD;
    Print the four numbers, one value per line.

Input

The entry consists of several test files. In each test file there is one line. The line has the following format XXX.YYY.ZZZ-DD, where XXX, YYY, ZZZ, DD are integers. As shown in the following input example.
Output

For each file in the entry, you have an output file. The output file has four rows with an integer in each of them as it has been entered. As shown in the following output example.
*/
///////////////////////////////////////////////
/*
Resolu��o feita em base da explica��o do professor Edson Alves em video
"Introdu��o � Programa��o competitiva - Aula 02: Tipos Primitivos de Dados"
link: <https://www.youtube.com/watch?v=JBATdqWXxNo>
*/
///////////////////////////////////////////////

using namespace std;

int main (void){
	string s;
	cin >> s;

	for (auto c : s){
		if(isdigit(c))
			cout << c;
		else
			cout << '\n';
	}
	cout << endl;

	return 0;
}
