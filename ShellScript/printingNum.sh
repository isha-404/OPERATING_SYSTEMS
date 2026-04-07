#!/bin/bash

echo "Using FOR loop:"
for i in {1..5}
do
    echo $i
done

echo "Using WHILE loop:"
i=1
while [ $i -le 5 ]
do
    echo $i
    i=$((i + 1))
done

echo "Using UNTIL loop:"
i=1
until [ $i -gt 5 ]
do
    echo $i
    i=$((i + 1))
done
