#include "Item.hpp"
#include <iostream>
using namespace std;

Item::Item(string titulo, int ano) : titulo(titulo), ano(ano) {}

string Item::getTitulo() const {
    return titulo;
}

int Item::getAno() const {
    return ano;
}

void Item::exibirInfo() const {
    cout << "Item: " << titulo << " | Ano: " << ano << endl;
}
