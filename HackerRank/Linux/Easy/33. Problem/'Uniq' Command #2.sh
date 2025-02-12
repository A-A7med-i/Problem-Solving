#!/bin/bash

uniq -c | tr -s ' ' | sed 's/^ *//'
