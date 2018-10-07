#include <stdio.h>
#include "llistaBidireccional.h"

int main() {

    llistaBID l;
    int test;

    //create llista
    l = LLISTABID_crea();

    LLISTABID_insereix(&l, 10);

    LLISTABID_insereix(&l, 11);

    LLISTABID_insereix(&l, 7);

    LLISTABID_insereix(&l, 17);

    LLISTABID_insereix(&l, -1);

    LLISTABID_insereix(&l, 2);

    LLISTABID_vesInici(&l);

    while(!LLISTABID_fi(l)){

        printf("NUMERO: %d\n", LLISTABID_consulta(l));

        LLISTABID_avanca(&l);

    }

}