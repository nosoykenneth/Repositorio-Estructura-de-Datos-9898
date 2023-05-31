pila=[]

pila.append(10)
pila.append(20)
pila.append(30)

while len(pila) > 0:
    print(pila[-1], end = " ")
    pila.pop()