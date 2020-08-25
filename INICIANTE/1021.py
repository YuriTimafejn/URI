# -*- coding: utf-8 -*-

'''
Leia um valor de ponto flutuante com duas casas decimais.
Este valor representa um valor monetário. A seguir,
calcule o menor número de notas e moedas possíveis
no qual o valor pode ser decomposto.
As notas consideradas são de 100, 50, 20, 10, 5, 2.
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05
e 0.01. A seguir mostre a relação de notas necessárias.
Entrada
O arquivo de entrada contém um valor de
ponto flutuante N (0 ≤ N ≤ 1000000.00).
Saída
Imprima a quantidade mínima de notas e moedas necessárias
para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
obs: O sistema funciona mas para passar no juiz é preciso remover a declaração de tipo ": int"
'''
N: float = float(input())
valor: int = N * 100
print('NOTAS:')
nota100: int = valor // 10000
valor = valor % 10000
print('{:.0f} nota(s) de R$ 100.00'.format(nota100))
nota50: int = valor // 5000
valor = valor % 5000
print('{:.0f} nota(s) de R$ 50.00'.format(nota50))
nota20: int = valor // 2000
valor = valor % 2000
print('{:.0f} nota(s) de R$ 20.00'.format(nota20))
nota10: int = valor // 1000
valor = valor % 1000
print('{:.0f} nota(s) de R$ 10.00'.format(nota10))
nota05: int = valor // 500
valor = valor % 500
print('{:.0f} nota(s) de R$ 5.00'.format(nota05))
nota02: int = valor // 200
valor = valor % 200
print('{:.0f} nota(s) de R$ 2.00'.format(nota02))
print('MOEDAS:')
moeda1: int = valor // 100
valor = valor % 100
print('{:.0f} moeda(s) de R$ 1.00'.format(moeda1))
moeda50: int = valor // 50
valor = valor % 50
print('{:.0f} moeda(s) de R$ 0.50'.format(moeda50))
moeda25: int = valor // 25
valor = valor % 25
print('{:.0f} moeda(s) de R$ 0.25'.format(moeda25))
moeda10: int = valor // 10
valor = valor % 10
print('{:.0f} moeda(s) de R$ 0.10'.format(moeda10))
moeda05 = valor // 5
valor = valor % 5
print('{:.0f} moeda(s) de R$ 0.05'.format(moeda05))
print('{:.0f} moeda(s) de R$ 0.01'.format(valor))
