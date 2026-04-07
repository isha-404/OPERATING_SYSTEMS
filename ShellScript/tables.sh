#!/bin/bash

read -p "Enter the number for which you want the table: " n

for i in {1..10}
do
echo "$n x $i = $((n * i))"
done
