#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>

class Pedido
{
    int numero, quantidade;
    std::string descricao;
    double preco;
    public:
        Pedido(int numero, std::string descricao, double preco);
        Pedido();
        virtual ~Pedido();
};

#endif
