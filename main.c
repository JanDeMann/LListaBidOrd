#include <stdio.h>
#include "llistaBidireccional.h"

int main() {

    llistaBID l;
    int test;

    //create llista
    l = LLISTABID_crea();
    printf("Llista creada\n");

    printf("Afegim numeros: 10, 11, 7, 17, -1, 2\n");

    LLISTABID_insereix(&l, 10);

    LLISTABID_insereix(&l, 11);

    LLISTABID_insereix(&l, 7);

    LLISTABID_insereix(&l, 17);

    LLISTABID_insereix(&l, -1);

    LLISTABID_insereix(&l, 2);

    LLISTABID_vesInici(&l);

    printf("LLista Sencera en ordre:\n");
    while(!LLISTABID_fi(l)){

        printf("NUMERO: %d\n", LLISTABID_consulta(l));

        LLISTABID_avanca(&l);

    }

    printf("\nFiquem PDI al segon element\n");
    LLISTABID_vesInici(&l);
    LLISTABID_avanca(&l);
    printf("PDI: %d\n", LLISTABID_consulta(l));

    printf("Fem retrocedeix\n");
    LLISTABID_retrocedeix(&l);
    printf("PDI: %d\n", LLISTABID_consulta(l));


    printf("\nAfegim mes elements: 20, -5, 33, 48\n");

    LLISTABID_insereix(&l, 20);
    LLISTABID_insereix(&l, -5);
    LLISTABID_insereix(&l, 33);
    LLISTABID_insereix(&l, 48);

    LLISTABID_vesInici(&l);

    printf("LLista Sencera en ordre:\n");
    while(!LLISTABID_fi(l)){

        printf("NUMERO: %d\n", LLISTABID_consulta(l));

        LLISTABID_avanca(&l);

    }

    LLISTABID_vesInici(&l);
    printf("\nAra eliminarem un numero\n");

    LLISTABID_avanca(&l);
    LLISTABID_avanca(&l);
    LLISTABID_avanca(&l);

    printf("Node a eliminar: %d\n", LLISTABID_consulta(l));

    LLISTABID_esborra(&l);
    printf("Node eliminat\n");

    LLISTABID_vesInici(&l);

    printf("LLista Sencera en ordre:\n");
    while(!LLISTABID_fi(l)){

        printf("NUMERO: %d\n", LLISTABID_consulta(l));

        LLISTABID_avanca(&l);

    }


    LLISTABID_destrueix(&l);
    printf("LLISTA DESTRUIDA\n");

}