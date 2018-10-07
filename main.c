void main(int argc, char const *argv[])
{
    LlistaBiOr l;
    l = LLISTABIOR_crea();
    if(LLISTABIOR_esBuida(l) == 1){
	    printf("La llista ha estat creada i és buida\n");
    }
    LLISTABIOR_inserir(*l, 4);
    LLISTABIOR_inserir(*l, 22);
    LLISTABIOR_inserir(*l, 21);
    LLISTABIOR_inserir(*l, 12);
    LLISTABIOR_inserir(*l, 1);
    LLISTABIOR_inserir(*l, 39);
    LLISTABIOR_vesInici(*l);
    if(LLISTABIOR_esBuida(l) == 0){
	    printf("La llista ha estat omplerta i ja no és buida\n");
    }
    int i = 1;
    int n = 0;
    while(LLISTABIOR_fi(l) == 0){
	    n = LLISTABIOR_consulta(l);
	    printf("Node numero [", i, "] = ", n, "\n");
	    LLISTABIOR_avanca(*l);
	    i++;
    }
    
    LLISTABIOR_vesFinal(*l);
    int i = 6;
    while(LLISTABIOR_inici(l) == 0){
	    n = LLISTABIOR_consulta(l);
	    LLISTABIOR_esborra(*l);
	    printf("Node numero[", i, "] = ", n, " - ESBORRAT\n");
	    LLISTABIOR_retrocedeix(*l);
	    i--;
    }
	
    LLISTABIOR_destrueix(*l);



}
