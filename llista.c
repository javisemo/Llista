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

void LLISTABIOR_avanca (LlistaBiOr* l){
	if(l -> pdi != l -> ult){
		l -> pdi = 1 -> pdi -> seg;
	}
}

int LLISTABIOR_consulta(LlistaBiOr l){
	int n;
	if(l.pdi == l.pri || l.pdi == l.ult){
		n = ELEMENT_INDEFINIT;
	}
	else {
		n = l.pdi -> e;
	}
	return n;
}

int LLISTABIOR_esBuida(LlistaBiOr l){
	return l.pri -> seg == l.ult;
}

void LLISTABIOR_vesInici (LlistaBiOr* l){
	l -> pdi = l -> pri -> seg;
}

void LLISTABIOR_vesFinal (LlistaBiOr* l){
	l -> pdi = l -> ult -> ant;
}


