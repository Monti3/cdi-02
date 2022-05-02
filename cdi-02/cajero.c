#include <stdio.h>
#include <math.h>

int main(void){
int monto = 0;

printf("Ingrese un monto a retirar: ");
scanf ("%i", &monto);
 if (monto<20)
    {

        return 1;
    }

    else if (monto> 5000)
        {

            return 2;
        }

else {
int d100 = (monto/ 100);
int d50 = ((monto - d100*100) / 50);
int d20 = ((monto- d50*50 - d100*100)/ 20);
int d5 = ((monto-d20*20- d50*50 - d100*100)/ 5);
int d1 = (monto - d5*5-d20*20- d50*50 - d100*100);

printf ("Billetes de 100: %i", d100);
printf ("\nBilletes de 50: %i", d50);
printf ("\nBilletes de 20: %i", d20);
printf ("\nBilletes de 5: %i", d5);
printf ("\nBilletes de 1: %i", d1);
return 0;
}
}