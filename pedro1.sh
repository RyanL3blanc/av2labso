
# 1 - Crie um script chamado seunome1.sh “mensagem”. Este script deverá enviar todos os arquivos modificados para o github.   
#Com isso evita-se a necessidade de digitar todos os comando do git sempre que quiser subir um arquivo para o repositorio Github.com.
    
#!/bin/sh
git config --global user.name "RyanL3blanc"
git config --global user.email "unilasallepedro@gmail.com"
git add
git commit -m "labso"
git push



# 2 - Usando estrutura de repetição, faça um script (seunome2.sh) para calcular e exibir quantas
# pastas e quantos arquivos tem na pasta atual.


#!/bin/bash
pastas=0
arquivos=0
for i in *
do
    if [ -d $i ]
    then
        pastas=$(($pastas+1))
    else
        arquivos=$(($arquivos+1))
    fi
done
echo "Pastas: $pastas Arquivos: $arquivos"
