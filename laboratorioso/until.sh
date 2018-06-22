
#!/bin/bash
soma=0
i=0
until [ $i -gt 10 ]
do  
    soma=$(($soma + $i))
    i=$(($i+1)) #incrementa o valor de i.
done

echo "soma dos números de 1 a 10 = $soma"