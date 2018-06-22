
1-Faça um script shell que receba um nome de arquivo como parametro e
responde se este arquivo existe ou não.


----------------------------------------------
                RESPOSTA
----------------------------------------------

#!/bin/bash
echo "Informe nome de arquivo:(aperte enter)"
archnome=$1
if  [ -f $archnome ]
then
  echo  "Arquivo $1 existe!"
else
  echo  "Arquivo $1 inexistente!"
fi
----------------------------------------------------------------

2-Reescreva o codigo abaixo usando a estrutura for.

#!/bin/bash
cont=$1
fat=1
while [ $cont -gt 0 ]
do
  fat=$(( $fat * $cont ))
  cont=$(( $cont - 1 ))
done
echo $fat

----------------------------------------
        ABAIXO COM ESTRUTURA 'FOR'
----------------------------------------

#!/bin/bash
echo "Informe um numero:"
read var
fat=1
 for ((i=1 ; i <= $var ; i++))
  do
   fat=$(( $fat * $i ))
  done
echo "O resultado do fatorial de $var é: $fat"
------------------------------------------------------------------

3-Usando estrutura de repetição, faça um script para exibir todos os arquivos
da pasta atual com tamanho = 0kb (vazio).

----------------------------------------------
               RESPOSTA
----------------------------------------------

#!/bin/bash
for nomearq in $(ls .)
 do
 if [ -f $nomearq ]
  then
   kb=$(wc -c < $nomearq)
 if [ $kb == 0 ]
    then
     echo "$nomearq"
  fi
 fi
 done
------------------------------------------------------------------
4-Usando estrutura de repetição, faça um script para ler a PASTA ATUAL, calcular e exibir:
- O total de arquivos lidos
- O total de arquivos com a extensão .txt
- O total de arquivos com a extensão .c
- O total de arquivos com a extensão .py

----------------------------------------------
               RESPOSTA
----------------------------------------------

#!/bin/bash
txt=0
c=0
py=0
total=0
for file in $(ls .)
do
case "$file" in
  
   *.txt)
       txt=$(( $txt + 1 ))
       total=$(( $total + 1 ))
       ;;
   *.c)
       c=$(( $c + 1 ))
       total=$(( $total + 1 ))
       ;;
   *.py)
       py=$(( $py + 1 ))
       total=$(( $total + 1 ))
       ;;
  
    *)
       ;;
esac
done


echo "- O total de arquivos lidos = $total"
echo "- O total de arquivos com a extensão '.txt' = $txt"
echo "- O total de arquivos com a extensão '.c' = $c"
echo "- O total de arquivos com a extensão  '.py' = $py"

