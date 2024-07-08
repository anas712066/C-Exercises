#!/bin/bash

# Obtiene los IDs de los últimos 5 commits sin añadir el carácter '$' al final de cada línea
git log --format="%H" -n5
