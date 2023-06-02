# Definir una lista de números
numeros = [10, 20, 30, 40, 50,60,70,80,90,100]

# Valor a buscar
buscar = 30

# Realizar la búsqueda
encontrado = False
for numero in numeros:
    if numero == buscar:
        encontrado = True
        break

# Verificar si se encontró el valor
if encontrado:
    print("El valor", buscar, "se encuentra en la lista.")
else:
    print("El valor", buscar, "no se encuentra en la lista.")