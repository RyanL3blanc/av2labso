
#!/bin/bash
soma=0;
for i in {1..100}
do
    soma=$(($soma + $i))
done


echo "soma dos números de 1 a 10 = $soma"
