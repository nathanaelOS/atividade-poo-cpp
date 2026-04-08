#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <vector>
#include "Item.hpp"
using namespace std;

class Usuario {
private:
    string nome;
    vector<Item*> itens;

public:
    Usuario(string nome);

    void adicionarItem(Item* item);
    void listarItens() const;
};

#endif
