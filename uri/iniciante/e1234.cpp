    #include<iostream>
    #include<ctype.h>
    using namespace std;

    int main(){
        char texto[50];
        while(!cin.eof()){
            cin.getline(texto, 50);
            for(int i = 0;i < 50;i++){
                if(isalpha(texto[i])){
                    if(islower(texto[i])){
                        texto[i] = toupper(texto[i]);
                    }else{
                        texto[i] = tolower(texto[i]);
                    }
                }
            }
            cout<<texto<<endl;
        }
    }