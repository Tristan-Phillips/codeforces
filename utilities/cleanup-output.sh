#!/bin/bash
directories=()

while IFS= read -r -d '' directory; do
    directories+=("$directory")
done < <(find ../my-solutions/ -type d -name "output" -print0)

for ((i=0; i<${#directories[@]}; i++)); do
    rm -r ${directories[$i]}  
    echo "Directory Removed $i: ${directories[$i]}"  
done