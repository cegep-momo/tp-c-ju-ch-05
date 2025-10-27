# Informations sur le TP
Nom : Julien Chauvette
DA : 202390098

Fonctionnalité dans Interface et Expérience Utilisateur : Confirmation de suppression des livres

Fonctionnalité dans Gestion des Données : Tri des résultats par titre, auteur pour l’affichage

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

La fonctionnalité de sauvegarde dans un fichier utilise l'entête fstream qui permet de gérer des flux de fichiers (file stream). 

Étapes de la sauvegarde : 

    1. déclarer le flux sortant du fichier en spécifiant son nom.

    2. Vérifier si le fichier s'est ouvert avec succès et inscrire un message d'erreur dans le cas contraire.

    3. Récupérer les données à sauvegarder dans le fichier.

    4. Itérer sur chaque donnée de la liste pour l'insérer dans le flux avec l'opérateur <<.

    5. Fermer le flux.

# Question 2

Pour mieux optimiser la gestion de la bibliothèque, dans l'optique que cette dernière puisse contenir un nombre beaucoup plus important de nombre et d'utilisateur, il faudrait sauvegarder les données des livres et des utilisateurs dans une base de données mySQL, par exemple.

Pour se faire en C++ : 

    1. Installer le connecteur MySQL pour pouvoir accéder à notre base de donnée avec les en-têtes adéquates.

    2. Se connecter à la base de donnée en spécifiant l'url où la base de donnée est hébergée, le nom d'utilisateur ainsi que son mot de passe afin de pouvoir avoir les accès complets.

    3. Faire une requête pour, par exemple, ajouter un livre à la table books.
        INSERT INTO books (title, author, isbn, is_available, borrower_name)
        VALUES (monTitre, monAuteur, monISBN, 1, "")
