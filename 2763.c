#include <stdio.h>
#include <string.h>
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
Resolução feita em base da explicação do professor Edson Alves em video
"Introdução à Programação competitiva - Aula 02: Tipos Primitivos de Dados"
link: <https://www.youtube.com/watch?v=JBATdqWXxNo>
*/
///////////////////////////////////////////////
int main (void){
	char s[16];
	char *token;

	scanf("%s", s);

	token = strtok(s, ".-");
	printf("%s\n", token);

	token = strtok(NULL, ".-");
	printf("%s\n", token);

	token = strtok(NULL, ".-");
	printf("%s\n", token);

	token = strtok(NULL, ".-");
	printf("%s\n", token);

	return 0;
}
