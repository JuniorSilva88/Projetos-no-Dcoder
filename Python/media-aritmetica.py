
aluno = input('Para iniciar digite seu nome ')
n1 = float(input('Digite a nota do 1º bimestre '))
n2 = float(input('Digite a nota do 2º bimestre '))
n3 = float(input('Digite a nota do 3º bimestre '))
média =(n1+n2+n3)/3
print('Suas notas foram {:.1f}, {:.1f} e {:.1f}, sua média foi {:.1f}'.format(n1, n2, n3, média))
if 7 > média >=5:
    print('Você {} está de Exame.'.format(aluno))
elif média < 5:
    print('Você {} está Reprovado.'.format(aluno))
elif média >= 7:
    print('Parabéns {}, você está Aprovado.'.format(aluno))
