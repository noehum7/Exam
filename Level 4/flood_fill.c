#include "flood_fill.h"

// Función recursiva de relleno:
	// cur: punto actual en la recursión
	// to_fill: carácter original que queremos reemplazar
void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	// 1. Comprueba límites y carácter
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x 
        || tab[cur.y][cur.x] != to_fill)
		return ;
	// 2. Rellena posición actual
	tab[cur.y][cur.x] = 'F';
	// 3. Rellena en 4 direcciones
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill); // Izquierda (x-1)
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill); // Derecha (x+1)
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill); // Arriba (y-1)
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill); // Abajo (y+1)
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	// Inicia el relleno desde el punto begin
	fill(tab, size, begin, tab[begin.y][begin.x]);
	/*
	tab[begin.y][begin.x] // Obtiene el carácter en posición inicial
	tab[y][x] porque:
	- Primera dimensión [y]: selecciona la fila
	- Segunda dimensión [x]: selecciona la columna
	*/
}

/*
Entrada:
1 1 1
1 1 0
1 0 0

Punto inicio (1,1)

Resultado:
F F 1
F F 0
1 0 0
*/

/*
Nombre de la tarea: flood_fill
Archivos esperados: *.c, *.h
Funciones permitidas: -
-------------------------------------------------- ------------------------------

Escriba una función que tome un char ** como una matriz bidimensional de char, a
size como las dimensiones de esta matriz y begin como punto de partida.

A partir del punto t 'begin' dado, esta función llena una zona completa
reemplazando los caracteres del interior con el carácter 'F'. Una zona es un grupo de
el mismo caracter delimitado horizontal y verticalmente por otros caracteres
o el límite de la matriz.

La función Flood_fill no se llenará en diagonal.

La función Flood_fill tendrá un prototipo de esta manera:
  void  flood_fill(char **tab, t_point size, t_point begin);

La estructura t_point tiene un prototipo así:

  typedef struct 	s_point
  {
    int 	x;
    int 	y;
  } 	t_point;
*/