#!/bin/bash

uniq -c -i | tr -s ' ' | sed "s/^ *//"
