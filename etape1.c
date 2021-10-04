//
// Created by julien on 04/10/2021.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXCHAR 100000

int main() {

    FILE *fp;
    char row[MAXCHAR];
    char *token;

    // On va ouvrir le fichier csv en readable
    fp = fopen("communes_distrib.csv","r");

    while (feof(fp) != true) {
        // On lit toutes les lignes du csv
        fgets(row, MAXCHAR, fp);
        printf("%s", row);

        token = strtok(row, ",");

        char *insee;
        char *nameCommune;
        char *codePostal;
        char *code_commune_INSEE ,nom_commune_postal ,code_postal ,libelle_acheminement ,ligne_5 ,latitude ,longitude ,code_commune ,article ,nom_commune ,nom_commune_complet ,code_departement ,nom_departement ,code_region , nom_region;


        // Tant qu'on a une cellule on va continuer de lire les données
        while(token != NULL) {


            int i = 0;
            // On récupére uniquement les trois premières cellules car les autres ne nous intéressent pas. 
            if (i == 0) {
                i++;
                code_commune_INSEE = token;
            } else if (i == 1) {
                i++;
                nom_commune_postal = token;
            } else if (i == 2) {
                i++;
                code_postal = token;
            } else if (i == 3) {
                i++;
                libelle_acheminement = token;
            } else if (i == 4) {
                i++;
                ligne_5 = token;
            } else if (i == 5) {
                i++;
                latitude = token;
            } else if (i == 6) {
                i++;
                longitude = token;
            } else if (i == 7) {
                i++;
                code_commune = token;
            } else if (i == 7) {
                i++;
                article = token;
            } else if (i == 8) {
                i++;
                nom_commune = token;
            } else if (i == 9) {
                i++;
                nom_commune_complet = token;
            } else if (i == 10) {
                i++;
                code_departement = token;
            } else if (i == 11) {
                i++;
                nom_departement = token;
            } else if (i == 12) {
                i++;
                code_region = token;
            } else if (i == 13) {
                i++;
                nom_region = token;
            }

           // printf("%s", token);
            token = strtok(NULL, ",");
        }
    }

    return 0;
}

