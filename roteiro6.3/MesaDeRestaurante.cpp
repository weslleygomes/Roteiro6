#include "MesaDeRestaurante.h"
MesaDeRestaurante::MesaDeRestaurante()
{
}
MesaDeRestaurante::~MesaDeRestaurante()
{
}
void MesaDeRestaurante::adicionaPedido(Pedido px)
{
    p[np]=px;
    np++;
}
void MesaDeRestaurante::zerarPedidos()
{
    np=0;
}

void MesaDeRestaurante::calcularTotal()
{

}
