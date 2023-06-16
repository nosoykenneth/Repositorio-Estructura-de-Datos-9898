def exchange_sort(arr):
    n = len(arr)
    
    for i in range(n - 1):
        for j in range(i + 1, n):
            if arr[i] > arr[j]:
                arr[i], arr[j] = arr[j], arr[i]

# Solicitar al usuario una lista de números
numbers = input("Ingresa una lista de números separados por espacios: ").split()
numbers = [int(num) for num in numbers]

# Ordenar la lista utilizando el algoritmo de intercambio
exchange_sort(numbers)

# Imprimir la lista ordenada
print("Lista ordenada:")
print(numbers)