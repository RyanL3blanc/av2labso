
#!/bin/bash

for nomearq in $(ls)
do
    echo "nome: $nomearq"
    case $nomearq in
        *.sh)
            echo "-arquivo script"
            ;;
        *.c)
            echo "-codigo em c"
            ;;
        *)
            echo "-arquivo não indentificado"
            ;;
    esac
done
