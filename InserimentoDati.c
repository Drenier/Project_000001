#include <stdio.h>
#include <string.h>

int main() {
    // Dichiarazione delle variabili per i dati dell'utente
    char nome[50];
    char cognome[50];
    int eta;
    char sesso[10];
    char commento[200];

    // Stampa di un'intestazione iniziale
    printf("=== RACCOLTA DATI PERSONALI (VERSIONE SEMPLIFICATA) ===\n\n");

    // Lettura del nome
    printf("Inserisci il tuo nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // rimuove il newline

    // Lettura del cognome
    printf("Inserisci il tuo cognome: ");
    fgets(cognome, sizeof(cognome), stdin);
    cognome[strcspn(cognome, "\n")] = '\0'; // rimuove il newline

    // Lettura dell'età
    printf("Inserisci la tua età: ");
    scanf("%d", &eta);
    getchar(); // pulisce il buffer (serve dopo scanf)

    // Lettura del sesso
    printf("Inserisci il tuo sesso (M/F/Altro): ");
    fgets(sesso, sizeof(sesso), stdin);
    sesso[strcspn(sesso, "\n")] = '\0'; // rimuove il newline

    // Lettura del commento finale
    printf("Inserisci un commento finale: ");
    fgets(commento, sizeof(commento), stdin);
    commento[strcspn(commento, "\n")] = '\0'; // rimuove il newline

    // Stampa dei dati raccolti
    printf("\n=== DATI INSERITI ===\n");
    printf("Nome: %s\n", nome);
    printf("Cognome: %s\n", cognome);
    printf("Età: %d\n", eta);
    printf("Sesso: %s\n", sesso);
    printf("Commento: %s\n", commento);

    printf("\nGrazie per aver inserito i tuoi dati!\n");

    return 0;
}
