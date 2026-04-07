#!/bin/bash

read -p "Enter a number: " n

if [ $n -le 1 ]; then
    echo "Not Prime"
    exit
fi

for ((i=2; i<=n/2; i++))
do
    if [ $((n % i)) -eq 0 ]; then
        echo "Not Prime"
        exit
    fi
done

echo "Prime Number"
