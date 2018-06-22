
#!/bin/bash

echo "entre com o nome do arquivo, seguido da extensão"
read nomearq
case $nomearq in 
    *.c)
        echo "codigo C"
        ;;
    *.py)
        echo "codigo python"
        ;;
    *.o)
        echo "objeto"
        ;;
    *  )
        echo "não reconhecido"
        ;;
esac

                            