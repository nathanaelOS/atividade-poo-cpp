#include "Usuario.hpp"
#include <iostream>
using namespace std;

Usuario::Usuario(string nome) : nome(nome) {}

void Usuario::adicionarItem(Item* item) {
    itens.push_back(item);
}

void Usuario::listarItens() const {
    cout << "\n=== Itens do usuario " << nome << " ===" << endl;
    for (Item* item : itens) {
        item->exibirInfo();
    }
}
