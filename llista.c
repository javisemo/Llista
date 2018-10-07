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

void LLISTABIOR_esborra (LlistaBiOr* l){
	Node* n;
	if(l -> pdi -> ant != NULL && l -> pdi -> seg != NULL){
		l -> pdi -> ant -> seg = l -> pdi -> seg;
		l -> pdi -> seg -> ant = l -> pdi -> ant;
		n = l -> pdi;
		l -> pdi = l -> pdi -> seg;
		free (n);
	}
}


void LLISTABIOR_destrueix(LlistaBiOr *l){
	LLISTABIOR_vesInici(l);
	while (!LLISTABIOR_esBuida(*l)){
		LLISTABIOR_esborra(l);
	}
	free(l -> pri);
	free(l -> ult);
	l -> pdi = NULL;
	l -> ult = NULL;
}

void LLISTABIOR_retrocedeix(LlistaBiOr *l){
	if (l -> pdi != l-> pri) {
		l -> pdi = l -> pdi -> ant;
	}
}


int LLISTABIOR_fi (LlistaBiOr l){
	return l.pdi == l.ult;
}

int LLISTABIOR_inici (LlistaBiOr l){
	return l.pdi == l.pri;
}

void LLISTABIOR_inserir(LlistaBiOr*l, int n){
	Node* aux = NULL;
	if(LLISTABIOR_esBuida(*l) == 0){
		aux = (Node*)malloc(sizeof(Node));
		if(aux != NULL){
			LLISTABIOR_vesInici(l);
			while (LLISTABIOR_fi(*l)==0){
				if(l -> pdi -> e >= n){
					aux -> e = n;
					aux -> ant = l -> pdi -> ant;
					aux -> seg = l -> pdi;
					l -> pdi -> ant -> seg = aux;
					l -> pdi -> ant = aux;
					l -> pdi = aux;
				}
				else{
					LLISTABIOR_avanca(l);
				}

			}
			if(LLISTABIOR_fi(*l)==1){
				aux -> e = n;
				aux -> ant = l -> pdi -> ant;
				aux -> seg = l -> pdi;
				l -> pdi -> ant -> seg = aux;
				l -> pdi -> ant = aux;
				l -> pdi = aux;
			}
		}
	}
	else{
		aux = (Node*)malloc(sizeof(Node));
		if (aux(!=NULL)){
			l -> pdi = l -> pri;
			aux -> e = n;
			aux -> ant = l -> pdi;
			aux -> seg = l -> pdi -> seg;
			l -> pdi -> seg -> ant = aux;
			l -> pdi -> seg = aux;
			l -> pdi = aux;

		}
	}
	
}


