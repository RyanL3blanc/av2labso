
#!/bin/bash

echo "entre com o nome no formato nome.sobrenome"
read completo
sobre=${completo#*.} #le a partir do ponto pra frente.
lenc=${#completo} #le todo o nome.
lens=${#sobre} #recebe a variavel "sobre" inteira.
lenn=$(( lenc - lens )) #substrai o sobrenome pelo nome completo.
nome=${completo:0:lenn} #descobrir o tamanho do nome.
echo boa noite, $sobre, $nome
