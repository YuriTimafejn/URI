from math import sqrt

entrada = input().split()
A, B, C = entrada
A = float(A)
B = float(B)
C = float(C)
R1 = 0
R2 = 0

delt = B ** 2 - (4 * A * C)

if delt < 0 or A == 0:
    print('Impossivel calcular')
else:
    delt = sqrt(delt)
    R1 = (-B + delt) / (2 * A)
    R2 = (-B - delt) / (2 * A)
    print('R1 = {:.5f}'.format(R1))
    print('R2 = {:.5f}'.format(R2))
