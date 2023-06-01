pila=[]

palabra=input("Ingrese una palabra: ")

for caracter in palabra:
    pila.append(caracter)

palabra_invertida = ""
while not len((pila)) == 0:
    caracter = pila.pop()
    palabra_invertida += caracter

if palabra == palabra_invertida:
    print(f"{palabra} si es palindromo")
else:
    print(f"{palabra} no es palindromo")