#include<Servo.h>

int servo1 = 9; //servo es una palabra reservada, no la podemos usar como nombre de variable

//Se le dice que hay un Servo que esta conectado en el pin llamado servo		
Servo servo; //Esta es una función de la librería 

//Luego debemos darle un ángulo inicial
int angulo = 0; //Donde vamos a guardar el ángulo.

void setup() {

//vamos a utilizar una función de la librería servo
servo.attach(servo1); //De nuestro objeto servo le decimos que agarre la función de attach,
                      // que significa asignar, y le vamos a asignar el servo al pin 9

//Ahora el microcontrolador sabe que tiene conectado un servomotor en el pin 9 gracias a la librería servo.h

}

void loop() {
// Arduino usa Lenguaje: C/C++ (una versión simplificada y adaptada para Arduino).
//la estructura for en Arduino se escribe igual que en C, tenemos que declarar
//una variable inicial que tenemos que va a ser angulo y va inicializarse en 0
//como segundo atributo del ciclo for la condición que angulo sea menor que 180
//Y luego le voy a decir que incremente angulo de uno en uno.

for(angulo = 0; angulo < 180; angulo++){ //incrementa de 1 en 1

//No se lo hemos escrito al pin de salida. Hay que decirle al pin de salida que se lo ponga en ese ángulo.
// Y eso lo vamos a hacer con la función servo.write

servo.write(angulo); 
delay(30); //Le damos un delay para que se espere en lo que pasa al siguiente ángulo. 30ms
}

}
