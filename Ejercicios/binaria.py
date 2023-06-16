def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return -1

# Ejemplo de uso
array = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
target = 19
result = binary_search(array, target)

if result != -1:
    print("El elemento", target, "se encuentra en la posición", result)
else:
    print("El elemento", target, "no se encontró en el arreglo.")