primerNumero  = 6 #input ("Ingrese el primer numero: ")

try:
    primero = int(primerNumero)
except:
    primero = "Cadena"

segundoNumero = 8 #input("Ingrese el segundo numero: ")

try:
    segundo = int(segundoNumero)
except:
    segundo = "Cadena"

if primero == "Cadena" or segundo == "Cadena":
    print("Ingreso mal un dato")