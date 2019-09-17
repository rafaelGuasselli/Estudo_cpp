    #include<iostream>
    #include <string.h>
    //numero de leds para formar os caracteres:
    #define UM 2
    #define DOIS 5
    #define TRES 5
    #define QUATRO 4
    #define CINCO 5
    #define SEIS 6
    #define SETE 3
    #define OITO 7
    #define NOVE 6
    #define ZERO 6
    using namespace std;

    int main(){
        int n;
        cin >> n;
        if(n >= 1 && n <= 2000){
            while(n > 0){
                int leds = 0;
                char num[100];
                cin >> num;
                for(int i = 0;i < 100;i++){
                    switch (num[i]){
                    case '1':
                        leds += UM;
                        break;
                    case '2':
                        leds += DOIS;
                        break;
                    case '3':
                        leds += TRES;
                        break;
                    case '4':
                        leds += QUATRO;
                        break;
                    case '5':
                        leds += CINCO;
                        break;
                    case '6':
                        leds += SEIS;
                        break;
                    case '7':
                        leds += SETE;
                        break;
                    case '8':
                        leds += OITO;
                        break;
                    case '9':
                        leds += NOVE;
                        break;
                    case '0':
                        leds += ZERO;
                        break;
                    }
                }
                cout<<leds<<" leds"<<endl;
                memset(num,' ',sizeof(char)*100);
                n--;
            }
        }
    }