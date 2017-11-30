# Treinamento Tabuada
O objetivo desse projeto é mostrar como fazer a interface do Arduino com dispositivos básicos de I/O.
Para isso, apresentamos um pequeno projeto de um jogo para ensinar “tabuada” onde as informações são digitadas em um teclado KeyPad 4×4 e exibidos em um LCD 2×16.

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
Os dispositivos são colocados na respectivas saídas como ilustrado na figura abaixo, ressaltando que o resistor de 100 tem a função de fazer com que o som da aplicação seja executado com perfeição, o potenciômetro ajuda na configuração de visibilidade do LCD. O projeto não utiliza resistores para o teclado já que as bibliotecas já fazem essa função pelos seus softwares.

![Resposta Correta](https://github.com/jardimtupa/game/blob/master/imagens/correto.gif)
