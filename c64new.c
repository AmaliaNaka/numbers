#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>


void htoi(char *hex){
    char str[20];
    int i=0;
    int len;
    long base;
    int val=0;
    int num=1;
    
    
    
    int temp;
    int dec=0;
    int c = 0;
    
    len=strlen(hex);
    
    for(i=len-1;i>= 0;i--){
        
        if(hex[i]=='0'){   //ta kanw int me thn atoi
            temp = 0;
        }
        
        else if(hex[i]=='1'){   //ta kanw int me thn atoi
            temp = 1;
        }
        else if(hex[i]=='2'){   //ta kanw int me thn atoi
            temp = 2;
        }
        else if(hex[i]=='3'){   //ta kanw int me thn atoi
            temp = 3;
        }
        else if(hex[i]=='4'){   //ta kanw int me thn atoi
            temp = 4;
        }
        else if(hex[i]=='5'){   //ta kanw int me thn atoi
            temp = 5;
        }
        else if(hex[i]=='6'){   //ta kanw int me thn atoi
            temp = 6;
        }
        else if(hex[i]=='7'){   //ta kanw int me thn atoi
            temp = 7;
        }
        else if(hex[i]=='8'){   //ta kanw int me thn atoi
            temp = 8;
        }
        else if(hex[i]=='9'){   //ta kanw int me thn atoi
            temp = 9;
        }
        
        
        else if(hex[i]=='A'|| hex[i]=='a'){
            temp=10;
        }
        
        else if(hex[i]=='B'|| hex[i]=='b'){
            temp=11;
        }
        
        else if(hex[i]=='C'|| hex[i]=='c'){
            temp=12;
        }
        else if(hex[i]=='D'|| hex[i]=='d'){
            temp=13;
        }
        else if(hex[i]=='E'|| hex[i]=='e'){
            temp=14;
            
        }
        else if(hex[i]=='F'|| hex[i]=='f'){
            temp=15;
        }
        
        /*if(i==len-1){
            num=1;
            //num++;
        }*/
        
       // dec=dec + hex[len-1] *16 *num;
        
        dec = dec + temp * pow((double)16,(double) c);
        c++;
        
            
    }

    printf("the dec num is : %d\n",dec);
    
    
}

int main(){
    char hex[20];
    printf("please give me the number:");
    gets(hex);
    printf("the number given is %s",hex);
    
    /*char **newHex;
    
    newHex = (char **)malloc((strlen(hex) + 1) * sizeof(char *));
    for(i=0;i<strlen(hex);i++){
        newHex[i] = (char *)malloc(2*sizeof(char));
    }*/
    
    
    htoi(hex);
    return 0;
}
