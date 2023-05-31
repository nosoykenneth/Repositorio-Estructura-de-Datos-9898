class Madre:
    def __init__(self,apellidoMaterno) -> None:
        self.apellidoMaterno = apellidoMaterno

class Padre:

    def __init__(self,apellidoPaterno) -> None:
        self.apellidoPaterno=apellidoPaterno

class Hijo(Madre,Padre):
    def __init__(self, apellidoMaterno,nombre,profesion) -> None:
        super().__init__(apellidoMaterno)
        self.profesion = profesion
        self.nombre = nombre

Pedro = Hijo("Rodriguez","Juan","Arquitecto")
print(Pedro.nombre, Pedro.apellidoMaterno, Pedro.profesion)