#!/bin/bash

read -p "Enter marks: " marks

if [ $marks -ge 75 ]
then
    echo "Distinction"
elif [ $marks -ge 65 ]
then
    echo "First Division"
elif [ $marks -ge 55 ]
then
    echo "Second Division"
else
    echo "Third Division"
fi
