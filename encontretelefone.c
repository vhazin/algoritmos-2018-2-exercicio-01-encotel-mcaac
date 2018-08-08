#include <stdio.h>

int main()
{
    char frase[30]="";
    int i;    

    while(scanf("%s",&frase) != EOF){
        for(i=0;i<30;i++){
            
            if(frase[i]=='A'||frase[i]=='B'||frase[i]=='C')
            { 
                frase[i]='2';
            }
            else if(frase[i]=='D'||frase[i]=='E'||frase[i]=='F')
            { 
                frase[i]='3';
            }
            else if(frase[i]=='G'||frase[i]=='H'||frase[i]=='I')
            { 
                frase[i]='4';
            }
            else if(frase[i]=='J'||frase[i]=='K'||frase[i]=='L')
            { 
                frase[i]='5';
            }
            else if(frase[i]=='M'||frase[i]=='N'||frase[i]=='O')
            { 
                frase[i]='6';
            }
            else if(frase[i]=='P'||frase[i]=='Q'||frase[i]=='R'||frase[i]=='S')
            { 
                frase[i]='7';
            }
            else if(frase[i]=='T'||frase[i]=='U'||frase[i]=='V')
            { 
                frase[i]='8';
            }
            else if(frase[i]=='W'||frase[i]=='X'||frase[i]=='Y'||frase[i]=='Z')
            { 
                frase[i]='9';
            }
            else if(frase[i]==' ')
            { 
                frase[i]='\0';
            }

        }
    printf("%s\n",frase);
}
    return 0;
}
\\Maria do Carmo Albuquerque Antunes Correia
