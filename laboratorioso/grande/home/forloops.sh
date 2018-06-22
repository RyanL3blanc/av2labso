
#!/bin/bash

cont=0;

for nomearq in $(ls ~)
do
    case $nomearq in
        *.txt)
            cont=$(($cont+1))
        ;;
    esac
done
          