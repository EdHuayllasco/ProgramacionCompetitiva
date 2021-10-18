#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/* 
        *  -0-
        * |   |
        * 2   1
        * |   |
        *  -3-
        * |   |
        * 5   4
        * |   |
        *  -6-
*/ 
char TabladeConversion[10][7] = {
                      /* 0   1   2   3   4   5   6 */
                /* 0 */ '-','|','|',' ','|','|','-',      
                /* 1 */ ' ','|',' ',' ','|',' ',' ',
                /* 2 */ '-','|',' ','-',' ','|','-',
                /* 3 */ '-','|',' ','-','|',' ','-',
                /* 4 */ ' ','|','|','-','|',' ',' ',
                /* 5 */ '-',' ','|','-','|',' ','-',
                /* 6 */ '-',' ','|','-','|','|','-',
                /* 7 */ '-','|',' ',' ','|',' ',' ',
                /* 8 */ '-','|','|','-','|','|','-',
                /* 9 */ '-','|','|','-','|',' ','-',

};
int main () {        
        // numero de lineas horizontales o verticales
        int num_lineas;        
        //numero a imprimir
        char digitos[9];
        int i, j, k;
        
        while(cin>>num_lineas>>digitos) {
                
            /* 0, ends the program */
            if (num_lineas == 0) {
                return 0;
            }                
            int n = strlen(digitos);
            int digito;    
            for (i = 0; i < 2*num_lineas+3; i++) {                                   
                for (j = 0; j < n; j ++) { 
                    digito = digitos[j] - '0';
                    if ((i % (num_lineas + 1)) == 0) {
                        cout<<" ";
                        for (k = 0; k < num_lineas; k++) {
                            cout<<TabladeConversion[digito][(i / (num_lineas + 1)) * 3];
                        }
                        cout<<" ";
                    }         
                    if (i > 0 && i < (num_lineas + 1)) {
                        cout<<TabladeConversion[digito][2];
                        for (k = 0; k < num_lineas; k++) {
                            cout<<" ";
                        }
                        cout<<TabladeConversion[digito][1];
                    }           
                    if (i > (num_lineas + 1) && i < (2*num_lineas + 2)) {
                        cout<<TabladeConversion[digito][5];
                        for (k = 0; k < num_lineas; k++) {
                            cout<<" ";
                        }
                        cout<<TabladeConversion[digito][4];
                    }                                
                    // si no es el ultimo numero
                    if (j != n-1)
                        cout<<" ";
        
                    }                       
            cout<<endl;            
            }
        cout<<endl;                
        }        
        return 0;
}