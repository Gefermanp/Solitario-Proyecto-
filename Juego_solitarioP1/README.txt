Profesor me salta un error cuando trato de usar el getch() para leer la etrada por teclado. y usando cin.get() no me lee las flechas.
https://docs.microsoft.com/es-es/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4996?f1url=https%3A%2F%2Fmsdn.microsoft.com%2Fquery%2Fdev15.query%3FappId%3DDev15IDEF1%26l%3DES-ES%26k%3Dk(C4996)%26rd%3Dtrue

main.cpp
int main()
{
	system("color09");
	utilitario ventana, cursor;
	ventana.ocultarcursor();
	ventana.AjustarVentana(160, 60);
	tablero tablero1;
	tablero1.barajar();//puede comentar esta instruccion para que vea que estan todas las cartas.
	tablero1.dibujarTablero();
	tablero1.colocarCartas(); //para que sean visibles solo cambiar en tablero.cpp funcion ->>colocarcarta() instruccion->> posicion[i].cartaDestapada(x,y)
	tablero1.dibujaComodin();
	tablero1.pedirComodin();
	cin.get();	
	tablero1.pedirComodin();
	cin.get();
	tablero1.pedirComodin();
	cin.get();
	tablero1.pedirComodin();
	cin.get();
	system("pause");
	return 0;
}