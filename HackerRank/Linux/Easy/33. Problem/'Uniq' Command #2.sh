#!/bin/bash

uniq -c | awk '{$1=$1;print $1" "$2}'
