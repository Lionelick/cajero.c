#include <stdio.h>
int main (void){
    int b100, b50, b20, b10, b5, b1;
    int monto;
    printf ("Ingresar monto:  ")
    scanf ("%d", &monto)

    if (monto>5000){
        printf ("Su monto supera la cantidad máxima");
        return 2;
    }
    if (monto<20){
        printf ("Cantidad insuficiente");
        return 1;
    }
    for (b100=0; monto>=100;b100++){
        monto=monto-b100;
    }
    for (b50=0; monto>=50;b50++){
        monto=monto-b100;
    }
    for (b20=0; monto>=20;b20++){
        monto=monto-b100;
    }
    for (b10=0; monto>=10;b10++){
        monto=monto-b100;
    }
    for (b5=0; monto>=5;b5++){
        monto=monto-b100;
    }
    for (b1=0; monto>=100;b1++){
    }
