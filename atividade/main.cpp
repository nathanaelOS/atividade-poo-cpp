#include "Item.hpp"
#include "Livro.hpp"
#include "Usuario.hpp"

int main() {
    
    Livro livroStack("Dom Casmurro", 1899, "Machado de Assis");


    Item* livroHeap = new Livro("O Senhor dos Aneis", 1954, "J.R.R. Tolkien");


    Usuario usuario("Natha");


    usuario.adicionarItem(&livroStack);
    usuario.adicionarItem(livroHeap);


    usuario.listarItens();


    delete livroHeap;

    return 0;
}
