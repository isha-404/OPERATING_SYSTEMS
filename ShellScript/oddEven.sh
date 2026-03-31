#!/bin/bash

read -p "Enter a number: " num

if [ $((num % 2)) -eq 0 ]
then
    echo "Number is Even"
else
    echo "Number is Odd"
fi
