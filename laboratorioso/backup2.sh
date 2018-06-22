#!/bin/bash
#Calcula o número de linhas de um arquivo qualquer.
num=$(cat $1 | wc -l)

#Testa e move arquivo de acordo com o tamanho.
if [[ num -lt 100 ]]
then

#Move arquivo para pasta pequeno.
    mv $1 pequeno
    echo "arquivo enviado para a pasta pequeno"
elif [[ num -lt 500 ]]
then
    mv $1 medio
    echo "arquivo enviado para pasta medio"
else
    mv $1 grande
    echo "arquivo enviado para pasta grande"
fi

