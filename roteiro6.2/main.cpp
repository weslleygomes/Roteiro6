#include <iostream>
#include "Televisao.h"

int main() {
	Televisao tv;
	tv.setCanal(50);
	tv.setVolume(50);
	int aux;
	int on=1;
	while(on){
		puts("------------------------------------------------");
		std::cout << " -- Channel " << tv.getCanal() << std::endl;
		std::cout << " -- Vol " << tv.getVolume() << std::endl;
		puts("------------------------------------------------");
		std::cout << "1 - Channel +\n"
					 "2 - Channel -\n"
					 "3 - Vol +\n"
					 "4 - Vol -\n"
					 "5 - Exit" << std::endl;
		puts("------------------------------------------------");
		std::cin >> aux;
		switch(aux){
			case 1:
				tv.aumentarCanal();
				break;
			case 2:
				tv.diminuirCanal();
				break;
			case 3:
				tv.aumentarVolume();
				break;
			case 4:
				tv.diminuirVolume();
				break;
			case 5:
				on=0;
				break;
			default:
				puts("ERRO");
		}
		system("cls");
	}
	return 0;
}
