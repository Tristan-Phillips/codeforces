#!/bin/bash
read w
if (( w % 2 == 0 && w >= 4 )); then
    echo "YES"
else
    echo "NO"
fi