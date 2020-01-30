/***   Included libraries  ***/
#include <BitbloqSoftwareSerial.h>




/***   Global variables and function definition  ***/
const int led = 6;
bqSoftwareSerial bluetooth_de_la_placa( 0, 1, 115200);

String msg = "";
bool l = false;



/***   Setup  ***/void setup(){
pinMode(led, OUTPUT);
bluetooth_de_la_placa.begin(115200);

}


/***   Loop  ***/void loop(){msg = bluetooth_de_la_placa.readString();
if(msg == "light"){if(l == true){digitalWrite(led,LOW);
bluetooth_de_la_placa.print("OFF");
}
else {digitalWrite(led,HIGH);
bluetooth_de_la_placa.print("ON");
}
l = !l;
}
delay(100);
}




