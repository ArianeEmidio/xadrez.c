
# 🧩 Simulador de Movimentos de Peças de Xadrez em C

Este projeto em linguagem C simula os movimentos de quatro peças do xadrez: **Torre**, **Bispo**, **Rainha** e **Cavalo**, utilizando **recursividade** e **loops complexos**, conforme os requisitos do desafio proposto.

---

### 🔧 Funcionalidades implementadas

- **Torre**: Movimento recursivo para a **direita**.
- **Bispo**: 
  - Movimento **recursivo** (diagonal: cima e esquerda).
  - Movimento com **loops aninhados** (um para cima e outro para esquerda), incluindo `break` e `continue`.
- **Rainha**: Movimento recursivo para a **esquerda**.
- **Cavalo**: Movimento em "L" (**duas casas para cima e uma para a direita**) usando **loops aninhados** com múltiplas variáveis e condições.

---

### 📌 Requisitos atendidos

- Uso de **funções recursivas** nas peças: Torre, Bispo e Rainha.
- Uso de **loops complexos e aninhados** no movimento do Cavalo e também no Bispo.
- Utilização de **`break` e `continue`** para controle de fluxo nos loops.
- Impressão clara no console dos movimentos realizados por cada peça.

---

### 🎮 Exemplo de saída

```bash
Torre:
Direita
Direita
Direita

Bispo (Recursivo):
Cima
Esquerda
Cima
Esquerda

Bispo (Loops com break/continue):
Cima
Esquerda
Cima
Esquerda

Rainha:
Esquerda
Esquerda
Esquerda

Cavalo:
Cima
Cima
Direita
```
---

### 💻 Como executar

Compile o código com um compilador C (como `gcc`) e execute:

```bash
gcc xadrez.c -o xadrez
./xadrez
```

 ## 👩‍💻 Desenvolvido por
 Ariane B. Emidio Pereira – como parte do projeto da disciplina de Linguagem de Programação, da Faculdade de Ciencia da Computação.
