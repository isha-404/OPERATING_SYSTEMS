a=10
until [ $a -eq 1 ]
do
echo "$a"
a=$((a - 1))
done
