#include "llista.h"

LlistaBiOr LLISTABIOR_crea(){
	LlistaBiOr l;
	l.pri = (Node*) malloc (sizeof(Node));
	if(l.pri == NULL){
		printf("Error de memòria.");
	}
	else{
		l.ult = (Node*) malloc (sizeof (Node));
		if(l.ult == NULL){
			free (l.pri);
		}
		else{
			l.pdi = l.pri;
			l.pri -> seg = l.ult;
			l.pri -> ant = NULL;
			l.ult -> seg = NULL;
			l.ult -> ant = l.pri;
		}
	}
	return l;
}
