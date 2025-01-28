#!/bin/bash

read number1
read number2

echo "$number1 + $number2" | bc
echo "$number1 - $number2" | bc
echo "$number1 * $number2" | bc
echo "$number1 / $number2" | bc
