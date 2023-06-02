lista=[]

for i in range (5):

    dato_ingresado=input("Ingrese numeros a la lista (solo 5 numeros permitidos): " )

    try:
        elemento = int(dato_ingresado)
    except:
        elemento = "Cadena"

    if elemento == "Cadena":
        print("El valor ingresado no es un entero")
        exit()
    
    lista.append(elemento)

ordenada=True

for j in range(len(lista)-1):  
    if lista[j]>lista[j+1]:
        ordenada=False
        break

if ordenada:
    print("La lista esta ordenada de forma ascendente")
else:
    print("La lista no está ordenada de forma ascendente")







