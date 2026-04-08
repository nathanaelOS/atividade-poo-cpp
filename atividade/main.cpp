#include "Item.hpp"
#include "Livro.hpp"
#include "Usuario.hpp"

int main() {
    // Objeto Livro na STACK
    Livro livroStack("Dom Casmurro", 1899, "Machado de Assis");

    // Objeto Livro na HEAP (usando new)
    Item* livroHeap = new Livro("O Senhor dos Aneis", 1954, "J.R.R. Tolkien");

    // Instanciar Usuario
    Usuario usuario("Natha");

    // Adicionar itens ao usuario
    usuario.adicionarItem(&livroStack);
    usuario.adicionarItem(livroHeap);

    // Listar itens usando polimorfismo
    usuario.listarItens();

    // Liberar memoria da heap
    delete livroHeap;

    return 0;
}
