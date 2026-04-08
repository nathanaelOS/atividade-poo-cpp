# Atividade Prática – Programação Orientada a Objetos em C++

## Descrição

Sistema simples desenvolvido em C++ aplicando conceitos de **Programação Orientada a Objetos**, incluindo classes, encapsulamento, herança, polimorfismo, composição e noções de memória (stack vs heap).

## Estrutura do Projeto

```
.
├── Item.hpp      # Declaração da classe base Item
├── Item.cpp      # Implementação da classe base Item
├── Livro.hpp     # Declaração da classe derivada Livro
├── Livro.cpp     # Implementação da classe derivada Livro
├── Usuario.hpp   # Declaração da classe Usuario
├── Usuario.cpp   # Implementação da classe Usuario
├── main.cpp      # Função principal
└── README.md
```

## Como Compilar e Executar

```bash
g++ main.cpp Item.cpp Livro.cpp Usuario.cpp -o programa
.\programa
```

## Saída Esperada

```
=== Itens do usuario Natha ===
Livro: Dom Casmurro | Autor: Machado de Assis | Ano: 1899
Livro: O Senhor dos Aneis | Autor: J.R.R. Tolkien | Ano: 1954
```
