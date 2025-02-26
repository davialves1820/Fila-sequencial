# Fila Sequencial

## 📄 Descrição
Implementação do tipo abstrado de dado fila sequencial em c++. A implementação já acompanha um caso de teste no arquivo main, que demonstra o uso da fila.

---

## 🗂️ Estrutura dos arquivos
- **src**: Contém os arquivos de implementação.
- **include**: Contém o arquivo de cabeçalho da fila.
- **Makefile**: Arquivo de configuração para a compilação do programa.

---

## ⚙️ Como Compilar e Executar

### Compilando o Código

```bash
make
```

### Executando o Programa

```bash
./build/programa
```

---

## 🔧 Funcionalidades
O programa permite realizar as seguintes operações na fila sequencial:
- Criar uma fila vazia;
- Testar se a fila está vazia;
- Verificar se a fila está cheia;
- Obter o tamanho da fila;
- Consultar o elemento da frente da fila;
- Inserir um novo elemento no fundo da fila;
- Remover o elemento da frente da fila;
- Exibir os elementos da fila.

---

## 🖥️ Saída do Programa
Exemplo de funcionamento da fila:

```
Fila criada
Vazia? Sim
Fila: 8
Vazia? Nao
Fila: 8 3
Fila: 8 3 2
Tamanho: 3
Fila: 8 3 2 1
Fila: 8 3 2 1 6
Cheia? Sim
Fila: 3 2 1 6
Fila: 3 2 1 6 9
Fila: 2 1 6 9
Fila: 2 1 6 9 91
Fila: 1 6 9 91
Fila: 1 6 9 91 19
Elemento do top: 1

```
