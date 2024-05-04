#include<string.h>
int romanToInt(char* s) {
    int result = 0;
    int length = strlen(s);
    for(int i = 0; i < length; i++){
        //CM = 900
        if((i+1)<=length &&s[i] == 'C' && s[i+1] == 'M'){
            result+=900;
            i+=1;
        }
        //M = 1000
        else if(s[i] == 'M'){
            result+=1000;
        }
        //CD = 400
        else if((i+1)<=length && s[i] == 'C' && s[i+1] == 'D'){
            result+=400;
            i+=1;
        }
        //D = 500
        else if(s[i] == 'D'){
            result+=500;
        }
        //XC = 90
        else if((i+1)<=length && s[i] == 'X' && s[i+1] == 'C'){
            result+=90;
            i+=1;
        }
        //C = 100
        else if(s[i] == 'C'){
            result+=100;
        }
        //XL = 40
        else if((i+1)<=length && s[i]=='X' && s[i+1] == 'L'){
            result+=40;
            i+=1;
        }
        //L = 50
        else if(s[i]=='L'){
            result+=50;
        }
        //IX = 9
        else if((i+1)<=length && s[i]=='I' && s[i+1] == 'X'){
            result+=9;
            i+=1;
        }
        //X = 10
        else if(s[i] == 'X'){
            result+=10;
        }
        //IV = 4
        else if((i+1)<=length && s[i]=='I' && s[i+1] == 'V'){
            result+=4;
            i+=1;
        }
        //V = 5
        else if(s[i]=='V'){
            result+=5;
        }
        //I = 1
        else if(s[i] == 'I'){
            result+=1;
        }
    }

    return result;
}
