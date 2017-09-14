#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio
{
	public:
		void setHora(int hora);
		void setMinuto(int minuto);
		void setSegundo(int segundo);
		int getHora();
		int getMinuto();
		int getSegundo();
		void avancarHorario();
		Relogio();
		virtual ~Relogio();
	private:
		int hora, minuto, segundo;
};

#endif
