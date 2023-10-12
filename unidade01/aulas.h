#include "stm32f4xx.h"
#include "Utility.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>



//lista 01 Unidade 01 
void questao01(void){
RCC-> AHB1ENR |= 1;           // liga o clock do GPIOA
GPIOA -> MODER |= 0b01 << 12; // pino PA6 como saída
while(1){
  GPIOA->ODR |=1 << 6;      //nível alto para o pino
  Delay_ms(250);
  GPIOA->ODR &= ~(1 << 6);  //nível baixo no pino
  Delay_ms(250);
  }
}



void questao02(void){
RCC-> AHB1ENR |= 1;           // liga o clock do GPIOA
GPIOA -> MODER |= 0b01 << 12; // pino PA6 como saída
while(1){
  GPIOA->ODR |=1 << 6;      //nível alto para o pino
  Delay_ms(1900);
  GPIOA->ODR &= ~(1 << 6);  //nível baixo no pino
  Delay_ms(100);
  };
}
void questao03(void){
RCC-> AHB1ENR |= 1;           // liga o clock do GPIOA
GPIOA -> MODER |= 0b01 << 12; // pino PA6 como saída
while(1){
  GPIOA->ODR |=1 << 6;      //nível alto para o pino = desliga
  Delay_ms(1000);
  GPIOA->ODR &= ~(1 << 6);  //nível baixo no pino = liga
  Delay_ms(50);
  GPIOA->ODR |=1 << 6;      //nível alto para o pino
  Delay_ms(50);
  GPIOA->ODR &= ~(1 << 6);  //nível baixo no pino
  Delay_ms(50);
  GPIOA->ODR |=1 << 6;      //nível alto para o pino
  Delay_ms(1000);
  GPIOA->ODR &= ~(1 << 6);  //nível baixo no pino
  Delay_ms(50);
}
}
void questao04(void){
RCC-> AHB1ENR |= 1;           // liga o clock do GPIOA
GPIOA -> MODER |= 0b01 << 12; // pino PA6 como saída
int var = 950;
  
while(1){
  GPIOA->ODR |=1 << 6;      //nível alto para o pino
  Delay_ms(var);
  GPIOA->ODR &= ~(1 << 6);  //nível baixo no pino
  Delay_ms(50);
  var=var-50;
}
}
void questao05(void){
RCC-> AHB1ENR |= 1;           // liga o clock do GPIOA
GPIOA -> MODER |= 0b01 << 12; // pino PA6 como saída
while(1){
  for(int i = 0 ;i < 8; i++){
    GPIOA->ODR ^=(1 << 6);      // alterna o estado do pino PA6
    Delay_ms(50);
    };
    Delay_ms(1000);
}
}
void questao06(void){
RCC-> AHB1ENR |= 1; // liga o clock do GPIOA
GPIOA -> MODER |= 0b01 << 12; // pino PA6 como saída

while(1){
  GPIOA->ODR |=1 << 6;      //nível alto para o pino = desliga
  Delay_ms(1);
  GPIOA->ODR &= ~(1 << 6);  //nível baixo no pino
  Delay_ms(9);
}
}
void questao07(void){
RCC->AHB1ENR |= 1;           // liga o clock do GPIOA
GPIOA->MODER |= 0b01 << 12; // pino PA6 como saída
int contador = 0;
int bool = 1;

while(1){
  GPIOA->ODR &= ~(1 << 6);      //nível baixo para o pino
  Delay_us(contador);
  GPIOA->ODR |=(1 << 6);  // nível alto no pino
  Delay_us(10000-contador);
  contador++;
  if (bool){
    contador=contador+10;
    bool = contador == 10000 ? 0 : 1;
  }
  else
    contador=contador-10;
    bool = contador == 0 ? 1 : 0;
}
void questao08(void){
RCC-> AHB1ENR |= 1;
GPIOA -> MODER |= (0b01 << 12) | (0b01 << 14);
while(1){
  GPIOA->ODR |=1 << 6; //nível alto para o pino
  GPIOA->ODR &= ~(1 << 7);
  Delay_ms(1000);
  GPIOA->ODR &= ~(1 << 6);  //nível baixo no pino
  GPIOA->ODR |=1 << 7;
  Delay_ms(1000);
}
}
void questao09(void){
    RCC-> AHB1ENR |= 1;
    GPIOA -> MODER |= (0b01 << 12) | (0b01 << 14);
    while(1){
          GPIOA->ODR |=1 << 6;
          GPIOA->ODR |=1 << 7;
          Delay_ms(1000);
          GPIOA->ODR &= ~(1 << 6);
          GPIOA->ODR |=1 << 7;
          Delay_ms(1000);
          GPIOA->ODR |=1 << 6;
          GPIOA->ODR &= ~(1 << 7);
          Delay_ms(1000);
          GPIOA->ODR &= ~(1 << 6);
          GPIOA->ODR &= ~(1 << 7);
          Delay_ms(1000);
    }
}



void questao10(void){
    RCC->AHB1ENR |= 1;           // liga o clock do GPIOA
    GPIOA->MODER |= (0b01 << 12) | (0b01 << 14); // conf. os pinos PA6 e PA7 como saída
    int contador = 0;
    int bool = 1;
    while(1){
        GPIOA->ODR &= ~(1 << 6);  //nível baixo para o pino
        GPIOA->ODR |=(1 << 7);
        Delay_us(contador);
        GPIOA->ODR |=(1 << 6);  // nível alto no pino
        GPIOA->ODR &= ~(1 << 7);
        Delay_us(10000-contador);
        if (bool){
            contador=contador+10;
            bool = contador == 10000 ? 0 : 1;
        }
        else
            contador=contador-10;
            bool = contador == 0 ? 1 : 0;
        }



void questao11(void){
    RCC->AHB1ENR |= 1; // liga o clock do GPIOA
    GPIOA->MODER |= (0b01 << 0) | (0b01 << 2) | (0b01 << 4) | (0b01 << 6) | (0b01 << 8) | (0b01 << 10)| (0b01 << 12) | (0b01 << 14); //ligando do PA0 ao PA7
    int i = 0;
    while(1){
        if ((i>>0)&1){
            GPIOA->ODR |=(1 << 0);
        }
        else{
            GPIOA->ODR &= ~(1 << 0);
        }
        if ((i>>1)&1){
            GPIOA->ODR |=(1 << 1);
        }
        else{
            GPIOA->ODR &= ~(1 << 1);
        }
        if ((i>>2)&1){
            GPIOA->ODR |=(1 << 2);
        }
        else{
            GPIOA->ODR &= ~(1 << 2);
        }
        if ((i>>3)&1){
            GPIOA->ODR |=(1 << 3);
        }
        else{
            GPIOA->ODR &= ~(1 << 3);
        }
        if ((i>>4)&1){
            GPIOA->ODR |=(1 << 4);
        }
        else{
            GPIOA->ODR &= ~(1 << 4);
        }
        if ((i>>5)&1){
            GPIOA->ODR |=(1 << 5);
        }
        else{
            GPIOA->ODR &= ~(1 << 5);
        }
        if ((i>>6)&1){
            GPIOA->ODR |=(1 << 6);
        }
        else{
            GPIOA->ODR &= ~(1 << 6);
        }
        if ((i>>7)&1){
            GPIOA->ODR |=(1 << 7);
        }
        else{
            GPIOA->ODR &= ~(1 << 7);
        }
        i++;
        Delay_ms(100);
        }
    }



void questao12(void){
    RCC->AHB1ENR |= (1 << 0);    // liga o clock do GPIOA
    GPIOA->MODER |= ((0b01 << 0)|(0b01 << 2) | (0b01 << 4) | (0b01 << 6) | (0b01 << 8) | (0b01 << 10) | (0b01 << 12)| (0b01 << 14)); // colocando do PA1 ao PA8 como saida
    while(1){
        int cont = 0 ;
        for(int i=cont; i <7;i++){
            GPIOA -> ODR |= (1 << i);
            Delay_ms(200);
            GPIOA -> ODR &= ~(1 << i);
            cont++;
        }
      
        if (cont == 7 ){
            for(int i=7; i >0;i--){
                GPIOA -> ODR |= (1 << i);
                Delay_ms(200);
                GPIOA -> ODR &= ~(1 << i);
                }
            }
        }
    }



void questao13(void){
    RCC-> AHB1ENR |= (1 << 0); // liga o clock do GPIOA
    GPIOA -> MODER |= (0b01 << 0) | (0b01 << 2) | (0b01 << 4); // conf. os pino PA0, PA1 e PA2 como saída usando o 0b01 do primeiro semaforo.
    GPIOA -> MODER |= (0b01 << 6) | (0b01 << 8) | (0b01 << 10); // conf. os pino PA3, PA4 e PA5 como saída usando o 0b01 do segundo semaforo.
    while(1){
        // Semaforo 01
        GPIOA->ODR |=(1 << 0);  //  liga PA0
        GPIOA->ODR |=(1 << 5);  //  liga PA5
        Delay_ms(2000);
        GPIOA->ODR &= ~(1 << 0);
        GPIOA->ODR |= (1 << 1);
        Delay_ms(1000);
        GPIOA->ODR &= ~((1 << 1)|(1 << 5));
        GPIOA->ODR |= ((1 << 3)|(1 << 2));
        Delay_ms(2000);
        GPIOA->ODR &= ~(1 << 3);
        GPIOA->ODR |= (1 << 4);
        Delay_ms(1000);
        GPIOA->ODR &= ~(1 << 2);
        GPIOA->ODR &= ~(1 << 4);
        }
}



void questao14(void){
    RCC ->AHB1ENR |= (1<<0);// liga o clock do GPIOA
    GPIOA->MODER |= (0b01 << 0) | (0b01 << 2) | (0b01 << 4) | (0b01 << 6) |(0b01 << 8) |(0b01 << 10) |(0b01 << 12) |(0b01 << 16) |(0b01 << 18)|(0b01 << 20) |(0b01 << 22);//conf. os pinos de PA1 a PA6 e de PA8 a PA11 como saída.

    int var=500;
    int contador = 0;
    int num[]={ 0b0111111, 0b0000110, 0b1011011, 0b1001111,
                0b1100110, 0b1101101, 0b1111101, 0b0000111,
                0b1111111, 0b1100111, 0b1110111, 0b1111100,
                0b0111001, 0b1011110, 0b1111001, 0b1110001};//Mascaras para os displays de 7 segmentos
    for (int i = 0; i <= 14; i++) {
        GPIOA->ODR |= (num[i]);
        Delay_ms(var);
        GPIOA->ODR &= ~(num[i]);
        contador = contador + 1;
    }
    for (int i = 15; i >= 0; i--) {
        GPIOA->ODR |= (num[i]);
        Delay_ms(var);
        GPIOA->ODR &= ~(num[i]);
    }
}



void questao15(void){
RCC ->AHB1ENR |= (1<<0);// liga o clock do GPIOA
GPIOA->MODER |= (0b01 << 0) | (0b01 << 2) | (0b01 << 4) | (0b01 << 6) |(0b01 << 8) |(0b01 << 10) |(0b01 << 12) |(0b01 << 16) |(0b01 << 18)|(0b01 << 20) |(0b01 << 22)|(0b01 << 24);//conf. os pinos de PA1 a PA6 e de PA8 a PA12 como saída.
int num[]={ 0b0111111, 0b0000110, 0b1011011, 0b1001111,
            0b1100110, 0b1101101, 0b1111101, 0b0000111,
            0b1111111, 0b1100111, 0b1110111, 0b1111100,
            0b0111001, 0b1011110, 0b1111001, 0b1110001};//Mascaras para os displays de 7 segmentos

while(1){
    for (int i=0; i < 15;i++){
        for (int j=0; j < 15;j++){
            Delay_us(300);
            for(int y=0; y < 10; y++){
                GPIOA->ODR |= (num[i]);
                GPIOA->ODR |= (1 << 12);
                GPIOA->ODR &= ~(1 << 11);
                Delay_us(12000);
                GPIOA->ODR &= ~(num[i]);
                GPIOA->ODR &= ~(1 << 12);
                GPIOA->ODR |= (1 << 11);
                GPIOA->ODR |= (num[j]);
                Delay_us(12000);
                GPIOA->ODR &= ~(num[j]);
                GPIOA->ODR &= ~(1 << 1);
                }
            }
        }
    }
}



void questao16(void){
    int cancelada = 0;
} //cancelada



void questao17(void){
    RCC->AHB1ENR |= 1;
    GPIOA->MODER |= (0b01 << 0);
    while(1){
        for(int x = 500; x <= 2500; x+=10){
            GPIOA->ODR |= (1 << 0);
            Delay_us(x);
            GPIOA->ODR &= ~(1 << 0);
            Delay_us(20000-x);
        }
        for(int x = 2500; x >= 500; x-=10){
            GPIOA->ODR |= (1 << 0);
            Delay_us(x);
            GPIOA->ODR &= ~(1 << 0);
            Delay_us(20000-x);
        }
    }
}



void questao18(void){
    RCC-> AHB1ENR |= 0b1001; //Ligar os Clocks GPIOA e GPIOD
    GPIOA -> MODER |= (0b01 << 18) | (0b01 << 20);//Conf. os pinos PA9 e PA10 como saída
    GPIOD -> MODER |= 0b01 << 0;//Conf. o pino PD0 como saída

    while(1){
        GPIOA->ODR &= ~(1<<9);
        GPIOA->ODR |= 1<<10;
    
        int tempo = 0;
        while(tempo <= 2000){
            GPIOD->ODR |= 1<<0;
            Delay_us(tempo);
            GPIOD->ODR &= ~(1<<0);
            Delay_us(2000-tempo);
            ++tempo;
        }
    
        tempo = 2000;
        while(tempo >=0){
            GPIOD->ODR |= 1<<0;
            Delay_us(tempo);
            
            GPIOD->ODR &= ~(1<<0);
            Delay_us(2000-tempo);
            --tempo;
        }
        
        GPIOA->ODR &= ~(1<<10);
        GPIOA->ODR |= 1<<9;
        
        tempo = 0;
        while(tempo <= 2000){
            GPIOD->ODR |= 1<<0;
            Delay_us(tempo);
            
            GPIOD->ODR &= ~(1<<0);
            Delay_us(2000-tempo);
            ++tempo;
        }
        
        tempo = 2000;
        while(tempo >=0){
            GPIOD->ODR |= 1<<0;
            Delay_us(tempo);
            
            GPIOD->ODR &= ~(1<<0);
            Delay_us(2000-tempo);
            --tempo;
        }
    }
}



void questao19(void){
    RCC->AHB1ENR |= 1 << 0;
    GPIOA->MODER |= (0b01 << 0);
    GPIOA->OTYPER |= 1;
    
    while(1){
    GPIOA->ODR ^=(1 << 0);      // alterna o estado do pino PA0
    Delay_ms(500);}
    }
    void questao20(void){
    RCC->AHB1ENR |= 11; // LIGA GIPIO A E B
    GPIOA->MODER |= (0b01 << 0) | (0b01 << 2);
    GPIOB->MODER |= (0b01 << 0) | (0b01 << 2) | (0b01 << 14) | (0b01 << 10);
    
    while(1){
    for(int i=0; i <= 50; i++){
    GPIOB->ODR = 1 << 0; //lado de a1 alimentado
    GPIOA->ODR = 1; // liga pwmde a
    Delay_ms(5);
    
    GPIOA->ODR = 0;// zera
    GPIOB->ODR = (1 << 7); // lado de b
    GPIOA->ODR = (1 << 1); // liga b
    Delay_ms(5);// delay
    GPIOA->ODR = 0; //zera
    GPIOB->ODR = (1 << 1); // liga lado de a1
    GPIOA->ODR = 1; // liga pwm de a
    Delay_ms(5);
    GPIOA->ODR = 0;//zera
    GPIOB->ODR = ( 1 << 5); // liga lado de b
    GPIOA->ODR = (1 << 1); /// liga b
    Delay_ms(5);
    GPIOA->ODR = 0;
        }
    }

    for(int i = 0; i <= 50 ; i++){
        GPIOB->ODR = (1 << 5); // lado de b
        GPIOA->ODR = (1 << 1); // liga b
        Delay_ms(5);// delay
        GPIOA->ODR = 0;// zera
        GPIOB->ODR = 1 << 1; //lado de a1 alimentado
        GPIOA->ODR = 1; // liga pwmde a
        Delay_ms(5);
        GPIOA->ODR = 0; //zera
        GPIOB->ODR = ( 1 << 7); // liga lado de b
        GPIOA->ODR = (1 << 1); /// liga b
        Delay_ms(5);
        GPIOA->ODR = 0;//zera
        GPIOB->ODR = (1 << 0); // liga lado de a1
        GPIOA->ODR = 1; // liga pwm de a
        Delay_ms(5);
        GPIOA->ODR = 0;
    }
}



void questao21(void){
    RCC->AHB1ENR |= (1<<0) | (1<<4); // habilitando o clock da porta A e E
    GPIOA->MODER |= (0b01<<12);  // configurando o pino PA6 como saida
    GPIOE->MODER &= ~(0b11<<6); // configurando o pino PE4 como entrada
    GPIOE ->PUPDR  |= (0b01 << 6); // liga resistor em pull up em PE4
    /*
    00= desligado
    01= pull up
    10= pull down
    11= não aceita
    */
    while(1){
        int leitura = GPIOE->IDR & (1<<3);
        /*
        ODR ESCREVE O PINO
        IDR LER O NIVEL DO PINO
        */
        if(leitura){GPIOA->ODR |= (1 << 6); }
          
        else{ GPIOA->ODR &= ~(1 << 6);}
        }
    }



void questao22(void){
RCC->AHB1ENR |= (1<<0) | (1<<4); // habilitando o clock da porta A e E
GPIOA->MODER |= (0b01<<12) | (0b01<<14);  // configurando o pino PA6 como saida
GPIOE->MODER &= ~((0b11<<8) | (0b11 << 6)); // configurando o pino PE4 como entrada
GPIOE ->PUPDR  |= (0b01 << 8) | (0b01 << 6); // liga resistor em pull up em PE4

while(1){
    int leitura1 = GPIOE->IDR & (1<<3);
    int leitura2 = GPIOE->IDR & (1<<4);
    /*
    ODR ESCREVE O PINO
    IDR LER O NIVEL DO PINO
    */
    if(leitura1){
        GPIOA->ODR |= (1 << 6);
    }
    else
        GPIOA->ODR &= ~(1 << 6);
      
    if(leitura2){
        GPIOA->ODR |= (1 << 7);
    }
    else
        GPIOA->ODR &= ~(1 << 7);
        }
    }



void questao23(void){
    RCC->AHB1ENR |= (1 << 4);
    RCC->AHB1ENR |= 1;

    GPIOE->MODER &= ~(0b11 << 8);
    GPIOE->PUPDR |= (0b01 << 8);
    GPIOA->MODER |= (0b01 << 12) | (0b01 << 10);  
    GPIOA->MODER &= ~(0b11 << 14);
    while (1) {
        if ((GPIOE->IDR & (1 << 4)) == 0) {
            Delay_ms(50);
            if ((GPIOE->IDR & (1 << 4)) == 0) {
                GPIOA->ODR ^= (1 << 6);
                while ((GPIOE->IDR & (1 << 4)) == 0) {
                    Delay_ms(50);
                }
            }
        }
    }
} //com erro



void questao24(void){
RCC->AHB1ENR |= (1<<0) | (1<<4); // habilitando o clock da porta A e E
GPIOA->MODER |= (0b01<<12);  // configurando o pino PA6 como saida
GPIOE->MODER &= ~((0b11<<8) | (0b11 << 6)); // configurando o pino PE4 como entrada
GPIOE ->PUPDR  |= (0b01 << 8) | (0b01 << 6); // liga resistor em pull up em PE4

while(1){
    int leitura1 = GPIOE->IDR & (1<<3);
    int leitura2 = GPIOE->IDR & (1<<4);
    
    if(!leitura2){
        GPIOA->ODR &= ~(1 << 8);
    }
    else{
        GPIOA->ODR |= (1 << 6);
    }    
    if(!leitura1){
        GPIOA->ODR &= ~(1 << 6);
    }
    else 
        GPIOA->ODR |= (1 << 6);
    }
} 



void questao25(void){
#define K0  !(GPIOE -> IDR & (1<<4))
#define K1  !(GPIOE -> IDR & (1<<3))
  
RCC->AHB1ENR |= (1<<0);     //habilita o clock do GPIOA
RCC->AHB1ENR |= (1<<4);    //habilita o clock do GPIOE

GPIOA->MODER |= (0b01 << 12);
GPIOA->MODER |= (0b01 << 14);
GPIOE->MODER &= ~(0b11 << 6);
GPIOE->PUPDR |= (0b01 << 6);
GPIOE->MODER &= ~(0b11 << 8);
GPIOE->PUPDR |= (0b01 << 8);

   while(1){
     (GPIOA->ODR |= (1 << 6));
     (GPIOA->ODR |= (1 << 7));

if(K0 && !K1){
  uint32_t a = 0;
  while(K0){
    Delay_ms(200);
    if(K1){
      if(a<=1000){
      (GPIOA->ODR &= ~(1 << 6));
      (GPIOA->ODR &= ~(1 << 7));
      }
    }
    else
    (GPIOA->ODR |= (1 << 6));
    a += 500;
      }
    }
  }
}



void questao26(void){

#define K0  !(GPIOE -> IDR & (1<<4))
#define K1  !(GPIOE -> IDR & (1<<3))

RCC->AHB1ENR |= 1;         //habilita o clock do GPIOA
RCC->AHB1ENR |= (1<<4);

GPIOA->MODER |= (0b01 << 0);
GPIOE->MODER &= ~(0b01 << 6);
GPIOE->PUPDR |= (0b01 << 6);
GPIOE->MODER &= ~(0b01 << 8);
GPIOE->PUPDR |= (0b01 << 8);
int x = 600;

while(1){
  if(K1 && (x > 600)){
    x-=10;
  }
  if(K0 && (x < 2400)){
    x+=10;
  }
  GPIOA->ODR |= (1 << 0);
  Delay_us(x);
  GPIOA->ODR &= ~(1 << 0);
  Delay_us(20000-x);
  }
}
void questao27(void){
/*k0 = pe4, k1 = pe3, kup = pa0*/
RCC->AHB1ENR |= (1 << 0) | (1<< 2) |(1 << 4);// habilitando o clock da porta A C e E
GPIOE->MODER &= ~((0b11<< 8) | (0b11 << 6)); // configurando o pino PE4 PE3 como entrada
GPIOE ->PUPDR |= (0b01 << 8) | (0b01 << 6); // liga resistor em pull up em pe3 e PE4
GPIOC->MODER |= (0b01 << 0) | (0b01 << 2) | (0b01 << 4) | (0b01 << 6) | (0b01 << 8) | (0b01 << 10)| (0b01 << 12)|(0b01 << 16)|(0b01 << 14); //ligando do PA0 ao PA6
GPIOA ->MODER &= ~(0b11 << 0);
GPIOA ->PUPDR |= (0b11 << 0); // liga resistor em pull down em PA0

while(1){
  int bk0 = GPIOE->IDR & (1<< 4);
  int bk1 = GPIOE->IDR & (1<< 3);
  int bkup = GPIOA->IDR & (1 << 0);
  if (!bk0){
  GPIOC->ODR = 0b0111111;
  }
  if (!bk1){
  GPIOC->ODR = 0b0000110;
  }
  if (!bkup){
  GPIOC->ODR = 0b1011011;
  }
}
}


void questoo28(void){
    int cancelada = 0;
} //cancelada


void questoo29(void){
    int cancelada = 0;
} //cancelada


void questao30(void){
RCC->AHB1ENR |= (1<<2);
GPIOC->MODER |= (0b01<<0)| (0b01<<2) | (0b01<<4) | (0b01<<6); // pinos PC0 a PC3 como saida
GPIOC->MODER &= ~((0b11<<8) | (0b11 << 10) | (0b11 << 12) | (0b11 << 14)); // pinos PC4 a PC7 como entrada
GPIOC ->PUPDR |= (0b01 << 8)|(0b01 << 10)|(0b01 << 12)|(0b01 << 14);

int sequencia[7] ={0,1,2,0,1,2,3};
int jogador[7];
int parada = 0;
int contador = 0;
while(1){

for(int i =0; i<=contador; i++){
          if(sequencia[i] == 0){
              GPIOC -> ODR |= (1<<0);
              Delay_ms(500);
              GPIOC -> ODR &= ~(1<<0);
              Delay_ms(500);
          }
          else if(sequencia[i] == 1){
            GPIOC -> ODR |= (1<<1);
            Delay_ms(500);
            GPIOC -> ODR &= ~(1<<1);
            Delay_ms(500);
          }
          else if(sequencia[i] == 2){
            GPIOC -> ODR |= (1<<2);
            Delay_ms(500);
            GPIOC -> ODR &= ~(1<<2);
            Delay_ms(500);
          }
          else if(sequencia[i] == 3){
            GPIOC -> ODR |= (1<<3);
            Delay_ms(500);
            GPIOC -> ODR &= ~(1<<3);
            Delay_ms(500);
          }
}


   for(int i=0; i<=contador; i++){
       while(1){
        int b0 = GPIOC -> IDR & (1<<4);
        int b1 = GPIOC -> IDR & (1<<5);
        int b2 = GPIOC -> IDR & (1<<6);
        int b3 = GPIOC -> IDR & (1<<7);

        if (!b0){
        GPIOC -> ODR |= (1 << 0);
        jogador[i] = 0;
        Delay_ms(300);
        GPIOC -> ODR &= ~(1 << 0);
        break;
        } 
          
        else{
        GPIOC -> ODR &= ~(1 << 0);
        }
        if (!b1){
        GPIOC -> ODR |= (1 << 1);
        jogador[i] = 1;
        Delay_ms(300);
        GPIOC -> ODR &= ~(1 << 1);
        break;
        }
          
        else{
          GPIOC -> ODR &= ~(1 << 1);
        }

        if (!b2){
        GPIOC -> ODR |= (1 << 2);
        jogador[i] = 2;
        Delay_ms(300);
        GPIOC -> ODR &= ~(1 << 2);
          break;
        } 
        else{
          GPIOC -> ODR &= ~(1 << 2);
        }

        if (!b3){
        GPIOC -> ODR |= (1 << 3);
        jogador[i] = 3;
        Delay_ms(300);
        GPIOC -> ODR &= ~(1 << 3);
        break;
        }
        else{
          GPIOC -> ODR &= ~(1 << 3);
        }
      }
       if(sequencia[i] == jogador[i])
       {
        continue;
       }
       else{
        for(int i=0; i<=2; i++)
        {
        GPIOC -> ODR |= (1<<0);
        GPIOC -> ODR |= (1<<1);
        GPIOC -> ODR |= (1<<2);
        GPIOC -> ODR |= (1<<3);
        Delay_ms(500);
        GPIOC -> ODR &= ~(1<<0);
        GPIOC -> ODR &= ~(1<<1);
        GPIOC -> ODR &= ~(1<<2);
        GPIOC -> ODR &= ~(1<<3);
        Delay_ms(500);
        }
        parada = 1;
       }
      }
   if (parada == 1){
    int sequencia[7] ={0,1,2,3,1,2,3};
        jogador[7];
           contador = 0;
           parada = 0;
   }
   else{
    contador += 1;
   }
   Delay_ms(2000);
   }
}
