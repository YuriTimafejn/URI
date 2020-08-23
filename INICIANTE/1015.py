# -*- coding: utf-8 -*-

entrada0 = input().split()
entrada1 = input().split()
x0, y0 = entrada0
x1, y1 = entrada1

distancia =(((float(x1)-float(x0))**2)+((float(y1)-float(y0))**2)) ** (1/2)
print('{:.4f}'.format(distancia))
