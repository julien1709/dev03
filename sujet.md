# dev03 - Lecture d'un fichier CSV et recherche d'informations

Objectifs / conseils:
- programmation structurée et ré-utilisation de code
- programamtion défensive
- https://en.wikipedia.org/wiki/Data-driven_programming
- utiliser des fonctions et des variables locales
- utiliser des structures de données
- utilisation des arguments de la ligne de commande
- Lecture de fichier CSV
- Fournir le fichier Makefile pour compiler vos programmes
- Attention: pas de fichiers binaires sur github
- le fichier CSV est compressé avec gzip

## 1 - Lecture du fichier CSV

- Lire la première ligne du fichier et mémoriser les positions et les libellés des champs
- afficher les informations précédées du libellé du champ pour les 3 premiers enregistrements
- Sauter une ligne entre chaque enregistrement
- Déterminer la taille de la plus grande ligne du fichier
- Déterminer la taille maximum nécessaire par champ
- Utiliser une structure de données permettant de traiter tous les champs d'une ligne d'un fichier csv
- Voir le fichier exemple_execution.txt pour voir la sortie standard prévue
- Nom du fichier principal: etape1.c (fourni)
- Nom du fichier de module: csv.c et csv.h (A écrire)

## 2 - Lecture du fichier CSV suite
- Lire tout le fichier puis afficher les informations :
    - afficher le nombre d'enregistrements total 
    - le nombre d'enregistrements avec des coordonnées GPS valides 
- Améliorez votre programme pour lire correctement le maximum d'enregistrements
- Utiliser une structure de données permettant de traiter les informations nécessaires pour la suite
- Nom du fichier principal: etape2.c
- A ecrire: commune.c et commune.h
- Ré-utiliser: csv.c et csv.h

## 3 - paramètres de ligne de commande
- écrire un programme nommé "etape3" qui prends 3 paramètres en ligne de commande: la latitude, la longitude et la distance. 
- Vérfier que les paramètres sont valides en type et en valeur.
- latitude et longitude entre -180 et +180. Valeur en virgule flottante double
- distance entre 0 et 19999 km. Valeur en virgule flottante double
- Afficher les paramétres recus en argument ou un message d"erreur. En cas d'erreur, le programme retourne aussi un code d'erreur
- Nom du fichier principal: etape3.c

```bash
$ etape3 45.4587 5.2365 42.75
$ echo $?
0
```

## 4 - Recherche de villes proches d'une coordonnée GPS
Ré-utilisez les programmes précédents pour afficher la liste des villes classées par distance situées à une distance inférieure à la distance donnée en paramètre et aux coordonnées GPS.

Remarque: n'utilisez pas le tri à bulle, ni la fonction qsort() pour réaliser le classement.

```bash
$ etape4 45.4587 5.2365 42.75

```


### Calcul de la distance dans excel:

https://www.1formatik.com/2417/comment-calculer-distance-latitude-longitude-javascript


Votre GPS vous indique les coordonnées (longitude, latitude) d'un lieu quelconque… mais pas la distance à vol d'oiseau entre deux points.

Or ce calcul est complexe, car il doit tenir compte de la rotondité de notre planète. Il faut donc recourir à une formule de trigonométrie sphérique. Nous supposerons que les coordonnées sont au format du degré décimal, par exemple 48,3245° (et non sous la forme degrés, minutes, secondes). En effet, c'est le format le plus utilisé par les GPS. Autre convention : les coordonnées négatives correspondent aux longitudes ouest et aux latitudes sud.

– Dans Excel, nous supposons que les coordonnées du premier point sont dans les cellules B2 et C2, et celles du second point en B3 et C3.
– La formule (à saisir par exemple en D3) permettant de connaître la distance en kilomètres entre les deux points est :

=ACOS(SIN(RADIANS(B2))*SIN(RADIANS(B3))+COS(RADIANS(B2))*COS(RADIANS(B3))*COS(RADIANS(C2-C3)))*6371.

– Ici, 6 371 km correspond au rayon moyen de la Terre. Quels que soient les points envisagés, vous n'obtiendrez jamais une distance supérieure à 20 000 km. Logique : c'est la moitié de la circonférence de la planète.



## 5 - Réflexion
Indiquez au moins 3 pistes pour accélérer le traitement. Justifiez vos réponses.