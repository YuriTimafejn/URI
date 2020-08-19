# -*- coding: utf-8 -*-

'''
calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada:
O arquivo de entrada contém três valores com um dígito após o ponto decimal.
Saida:
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas. Com a mensagem:
"[NOME DA FIGURA]: " seguido pelo valor calculado com 3 casas depois da virgula.
'''
entrada = input().split()
A,B,C = entrada

# TRIANGULO RETANGULO A=BASE C = ALTURA
area = (float(A)*float(C))/2
print('TRIANGULO: {:.3f}'.format(area))
# CIRCULO PI = 3.14159 C = raio
area = 3.14159 * float(C)**2
print('CIRCULO: {:.3f}'.format(area))
# TRAPEZIO A,B = BASE C = ALTURA
area = (float(A)+float(B)) * float(C) / 2
print('TRAPEZIO: {:.3f}'.format(area))
# QUADRADO B = LADO
area = float(B) * float(B)
print('QUADRADO: {:.3f}'.format(area))
# RETANGULO A,B = LADOS
area = float(A) * float(B)
print('RETANGULO: {:.3f}'.format(area))
