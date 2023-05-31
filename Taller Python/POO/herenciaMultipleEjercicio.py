class Yoriichi:
    def __init__(self,profesion) -> None:
        self.profesion=profesion

    def habilidad(self):
        return f"Bailo una danza hereditaria"
        
        
class Tanjuro(Yoriichi):

    def __init__(self,apellido,profesion) -> None:
        super().__init__(profesion)
        self.apellido=apellido
    
    
class Tanjiro(Tanjuro):

    def __init__(self,nombre,apellido,profesion) -> None:
        super().__init__(apellido,profesion)
        self.nombre=nombre

kny = Tanjiro("Tanjiro","Kamado","Carbonero")

print(kny.nombre)
print(kny.apellido)
print(kny.habilidad())
print(kny.profesion)