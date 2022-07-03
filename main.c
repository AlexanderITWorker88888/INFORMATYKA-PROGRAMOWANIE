#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{


int main() {
    double E1=5, E2=3, E3=4,
           R1=2, R2=4, R3=12, R4=8,
           i1, i2, i3, i4, P,
           W, W1, W2;

           W =(R1+R4)*(-R2-R4)-(-R4)*R4;
           W1=E1*(-R2-R4)-(-R4)*(-E2);
           W2=(R1+R4)*(-E2)-E1*R4;
           i1=W1/W;
           i2=W2/W;
           i3=(E1+E2+E3)/R3;
           i4=i1-i2;
           P=R1*i1*i1+R2*i2*i2+R3*i3*i3+R4*i4*i4;
    printf("Prady galeziowe:\ni1 =%6.2f A\ni2 =%6.2f A\ni3 =%6.2f A\ni4 =%6.2f A\n", i1, i2, i3, i4);
    printf("\nWydzielana moc calkowita %6.2f W\n\n", P);
    return 0;
}
}
