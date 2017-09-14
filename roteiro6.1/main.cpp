#include <iostream>
#include "Relogio.h"

int main() {
	Relogio relogio;
	int h, m, s;
	
	std::cout << "Insira hora, minuto e segundo: " << std::endl; 
	std::cin >> h >> m >> s;
	relogio.setHora(h);
	relogio.setMinuto(m);
	relogio.setSegundo(s);
	relogio.avancarHorario();
	std::cout << relogio.getHora() << "h" << relogio.getMinuto() << "m" << relogio.getSegundo() << "s" << std::endl;
	return 0;
}
