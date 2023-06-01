cola = []

for i in range (3):
    dato_ingresado = input("Ingrese 3 elementos a la cola: ")

    try:
        elemento = int(dato_ingresado)
    except:
        elemento = "Cadena"

    if elemento == "Cadena":
        print("El valor ingresado no es un entero")
        exit()

    cola.append(elemento)

print("Elemento desencolado: ",cola.pop(0))