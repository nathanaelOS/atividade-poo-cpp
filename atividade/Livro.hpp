#ifndef LIVRO_HPP
#define LIVRO_HPP

#include "Item.hpp"

class Livro : public Item {
private:
    string autor;

public:
    Livro(string titulo, int ano, string autor);

    string getAutor() const;

    void exibirInfo() const override;
};

#endif
