class Kenneth:

    def __init__(self,nombre,edad,habilidad):
        self.nombre=nombre
        self.edad=edad
        self.habilidad=habilidad

    def __str__(self) -> str:
        return f"Yo soy {self.nombre}, tengo {self.edad} años y mi habilidad es {self.habilidad}"
    
persona = Kenneth("Kenneth","19","tocar guitarra")
print(persona)