# Treinamento Tabuada
A finalidade desse projeto é mostrar como fazer a interface do Arduino com dispositivos básicos de I/O.
Para isso, apresentamos um pequeno protótipo de um jogo para ensinar “tabuada” onde as informações são digitadas em um teclado KeyPad 4×4 e exibidos em um LCD 2×16.

# Diagrama de Atividade 
![Diagrama_Atividade](https://github.com/jardimtupa/game/blob/master/diagrama_de_atividade.PNG)


# Materiais  Utilizados
- 1 Arduino Uno;
- 1 KeyPad 4x4;
- 1 LCD 2x16;
- 1 Resistor 100 Ω;
- 1 Potenciêmetro 1k;
- 1 Piezzo Buzzer 5v;
- Fios Jumpers em geral.

# Bibliotecs Utilizadas
Para total funcionalidade foram utilizadas duas bibliotecas Open Source IDE.

# KeyPad
Consiste basicamente numa biblioteca para a utilização de uma matriz formada a partir das teclas de uma tela Matriarcal.

# LiquidCrystal
Essa Biblioteca faz com que uma placa Arduino Uno consiga manipular diversos displays Liquid Crystal que tem como base no chipset Hitachi HD44780(ou equivalente), que é encontrado na maioria dos LCDS baseados em texto. A biblioteca funciona com um modo de 4 ou 8 bits. 

# Montagem
Os dispositivos são colocados na respectivas saídas como ilustrado na figura abaixo, ressaltando que o resistor de 100 Ω tem a função de fazer com que o som da aplicação seja executado com perfeição, o potenciômetro ajuda na configuração de visibilidade do LCD. O projeto não utiliza resistores para o teclado já que as bibliotecas já fazem essa função pelos seus softwares.

![Montagem Figura 1](https://github.com/jardimtupa/game/blob/master/imagens/montagem.png)

# Funcionalidade do Projeto
A aplicação escolhe de forma aleatória dois números que são multiplicados e exibidos automaticamente na inicialização. Feito isso, a aplicação espera a entrada de dados, no caso a resposta do usuário, sinalizando sua escolha como resposta. Quando feita tal ação será emitido um som sinalizando o aguardo do pressionamento do botão "#" da tela Matriarcal para fazer o próximo passoque consiste na tomada de decisão, baseada na verificação da importação da resposta. Se a resposta for a correta sera exibida uma mensagem característa de acerto, caso contrário, a mensagem característa sera de equivoco. 

![Errado&Correto](https://github.com/jardimtupa/game/blob/master/imagens/dois.gif)

# Pontos interessantes na realização do projeto
- As bibliotecas (keypad.h e LiquidCrystal.h) estão disponíveis através do gerenciador de bibliotecaa do IDE Arduino;
- O arquivo pitches.h contém definições de notas musicais usadas na canção “Happy Birthday to You”;
- A matriz Keymap define os caracteres do teclado;
- A função randomSeed inicializa o gerador de números aleatórios através da  pino A7 analógico.

