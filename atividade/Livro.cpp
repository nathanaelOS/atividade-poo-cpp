#include "Livro.hpp"
#include <iostream>
using namespace std;

Livro::Livro(string titulo, int ano, string autor)
    : Item(titulo, ano), autor(autor) {}

string Livro::getAutor() const {
    return autor;
}

void Livro::exibirInfo() const {
    cout << "Livro: " << titulo
         << " | Autor: " << autor
         << " | Ano: " << ano << endl;
}
