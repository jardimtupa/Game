//Membros do Grupo
//Simone Santos - RA: 20644947
//Miguel Mlaker - RA: 21020076
//Natalia Lima - RA: 20772347

//Projeto arduino: "Treinamento da tabuada";

//Blibiotecas utilizadas:
#include <Keypad.h>  //Referente ao uso do "keypad" 4x4 (ou teclado matricial 4x4)
#include <LiquidCrystal.h> //referente ao uso do display LiquidCrystal (LCDs) 


//KeyPad definições:
const byte numLinhas= 4; //número de linhas no teclado sendo uma constante
const byte numColunas= 4; //número de colunas no teclado sendo uma constante

char keyMap[numLinhas][numColunas]=
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
  }; // 
byte rowPins[numLinhas] = {9,8,7,6}; //Conecta aos pinos de linha do teclado ( 0 a 3)
byte colPins[numColunas]= {5,4,3,2}; //Conecta aos pinos de colunas do teclado (0 a 3)
Keypad keyPad= Keypad(makeKeymap(keyMap), rowPins, colPins, numLinhas, numColunas);

//LCD Display
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

//Buzzer
int buzzPin = 10; //Conecta a um resistor de 100ohms neste pino
void setup() {
  lcd.begin(16, 2);
  pinMode(buzzPin,OUTPUT); //Buzzer pino
  randomSeed(analogRead(7));//Inicia o gerador de números aleatórios neste pino analógico
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  
  //Classifique dois números aleatoriamente e exibe-os no LCD
  int num1 = random(2, 11);
  int num2 = random(2, 11);
  int result = num1 * num2;
  String mult = String(num1) + " x " + String(num2) + " = ";
  lcd.print(mult);
  // Esperando a resposta do usuário e avalia o resultado
  int hit = readVal().toInt();
  lcd.setCursor(0, 1);
  if (result == hit){
    lcd.print(" CORRETO :-)");
  
  }
  else {
    lcd.print("ERRADO  :-(     " + String(result));
  
  }
  hit = readVal().toInt(); //Apenas esperando por você pressionar qualquer tecla para continuar
}

//Entrada de dados: Digite os valores e pressione "#"
String readVal(){
  String myString = "";
  char keyPressed = keyPad.getKey();
  while (keyPressed != '#'){
    keyPressed = keyPad.getKey();
    if ((keyPressed != NO_KEY) && (keyPressed != '#')) {
      myString.concat(keyPressed);
      lcd.print(keyPressed);
      playTone();
      }   
    }  
  return(myString);  
  }


// Beeps em pressionamentos de teclas
void playTone(){
  tone(buzzPin, 150, 10);
  }
