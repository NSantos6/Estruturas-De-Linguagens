def ffilter(f, copia_lista):
    array = []

    for i in range(1, len(copia_lista)):
        if len(copia_lista) > 0:
            array = ffilter(f, copia_lista[1:])

    valor = copia_lista[0] # Pega o elemento da primeira posição e joga na var valor
    
    if f(valor):
        array.insert(0, valor)

    return array
    

def ehAdulto(x):
	if x > 18:
		return True
	else:
		return False

idades  = [48,35,5, 12, 17, 18, 24, 32,55,29, 10]

adultos = ffilter(ehAdulto, idades) # Retorna um Array filtrado com a condição definida na função 'ehAdulto'

for k in adultos: #Varre os elementos filtrados e printa na tela
	print(k)
