/*
class Elements{
constructor: leer fichero "elements.data"(getline())) y los almacena en el unordered map (comprovar con un contador, que se han cargado todos los elementos, else System("pause"))
unordered map usando los elementos que se combinan como key, y lo que obtenemos como value
}
class Player{

public:
(constructor, deve crear el vector con los elementos aire, fuego, tierra y agua)
combine(elemento 1, elemento 2) -> elimina los 2 elementos y pone el resultado en la ultima posicion del vector. Y suma 1 a la puntuacion
add() -> (copia del elemento)
addBasics() -> (vuelve a a�adir los elementos primarios)
deleteElement() -> (borra elemento y posicion de memoriua que ocupaba)
info(posicion elemento) -> abre pagina de wikipedia
sort() -> se ordena el vector alafabeticamente
clean() -> elimina los elementos repetidos (set -> estructura de datos no repetidos sin key que no a�ade elementos repetidos)
help() -> muestra un tutorial con todas las acciones que puede hacer el jugador

private:
int puntuacion(+1 cada vez que creamos un elemento nuevo)
vector para almacenar los elementos creados

}
*/

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
	std::ifstream fentrada("elements.dat");
	if (fentrada.is_open()) {
		std::unordered_map<std::pair<std::string, std::string>, std::string> elements;
		std::string linia;

		while (getline(fentrada, linia)) {

		}
		//elements[key1, key2] = {value};
	}
}