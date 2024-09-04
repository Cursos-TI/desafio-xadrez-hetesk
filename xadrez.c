#include <stdio.h>
#include <unistd.h>  // Para usar a função sleep()

//Eu já sou programador de computador
//estarei usando constante tipada pra facilitar
// desta forma fica mais fácil pra mim 
// digitar criar o programa usando o ambiente IDE ao meu favor!

struct Tpeca {
    const int BISPO;
    const int TORRE;
    const int RAINHA;
};

// Aqui eu instanciarei a constante GLOBAL tipada 
const struct Tpeca peca = {5, 5, 8};


// função para imprimir bisbo como recursão.
//Obs, acho que este curso deveria chamar isso de PILHA e não recursão
void moverBispoRecursivo(int indice) {
    if (indice > peca.BISPO) {
        return;  // Caso base: termina a recursão
    }
    printf("\nMovendo a peca BISPO: %d", indice);
    sleep(1);
    moverBispoRecursivo(indice + 1);  // Chamada recursiva com o próximo índice
}


int main() {
	int indice = 1;
	
	printf("\n\n MOVENDO BISPO PARA DIAGONAOL SUPERIOR DIREITA COM O FOR ..."); //Quebra de linha pra separar

    // Usando for para a contagem de BISPO
    for (indice = 1; indice <= peca.BISPO; indice++) {
        printf("\nMovendo a peca BISPO: %d ", indice);  // 
        sleep(1);  // Pausa por 1 segundo
    }

    printf("\n\n MOVENDO A TORRE PARA A DIREITA USANDO O WHILE..."); //Quebra de linha pra separar

    // Usando while para a contagem de TORRE
    indice = 1;
    while (indice <= peca.TORRE) {
        printf("\nMovendo a peca TORRE: %d", indice);  // Atualiza a contagem para TORRE
        sleep(1);  // Pausa por 1 segundo
        indice++; //incrementando indice
    }

	printf("\n\n MOVENDO A RAINHA PARA A ESQUERDA USANDO O DO WHILE..."); 
	
    // Usando do-while loop para a contagem de RAINHA
    indice = 1;
    do {
        printf("\nMovendo a peca  RAINHA: %d", indice);  // Atualiza a contagem para RAINHA
        sleep(1); // Pausa por 1 segundo
        indice++;//incrementando indice
    } while (indice <= peca.RAINHA);

     

	printf("\n\n MOVENDO BISPO PARA DIAGONAOL SUPERIOR DIREITA COM O RECURCAO..."); 
    
// Usando recursão para a contagem de BISPO
    moverBispoRecursivo(1);
    printf("\n");  // Para quebrar a linha após a contagem recursiva de BISPO
    
    return 0; 
    
}

//Consideração: É LAMENTÁVEL NÃO ENSINAR O CONCEITO DE PILHA NESTE CURSO!!!
//Em provas e concurso não será chamado de recursão mas de pilha.
