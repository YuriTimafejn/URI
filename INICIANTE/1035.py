# -*- coding: utf-8 -*-

entrada = input().split()
A, B, C, D = entrada
A = int(A)
B = int(B)
C = int(C)
D = int(D)

SUM0 = C + D
SUM1 = A + B

if ((B > C and D > A) and (SUM0 > SUM1) and (C > 0 and D > 0) and (A % 2 == 0)):
    print('Valores aceitos')
else:
    print('Valores não aceitos')
