# -*- coding: utf-8 -*-

'''
Considere (atribua) para pi o valor 3.14159.
(4/3) * pi * R**3
Entrada:
um número de ponto flutuante
Saida:
mensagem "VOLUME" e o  valor deverá ser apresentado com 3 casas após o ponto.
'''
raio = float(input())
pi = 3.14159

volume = (4/3) * pi * raio ** 3

print('VOLUME = {:.3f}'.format(volume))
