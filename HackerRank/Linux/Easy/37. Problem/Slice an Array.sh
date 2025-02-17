#!/bin/bash

readarray -t countries
echo "${countries[@]:3:5}"
