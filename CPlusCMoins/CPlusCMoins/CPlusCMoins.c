// CPlusCMoins.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int nombreMystere = 0;
    int proposition = 0;
    int essais = 0;
    char rejouer = 'o';

    srand((unsigned int)time(NULL));

    printf("Bienvenue dans le jeu du Plus ou Moins !\n");

    while (rejouer == 'o' || rejouer == 'O') {
        nombreMystere = rand() % 100 + 1;
        essais = 0;

        printf("J'ai choisi un nombre entre 1 et 100. Devine lequel !\n");

        do {
            printf("Ta proposition : ");
            if (scanf_s("%d", &proposition) != 1) {
                printf("Entrée invalide. Veuillez entrer un nombre.\n");
                while (getchar() != '\n');
                continue;
            }

            essais++;

            if (proposition < nombreMystere)
                printf("C'est plus !\n");
            else if (proposition > nombreMystere)
                printf("C'est moins !\n");
            else
                printf("Bravo ! Tu as trouvé le nombre en %d essais !\n", essais);

        } while (proposition != nombreMystere);

        printf("\nVeux-tu rejouer ? (o/n) : ");
        scanf_s(" %c", &rejouer, 1);  // 
    }

    printf("\nMerci d'avoir joué ! A bientôt !\n");
    return 0;
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
