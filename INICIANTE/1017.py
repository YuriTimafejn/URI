# -*- coding: utf-8 -*-

'''
utilizar um automóvel que faz 12 KM/L.
Para efetuar o cálculo, deve-se fornecer o tempo gasto
na viagem (em horas) e a velocidade média durante
a mesma (em km/h). Assim, pode-se obter distância
percorrida e, em seguida, calcular quantos litros seriam
necessários. Mostre o valor com 3 casas decimais após
o ponto.
Entrada
O arquivo de entrada contém dois inteiros. O primeiro
é o tempo gasto na viagem (em horas) e o segundo
é a velocidade média durante a mesma (em km/h).
Saída
Imprima a quantidade de litros necessária para realizar
a viagem, com três dígitos após o ponto decimal
'''

entrada0 = int(input())
entrada1 = int(input())

consumo = (entrada0 * entrada1) / 12

print('{:.3f}'.format(consumo))
