# Creación de una cola vacía utilizando una lista
cola = []

# Solicitar al usuario ingresar 3 elementos para la cola
for i in range(3):
    dato_ingresado = input("Ingrese 3 elementos a la cola: ")

    try:
        # Intentar convertir el dato ingresado a entero
        elemento = int(dato_ingresado)
    except:
        elemento = "Cadena"
        
    if elemento == "Cadena":
        # Mostrar mensaje de error si no es un entero
        print("El valor ingresado no es un entero")
        exit()

    # Agregar el elemento a la cola
    cola.append(elemento)

# Imprimir la cola completa
print(cola)

# Desencolar y mostrar el elemento desencolado
print("Elemento desencolado: ", cola.pop(0))

# Imprimir la cola actualizada después de la desencolación
print(cola)
