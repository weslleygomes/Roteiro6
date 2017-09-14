#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao
{
	public:
		void setVolume(int volume);
		void setCanal(int canal);
		int getVolume();
		int getCanal();
		void aumentarVolume();
		void diminuirVolume();
		void aumentarCanal();
		void diminuirCanal();
		Televisao();
		virtual ~Televisao();
	private:
		int volume, canal;
};

#endif
