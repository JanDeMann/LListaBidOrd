//
// Created by jan-e on 07/10/2018.
//

#ifndef _LLISTABIDIRECCIONAL_H_
#define _LLISTABIDIRECCIONAL_H_

#include <stdio.h>
#include <stdlib.h>

//node de la llista
typedef struct N{

    int e;
    struct N *seg;
    struct N *ant;

}Node;

//llista
typedef struct{
    Node *cap;
    Node *ult;
    Node *pdi;
}llistaBID;


llistaBID LLISTABID_crea();
//void LLISTABID_insereixdevant ( llistaBID *l, int e );
//void LLISTABID_insereixdarrere ( llistaBID *l, int e );
void LLISTABID_insereix(llistaBID *l, int e);
int LLISTABID_consulta ( llistaBID l );
void LLISTABID_avanca ( llistaBID *l );
void LLISTABID_retrocedeix ( llistaBID *l );
int LLISTABID_fi ( llistaBID l );
int LLISTABID_inici ( llistaBID l );
void LLISTABID_vesInici ( llistaBID *l );
void LLISTABID_vesFinal ( llistaBID *l );
int LLISTABID_buida ( llistaBID l );
void LLISTABID_destrueix ( llistaBID *l );
void LLISTABID_esborra(llistaBID *l);



#endif //LLISTABIDIRECCIONAL_H
