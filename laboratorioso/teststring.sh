
#!/bin/bash

echo "entre com um nome"
read nome
if [ -z $nome ];
then
    echo "string vazia"
else
    echo "string=$nome"
fi
