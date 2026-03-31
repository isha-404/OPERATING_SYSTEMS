#!/bin/bash
read -p "Enter value of a: " a
read -p "Enter value of b: " b

sum=$((a+b))
echo "Addition of a and b is: $sum"

diff=$((a-b))
echo "Difference of a and b is: $diff"

pro=$((a*b))
echo "Product of a and b is: $pro"

div=$((a/b))
echo "Division of a and b is: $div"
