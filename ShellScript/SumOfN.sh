#!/bin/bash

read -p "Enter n: " n
i=1
sum=0

while [ $i -le $n ]
do
    sum=$((sum + i))
    let i=i+1
done

echo "Sum = $sum"
