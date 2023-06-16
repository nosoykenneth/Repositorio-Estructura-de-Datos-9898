def busqueda_lineal(lista, tamaño, numero_objetivo):
    # Recorriendo la lista
    for i in range(tamaño):
        # Comprobando el número actual con el número objetivo requerido
        if lista[i] == numero_objetivo:
            return i 
    return -1

# Solicitar al usuario el número objetivo.
numero_objetivo = int(input("Ingrese el número a buscar: "))

# Crear una lista de números enteros.
lista = [5, 2, 8, 10, 3, 7]

tamaño = len(lista)

# Llamar a la función de búsqueda lineal
posicion = busqueda_lineal(lista, tamaño, numero_objetivo)

# Verificar el resultado y mostrar el mensaje correspondiente
if posicion != -1:
    print(f"El número {numero_objetivo} se encuentra en la posición {posicion}.")
else:
    print(f"El número {numero_objetivo} no está presente en la lista.")
