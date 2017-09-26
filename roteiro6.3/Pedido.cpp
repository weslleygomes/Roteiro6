#include "Pedido.h"

Pedido::Pedido(int numero, std::string descricao, double preco)
{
    this->numero=numero;
    this->descricao=descricao;
    this->preco=preco;
}
Pedido::Pedido(){}
Pedido::~Pedido()
{
}
