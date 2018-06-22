#!/bin/bash

# Faça um script(backup.sh) para mover um arquivo passado como parâmetro para a pasta correta de acordo com o número de linhas.
# ex.:bash backup.sh
# se número de linhas < 100, colocar na pasta pequeno
# senão, se número de linhas < 500, colocar na pasta médio
# senão, colocar na pasta grande.

a=10
b=20

if [[ $a -lt 100 ]] && [[ $b -gt 15 ]]
then
    echo "verdadeiro"
else
    echo "falso"
fi
