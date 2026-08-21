int romanToInt(char* s) {
    int integer = 0;

    int i = 0;
    while(s[i] != '\0') {

        if(s[i] == 'M'){
            integer += 1000;
            if(i!=0) {if(s[i-1] == 'C'){integer += -100;}}
        }
        if(s[i] == 'D'){
            integer += 500;
            if(i!=0) {if(s[i-1] == 'C'){integer += -100;}}
        }
        if(s[i] == 'C'){
            if(s[i+1] != 'M' && s[i+1] != 'D')integer += 100;
            if(i!=0) {if(s[i-1] == 'X'){integer += -10;}}
        }
        if(s[i] == 'L'){
            integer += 50;
            if(i!=0) {if(s[i-1] == 'X'){integer += -10;}}
        }
        if(s[i] == 'X'){
            if(s[i+1] != 'C' && s[i+1] != 'L')integer += 10;
            if(i!=0) {if(s[i-1] == 'I'){integer += -1;}}
        }
        if(s[i] == 'V'){
            integer += 5;
            if(i!=0) {if(s[i-1] == 'I'){integer += -1;}}
        }
        if(s[i] == 'I'){
            if(s[i+1] != 'X' && s[i+1] != 'V')integer += 1;
        }
        
        i++;
    }

    return integer;
}
