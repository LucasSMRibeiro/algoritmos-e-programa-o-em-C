//
// Created by lucas on 25/04/2021.
//

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i,s=0,auxiliar,a=0,b=1;
    for(i=0;i<=80;i+=5){
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        if(i!=0)
            s+= auxiliar/i;
        }
    printf("%d",s+100);

}