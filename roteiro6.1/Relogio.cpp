#include "Relogio.h"

Relogio::Relogio(){
}

void Relogio::setHora(int hora){
	this->hora=hora;
}

void Relogio::setMinuto(int minuto){
	this->minuto=minuto;
}

void Relogio::setSegundo(int segundo){
	this->segundo=segundo;
}

int Relogio::getHora(){
	return hora;
}

int Relogio::getMinuto(){
	return minuto;
}

int Relogio::getSegundo(){
	return segundo;
}

void Relogio::avancarHorario(){
	segundo++;
	if(segundo>=60){
		segundo=0;
		minuto++;
	}
	if (minuto>=60){
		hora++;
		minuto=0;
	}
	if(hora>=24){
		hora=0;
	}
}

Relogio::~Relogio(){
}
