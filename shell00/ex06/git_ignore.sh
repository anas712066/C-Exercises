#!/bin/bash

# Lista los archivos ignorados por git y presentes en el repositorio local,
# añadiendo el carácter '$' al final de cada línea
git ls-files --others --ignored --exclude-standard

