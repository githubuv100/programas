#include <ctime>
#include <iostream>
#include <cmath> // Cambiado de <math.h> a <cmath> para usar la función log
using namespace std; // Cambiado dos puntos (:) a punto y coma (;)

void mostrarTiempo(clock_t tiempo);

int main() {
	clock_t tiempo = clock();
	long long i = 0;
	double sum = 0;
	for (i = 1; i < 1000000000; i++) { // Cambiado paréntesis a llaves y punto y coma a coma
		sum = sum + log(static_cast<double>(i)); // Cambiado log(double(i)) a log(static_cast<double>(i))
	}
	mostrarTiempo(tiempo);
	cout << "Pulse para salir...";
	cin.get();
	return 0;
}

void mostrarTiempo(clock_t tiempo) {
	tiempo = clock() - tiempo;
	cout << endl << "Tiempo de ejecución es " << static_cast<double>(tiempo) / CLOCKS_PER_SEC << " seg." << endl; // Cambiado clocks_per_sec a CLOCKS_PER_SEC
}
