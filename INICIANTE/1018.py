'''
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o
 valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre
  o valor lido e a relação de notas necessárias.
Entrada

O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
Saída

Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.

'''
N = int(input())

print('{}'.format(N))
print('{} nota(s) de R$ 100,00'.format(N // 100 ))
N = N % 100
print('{} nota(s) de R$ 50,00'.format(N // 50))
N = N % 50
print('{} nota(s) de R$ 20,00'.format(N // 20))
N = N % 20
print('{} nota(s) de R$ 10,00'.format(N // 10))
N = N % 10
print('{} nota(s) de R$ 5,00'.format(N // 5))
N = N % 5
print('{} nota(s) de R$ 2,00'.format(N // 2))
print('{} nota(s) de R$ 1,00'.format(N % 2))
