A quantidade de registradores e instruções (palavras reservadas) no Assembly depende diretamente da **arquitetura** do processador que você está estudando (como **x86/x86-64** ou **ARM**).

As principais instruções e registradores da arquitetura **x86-64** (a mais comum em PCs e a mais ensinada em cursos de computação):

---

### 1. Registradores Principais (x86-64)

Os registradores são áreas de memória super rápidas dentro da própria CPU.

**Registradores de Uso Geral (64-bit / 32-bit):**

* **RAX / EAX:** Acumulador (usado em operações aritméticas e retorno de funções).
* **RBX / EBX:** Base (usado como ponteiro para dados).
* **RCX / ECX:** Contador (usado para repetições/loops e deslocamento de bits).
* **RDX / EDX:** Dados (usado em entrada/saída, multiplicação e divisão).
* **RSI / ESI:** *Source Index* (índice de origem em operações de strings/vetores).
* **RDI / EDI:** *Destination Index* (índice de destino em operações de strings/vetores).
* **R8 até R15:** Registradores adicionais introduzidos na arquitetura de 64 bits.

**Registradores de Ponteiro e Pilha (*Stack*):**

* **RSP / ESP:** *Stack Pointer* (aponta para o topo da pilha de memória).
* **RBP / EBP:** *Base Pointer* (aponta para a base do quadro de pilha da função atual).
* **RIP / EIP:** *Instruction Pointer* (guarda o endereço da próxima instrução a ser executada).

---

### 2. Instruções Reservadas Comuns (Mnemônicos)

São os comandos que dizem ao processador o que fazer com os dados.

**Movimentação de Dados:**

* `MOV`: Copia dados de uma origem para um destino (`MOV RAX, RBX`).
* `PUSH`: Insere um valor no topo da pilha.
* `POP`: Remove o valor do topo da pilha e salva em um registrador.
* `LEA`: *Load Effective Address* (calcula o endereço de memória e armazena o resultado).

**Operações Aritméticas e Lógicas:**

* `ADD`: Adiciona dois valores.
* `SUB`: Subtrai o segundo valor do primeiro.
* `INC`: Incrementa o valor em +1.
* `DEC`: Decrementa o valor em -1.
* `MUL` / `IMUL`: Multiplicação (sem sinal / com sinal).
* `DIV` / `IDIV`: Divisão (sem sinal / com sinal).
* `AND`, `OR`, `XOR`, `NOT`: Operações bit a bit (*bitwise*).

**Controle de Fluxo e Desvios:**

* `CMP`: Compara dois valores (subtrai mentalmente e define *flags*).
* `TEST`: Executa um `AND` lógico para verificar bits sem alterar os valores.
* `JMP`: Desvio incondicional (*goto* para outro ponto do código).
* `JE` / `JZ`: Desvia se for igual / se o resultado for zero.
* `JNE` / `JNZ`: Desvia se não for igual / se o resultado não for zero.
* `JG` / `JL`: Desvia se for maior / se for menor (com sinal).
* `CALL`: Chama uma função/procedimento.
* `RET`: Retorna de uma função.

**Interrupções e Sistema:**

* `SYSCALL` / `INT`: Realiza uma chamada de sistema ao sistema operacional (Linux/DOS).
* `NOP`: *No Operation* (não faz nada, usado para alinhamento ou tempo).

---

Você está focando no estudo de x86, x86-64 ou ARM (muito usado em celulares e microcontroladores)?