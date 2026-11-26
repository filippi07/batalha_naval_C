# Batalha Naval em C

Um jogo de Batalha Naval desenvolvido em linguagem C como projeto de prática e aprendizado de programação.

##  Sobre o projeto

O objetivo é encontrar os 5 navios escondidos em um tabuleiro de 10x10. O jogador deve informar as coordenadas para lançar suas bombas e tentar acertar todos os navios.

##  Como jogar

1. Execute o programa.
2. Digite duas coordenadas, separadas por um espaço.
3. As coordenadas devem estar entre 1 e 10.
4. Encontre os 5 navios para vencer o jogo.

### Legenda do tabuleiro

| Símbolo | Significado |
|:---:|---|
| `-` | Posição não revelada |
| `X` | Acerto em um navio |
| `O` | Bomba na água |

## 🛠️ Tecnologias e conceitos utilizados

- Linguagem C
  - Matrizes bidimensionais
  - Funções
  - Ponteiros
  - Estruturas de repetição (`for` e `while`)
  - Condicionais (`if` e `else`)
  - Geração de números aleatórios (`rand` e `srand`)
  - Entrada e saída de dados (`scanf` e `printf`)

##  Como executar

É necessário ter um compilador C, como o GCC.

Compile o programa:

```bash
gcc main.c -o batalha_naval
```

Execute:

```bash
./batalha_naval
```

No Windows PowerShell:

```powershell
.\batalha_naval.exe
```

##  Objetivo

Projeto desenvolvido para praticar conceitos fundamentais da linguagem C, aprimorar a lógica de programação e aplicar os conhecimentos adquiridos durante os estudos.
