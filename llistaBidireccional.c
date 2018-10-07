//
// Created by jan-e on 07/10/2018.
//

#include "llistaBidireccional.h"


llistaBID LLISTABID_crea(){

    llistaBID l;

    l.cap = (Node*)malloc(sizeof(Node));

    if(l.cap == NULL){

        printf("Error malloc!\n");

    }

    else{

        l.ult = (Node*)malloc(sizeof(Node));

        if (l.ult == NULL) {

            printf("Error malloc2!\n");
            free(l.cap);

        }

        else{

            l.pdi = l.ult;
            l.cap -> seg = l.ult;
            l.ult -> ant = l.cap;
            l.ult -> seg = NULL;
            l.cap -> ant = NULL;

        }

    }

    return l;

}


void LLISTABID_insereixdevant(llistaBID *l, int e){
    Node *aux;

    if (l -> pdi == l-> cap){

        printf("Error de cap\n");

    }

    else{

        aux = (Node*) malloc(sizeof(Node));

        if(aux == NULL){

            printf("Error de malloc\n");

        }

        else{

            aux -> e = e;
            aux -> seg = l -> pdi;
            aux -> ant = l -> pdi -> ant;
            l -> pdi -> ant -> seg = aux;
            l -> pdi -> ant = aux;

        }

    }

}




void LLISTABID_insereixdarrere(llistaBID *l, int e){
    Node *aux;

    if (l -> pdi == l -> ult){

        printf("ErrorINSEREIX DARRERE!\n");

    }

    else{

        aux = (Node*) malloc(sizeof(Node));

        if( aux == NULL){

            printf("Error al malloc\n");

        }

        else{

            aux -> e = e;
            aux -> seg = l -> pdi -> seg;
            aux -> ant = l -> pdi;
            aux -> seg -> ant = aux;
            l -> pdi -> seg = aux;

        }

    }

}




int LLISTABID_consulta(llistaBID l){

    int e;


    if (l.pdi != l.cap && l.pdi != l.ult){

        e = l.pdi -> e;

    }

    return e;

}




void LLISTABID_esborra (llistaBID *l){

    Node *aux;

    if(l -> pdi == l-> cap || l -> pdi == l-> ult){

        printf("Error\n");

    }

    else{

        aux = l -> pdi;
        aux -> ant -> seg = aux -> seg;
        aux -> seg -> ant = aux -> ant;
        l -> pdi = l -> pdi -> seg;
        free (aux);

    }

}




void LLISTABID_avanca (llistaBID *l){

    if (l -> pdi -> seg == NULL){

    }
    else{

        l -> pdi = l -> pdi -> seg;

    }

}




void LLISTABID_retrocedeix(llistaBID *l){

    if (l -> pdi == l -> cap){

        printf("Error\n");

    }

    else{

        l -> pdi == l -> pdi -> ant;

    }

}




void LLISTABID_vesInici(llistaBID *l){

    l -> pdi = l -> cap -> seg;

}




void LLISTABID_vesFinal(llistaBID *l){

    l -> pdi = l -> ult -> ant;

}




int LLISTABID_fi(llistaBID l){

    return l.pdi == l.ult;

}




int LLISTABID_inici(llistaBID l){

    return l.pdi -> ant == NULL;

}




int LLISTABID_buida(llistaBID l){

    return l.cap -> seg == l.ult;


}




void LLISTABID_destrueix(llistaBID *l){

    Node *aux;

    while ( l -> cap != NULL){

        aux = l -> cap;
        l -> cap = l -> cap -> seg;
        free (aux);

    }

    l -> ult = NULL;
    l -> pdi = NULL;
    l -> cap = NULL;

}




