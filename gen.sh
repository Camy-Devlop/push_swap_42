#!/bin/bash

# Initialiser la graine du générateur de nombres aléatoires
RANDOM=$(date +%s%N)

# Définir un nombre par défaut si aucun argument n'est fourni ou si l'argument est invalide
if [[ $# -eq 0 || ! $1 =~ ^[0-9]+$ || $1 -le 0 ]]; then
    count=$((RANDOM % 20 + 1))  # Choisit un nombre aléatoire entre 1 et 20
else
    count=$1
fi

# Initialiser la variable ARG
ARG=()

# Générer les valeurs aléatoires
for ((i=0; i<count; i++)); do
    ARG+=($((RANDOM % 2000000001 - 1000000000)))  # Nombres entre -1000 et 1000
done

# Exporter ARG pour qu'elle soit disponible après l'exécution du script
export ARG

# Afficher le contenu de ARG
echo "Nombre de valeurs générées : $count"
echo "Liste des valeurs aléatoires :"
echo "${ARG[@]}"

echo -e "\nPour voir ARG après l'exécution du script, utilisez : echo \${ARG[@]}"

