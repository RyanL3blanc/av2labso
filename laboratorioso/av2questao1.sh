
#1-Faça um script shell que receba um nome de arquivo como parametro e
#  responde se este arquivo existe ou não.


#!/bin/bash
echo "informe nome do arquivo:"
read arqnome
if [ -f $arqnome ]
then
  echo "arquivo $arqnome existe!"
else
  echo "arquivo $arqnome não existe!"
fi
