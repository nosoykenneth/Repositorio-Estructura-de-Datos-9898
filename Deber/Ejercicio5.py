lista=[]
pila=[]

for i in range (10):
    dato_ingresado = input("Ingrese 10 elementos a la lista: ")

    try:
        elemento = int(dato_ingresado)
    except:
        elemento = "Cadena"

    if elemento == "Cadena":
        print("El valor ingresado no es un entero")
        exit()

    lista.append(elemento)

longitud = len(lista)
mitad = longitud // 2

for i in range(mitad):
    pila.append(lista[i])

simetrica=True

j = mitad if longitud % 2 == 0 else mitad + 1
while j < longitud:
    elemento = lista[j]
    if elemento != pila.pop():
        simetrica=False
    j += 1

if simetrica:
    print("Es simetrica")
else:
    print("No es simetrica")



