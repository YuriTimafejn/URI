entrada = input().split()
cod, quant = entrada
cod = int(cod)
quant = int(quant)

if cod == 1:
    print('Total: R$ {:.2f}'.format(quant * 4.0))
elif cod == 2:
    print('Total: R$ {:.2f}'.format(quant * 4.5))
elif cod == 3:
    print('Total: R$ {:.2f}'.format(quant * 5.0))
elif cod == 4:
    print('Total: R$ {:.2f}'.format(quant * 2))
elif cod == 5:
    print('Total: R$ {:.2f}'.format(quant * 1.5))
