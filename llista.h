#ifndef _LLISTA_H
#define _LLISTA_H

#include <stdio.h>

#define ELEMENT_INDEFINIT -1

typedef struct _Node{
    int e;
    struct _Node * seg;
    struct _Node * ant;

} Node;

typedef struct {
    Node *pri;
    Node *ult;
    Node *pdi;
}LlistaBiOr;

LlistaBiOr LLISTABIOR_crea();
void LLISTABIOR_inserir(LlistaBiOr *l, int n);
void LLISTABIOR_avanca(LlistaBiOr *l);
void LLISTABIOR_retrocedeix(LlistaBiOr *l);
int LLISTABIOR_consulta(LlistaBiOr l);
int LLISTABIOR_esBuida(LlistaBiOr l);
void LLISTABIOR_destrueix(LlistaBiOr *l);
void LLISTABIOR_vesInici(LlistaBiOr* l);
void LLISTABIOR_vesFinal(LlistaBiOr* l);
void LLISTABIOR_esborra(LlistaBiOr* l);
#endif
