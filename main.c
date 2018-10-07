#include "llista.h"

int main()
{
    LlistaBiOr l;
    l = LLISTABIOR_crea();
    if(LLISTABIOR_esBuida(l) == 1){
	    printf("\nLa llista ha estat creada i és buida\n");
    }
    LLISTABIOR_inserir(&l, 4);
    LLISTABIOR_avanca(&l);
    LLISTABIOR_inserir(&l, 22);
    LLISTABIOR_avanca(&l);
    LLISTABIOR_inserir(&l, 21);
    LLISTABIOR_avanca(&l);
    LLISTABIOR_inserir(&l, 12);
    LLISTABIOR_avanca(&l);
    LLISTABIOR_inserir(&l, 1);
    LLISTABIOR_avanca(&l);
    LLISTABIOR_inserir(&l, 39);
    
    LLISTABIOR_vesInici(&l);
    
    if(LLISTABIOR_esBuida(l) == 0){
	    printf("La llista ha estat omplerta i ja no és buida\n");
    }
    int i = 1;
    int n = 0;
    while(LLISTABIOR_fi(l) == 0){
	    n = LLISTABIOR_consulta(l);
	    printf("Node numero [%d] = %d\n", i, n);
	    LLISTABIOR_avanca(&l);
	    i++;
    }
    
    LLISTABIOR_vesFinal(&l);
    i = 6;
    while(LLISTABIOR_inici(l) == 0){
	    n = LLISTABIOR_consulta(l);
	    LLISTABIOR_esborra(&l);
	    printf("Node numero[%d] = %d - ESBORRAT\n", i, n);
	    LLISTABIOR_retrocedeix(&l);
	    i--;
    }
    printf("\nElements esborrats, la llista es buida.\n");
    LLISTABIOR_destrueix(&l);
    printf("\nLlista detruida.\n");
    return 0;
}
