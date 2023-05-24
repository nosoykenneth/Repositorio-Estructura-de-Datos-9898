if 2>8:
    print("2 es mayor que 8")
elif 10>20:
    print("10 es menor a 20")
elif 100<=80:
    print("100 es mayor o igual que 80")
elif 80>=100:
    print("80 es menor o igual que 100")
elif 100!=100:
    print("100 es diferente de 20")
elif 100==101:
    print("100 es igual a 100")
else:
    print("No se cumplio ninguna condicion anterior")

#Operadores ternarios
if 2<10: print("2 es menor a 5")

print("Se imprime si la condicion es verdadera") if 10>2 else print("Se imprime si la condicion es falsa")

#And

if 2<9 and 10<20:
    print("2 es mayor que 9 y 10 es menor que 20")

#Or
if 100<1000 or 20 > 900:
    print("100 es menor que 100 o 20 es mayor que 900")

if not 10<9:
    print("Falso")

dato = "Hola" #input("Por favor ingrese algo: ")

print(dato)

lista = ["Hola","Mundo"]

if lista.count(dato) > 0:
    print("Esta informacion existe:", dato)
else:
    print("Esta informacion no existe",dato)

primerNumero = input("Ingrese el primer numero: ")
segundoNumero = input("Ingrese el segundo numero: ")

primero = int(primerNumero)
segundo = int(segundoNumero)

print(primero + segundo)