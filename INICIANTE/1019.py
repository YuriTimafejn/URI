# -*- coding: utf-8 -*-

'''
Leia um valor inteiro, que é o tempo de duração
em segundos de um determinado evento em uma fábrica,
e informe-o expresso no formato horas:minutos:segundos.
Entrada
O arquivo de entrada contém um valor inteiro N.
Saída
Imprima o tempo lido no arquivo de entrada (segundos),
convertido para horas:minutos:segundos
'''
N: int = int(input())

h = N // 3600  # 1h = 3600s, a divisão inteira da entrada retorna o equivalente em horas
min = (N % 3600) // 60  # 1min = 60s, O resto da divisão acima dividido por 60 retorna os minutos
s = N % 60  # O resto da divisão da entrada por 60, retorna a diferença da entrada e a quant. de minutos

print('{}:{}:{}'.format(h,min,s))
