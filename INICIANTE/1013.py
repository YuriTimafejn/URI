# -*- coding: utf-8 -*-

"""
Faça um programa que leia três valores e apresente
o maior dos três valores lidos seguido da mensagem
“eh o maior”. Utilize a fórmula:
MAIOR(A,B) = ((A+B+abs(A-B))/2
Obs.: a fórmula apenas calcula o maior entre os dois
primeiros (a e b). Um segundo passo, portanto é
necessário para chegar no resultado esperado.
Entrada
O arquivo de entrada contém três valores inteiros.
Saída
Imprima o maior dos três valores seguido por um espaço
e a mensagem "eh o maior".

"""
entrada = input().split()

n0, n1, n2 = entrada

temp = (int(n0) + int(n1) + abs(int(n0) - int(n1)))/2
maior = (temp + int(n2) + abs(temp - int(n2)))/2

print('{} eh o maior'.format(int(maior)))
