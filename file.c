#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct { char nome[50]; int punti; } Squadra;
Squadra lega[MAX]; int n = 0;

void aggiungi() {
    if (n < MAX) { printf("Nome squadra: "); scanf("%s", lega[n].nome); lega[n++].punti = 0; }
}

void aggiorna() {
    char nome[50]; int punti, i;
    printf("Nome squadra: "); scanf("%s", nome);
    for (i = 0; i < n; i++) if (!strcmp(lega[i].nome, nome)) { printf("Punti: "); scanf("%d", &punti); lega[i].punti += punti; }
}

void classifica() {
    int i, j; Squadra t;
    for (i = 0; i < n - 1; i++) for (j = 0; j < n - i - 1; j++) if (lega[j].punti < lega[j + 1].punti) { t = lega[j]; lega[j] = lega[j + 1]; lega[j + 1] = t; }
    for (i = 0; i < n; i++) printf("%d. %s - %d punti\n", i + 1, lega[i].nome, lega[i].punti);
}

int main() {
    int s; do {
        printf("\n1.Aggiungi 2.Aggiorna 3.Classifica 4.Esci\nScelta: ");
        scanf("%d", &s);
        if (s == 1) aggiungi(); else if (s == 2) aggiorna(); else if (s == 3) classifica();
    } while (s != 4);
}