# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

# Question 1

La fonctinnalité de sauvegarde dans un fichier utilise l'entête fstream qui permet de gérer des flux de fichiers (file stream). 
Étapes de la sauvegarde : 
    1. déclarer le flux sortant du fichier en spécifiant son nom.

    2. Vérifier si le fichier s'est ouvert avec succès et inscrire un message d'erreur dans le cas contraire.

    3. Récupérer les données à sauvegarder dans le fichier.

    4. Itérer sur chaque donnée de la liste pour l'insérer dans le flux avec l'opérateur <<.

    5. Fermer le flux.

# Question 2

