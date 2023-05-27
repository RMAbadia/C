void swap(char lista[], char entrada, char saida){
    for(int i = 0; i < strlen(lista); i++){
        lista[i] == entrada ? lista[i] = saida : 0;
    }
}