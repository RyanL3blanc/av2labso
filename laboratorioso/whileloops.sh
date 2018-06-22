
#!/bin/bash

cont=0 #atribuição de valor nao se deve utilizar o "dólar", apenas quando for ler.
echo "usando o while"
while [ $cont -le 100 ]
do 
    cont=$(($cont+1))
    echo "$cont"
done

echo "usando o for"
for cont in {1..100}
do
    echo $cont
done
