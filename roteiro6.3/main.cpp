#include <iostream>
#include "MesaDeRestaurante.h"

using namespace std;
void mostrarCardapio()
{
    cout << "1 - Lazanha rosa com Macaxeira - R$20,00\n"
            "2 - Carne na brasa com morango - R$50,00\n"
            "3 - Creme de peixe a La moisee - R$500,00\n"
            "4 - Pipoca Boku's - R$1,25\n";
}

int main()
{
    Pedido p1 (1, "Lazanha rosa com Macaxeira", 20.0);
    Pedido p2 (2, "Carne na brasa com morango", 50.0);
    Pedido p3 (3, "Creme de peixe a La moisee", 500.0);
    Pedido p4 (4, "Pipoca Boku's", 1.25);
    MesaDeRestaurante mesas[4];

    int s1, s2, nm;
    while(1){
        cout << "----- Restaurante Boa-Vista -----\n\n"
                "1 - Adicionar pedido a mesa\n"
                "2 - Cancelar pedido(s) da mesa\n"
                "3 - Calcular conta da mesa\n"
                "4 - Calcular total do restaurante\n"
                "5 - Exit\n\n"
                "---------------------------------\n";
        cin >> s1;
        switch(s1){
            case 1:
                mostrarCardapio();
                cin >> s2;
                cout << "Para que mesa? ";
                cin >> nm;
                switch(s2){
                    case 1:
                    mesas[nm-1].adicionaPedido(p1);
                    break;
                    case 2:
                    mesas[nm-1].adicionaPedido(p2);
                    break;
                    case 3:
                    mesas[nm-1].adicionaPedido(p3);
                    break;
                    case 4:
                    mesas[nm-1].adicionaPedido(p4);
                    break;
                break;
        }
    }
    return 0;
}
}
