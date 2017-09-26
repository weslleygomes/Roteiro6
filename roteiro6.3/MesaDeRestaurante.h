#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

class MesaDeRestaurante
{
    Pedido p[4];
    int np=0;
    public:
        MesaDeRestaurante();
        virtual ~MesaDeRestaurante();
        void adicionaPedido(Pedido px);
        void zerarPedidos();
        void calcularTotal();
};

#endif
