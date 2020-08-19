# -*- coding: utf-8 -*-

'''
Entrada:
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores,
respectivamente dois inteiros e um valor com 2 casas decimais.
Saída:
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo,
lembrando de deixar um espaço após os dois pontos e um espaço após o "R$".
 O valor deverá ser apresentado com 2 casas após o ponto.

# Como a entrada é feita em uma linha, será usada a função .split() para quebrar a string entre os espaços
'''
entrada01 = input().split()
entrada02 = input().split()
# Como o item entrada0n[0] é o código do produto, o conteudo será ignorado

quant01 = int(entrada01[1])
quant02 = int(entrada02[1])
valor01 = float(entrada01[2])
valor02 = float(entrada02[2])

resultado = (quant01 * valor01)+(quant02 * valor02)

print('VALOR A PAGAR: R$ {:.2f}'.format(resultado))
