#include <ArduinoJson.h>
// Acuerdate que es necesario esta cosa pq si no no se sube a la placa

#include <CTBot.h>
CTBot miBot;
// Incluye libreria para controlar el bot e inicializa
#include "token.h"


void setup() {// Inicio del SetUp


// ------------------- Componentes de lo Basico -------------------

  // Aqui inicializas el serial
  Serial.begin(115200);

  // Aqui Mandas mensaje por serial de que iniciaras la conexion wifi
  // y realizas la conexion
  Serial.println("Telegram Bot has started");
  miBot.wifiConnect(ssid,password);

  // Aqui conectas con el bot de telegram atravez de la pestaña token.h
  // Esta pestaña tiene los valores del token, el ssid y password 
  miBot.setTelegramToken(token);

  // Testeas la conexion, si es correcta mandas mensaje
  // Yo lo puse en ingles pero tu puedes poner lo que quieras
  if(miBot.testConnection()){
  Serial.println("\n Hello Captain");
  Serial.println("\n All Systems Online");
    
  }else{
  // Si la conexion no se realiza mandas mensaje de error
  // Igual puedes mandar lo que quieras pero que se entienda
  // que algo falló
  Serial.println("\n Connection had failure :c");
  }


// ------------------ Fin de los componentes Basicos ------------


// ------------------ Componentes de lo Extra --------------------

  pinMode(2,OUTPUT);


// ----------- Fin de los componentes extra ---------------  


}// Fin del SetUp


// En el loop va todo lo que va a hacer el bot
void loop() {
// Tienes que crear una variable de TBMessage para controlar
   TBMessage msg;

// Aqui verificamos que el mensaje sea un mensaje de texto
   if(CTBotMessageText == miBot.getNewMessage(msg)){


// -------------------------- I BASICO ------------------------------


    // Si logra pasar la verificion se vera reflejado en el serial
    // Escribiremos quien mandó el mensaje y el mensaje que mandó
    // En ese orden
    Serial.print("Mensaje: ");
    Serial.print(msg.sender.firstName);
    Serial.print(" - ");
    // el texto del mensaje se puede sacar con msg.text
    Serial.print(msg.text);
    Serial.print("\n");

    // Responderemos con el mismo mensaje al sender que es quien envia
    // y el msg.text que es lo que el mandó
    miBot.sendMessage(msg.sender.id,msg.text);
   

// ----------------------- F BASICO ---------------------------------


// ----------------------- I EXTRA --------------------------------


// Aqui comparamos el mensaje con una cadena de texto para hacer
// Diferentes cosas dependiendo del caso
// Si nos dice Hola responderemos un Kiubo perro
  if(msg.text.equalsIgnoreCase("Hola")){
  miBot.sendMessage(msg.sender.id,"Kiubo Eseee");
  miBot.sendMessage(msg.sender.id,"Soy un robot");
  miBot.sendMessage(msg.sender.id,"🤖");
  miBot.sendMessage(msg.sender.id,"Bip Bop");
  
  }
  
  if(msg.text.equalsIgnoreCase("Encender")){
  digitalWrite(2,HIGH);  
  miBot.sendMessage(msg.sender.id,"Led Encendido");
  }

  if(msg.text.equalsIgnoreCase("Apagar")){
  digitalWrite(2,LOW);  
  miBot.sendMessage(msg.sender.id,"Led Apagado");
  }

  
  
   }
    delay(500);
  
}
