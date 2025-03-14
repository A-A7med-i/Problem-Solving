#!/bin/bash
read n

sum=0

for ((i = 0; i < n; i++)); do
  read num
  sum=$((sum + num))
done

average=$(echo "scale=10; $sum / $n" | bc)

printf "%.3f\n" "$average"
