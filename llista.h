#ifndef _LLISTA_H
#define _LLISTA_H

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
void LLISTABIOR_buida(LlistaBiOr l);
void LLISTABIOR_destrueix(LlistaBiOr *l);


#endif
