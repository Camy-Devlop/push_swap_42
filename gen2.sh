#!/bin/bash

# Vérification du nombre d'arguments
if [ $# -ne 2 ]; then
    echo "Usage: $0 <min> <max>"
    exit 1
fi

min=$1
max=$2

# Génération de la liste de nombres
ARG=$(seq $min $max)

# Affichage de la liste originale
echo "Liste originale:"
echo $ARG

# Mélange de la liste
ARG_MELANGE=$(echo $ARG | tr " " "\n" | shuf | tr "\n" " ")

# Affichage de la liste mélangée
echo "Liste mélangée:"
echo $ARG_MELANGE
