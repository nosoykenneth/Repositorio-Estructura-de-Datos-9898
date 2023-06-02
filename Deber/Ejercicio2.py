# Creación de una pila vacía utilizando una lista
pila = []

# Solicitar al usuario ingresar 3 elementos para la pila
for i in range(3):
    dato_ingresado = input("Ingrese 3 elementos a la pila: ")

    try:
        # Intentar convertir el dato ingresado a entero
        elemento = int(dato_ingresado)  
    except:
        elemento = "Cadena"  

    if elemento == "Cadena":
        # Mostrar mensaje de error si no es un entero
        print("El valor ingresado no es un entero")  
        exit()

    # Agregar el elemento a la pila
    pila.append(elemento)  

# Imprimir la pila completa
print(pila)  

# Desapilar y mostrar el elemento desapilado
print("Elemento desapilado: ", pila.pop())  

# Imprimir la pila actualizada después de la desapilación
print(pila)  