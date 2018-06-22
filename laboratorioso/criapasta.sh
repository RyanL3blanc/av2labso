
#!/bin/bash

echo "insira um nome:"
read $nome
mkdir $nome
for i in 1 2 3
do
    touch $nome$i.txt
    echo "--$nome$i.txt--"
done
