#!/bin/bash

read -p "Enter first number: " a
read -p "Enter second number: " b

if [ $a -gt $b ]
then
    echo "Largest number is: $a"
elif [ $a -lt $b ]
then
    echo "Largest number is: $b"
else
    echo "Both numbers are equal"
fi
