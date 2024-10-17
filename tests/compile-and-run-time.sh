#!/bin/bash
files=()

while IFS= read -r -d '' file; do
    files+=("$file")
done < <(find ../my-solutions/ -type f -name "*.cpp" -print0)

for ((i=0; i<${#files[@]}; i++)); do
    echo "File at index $i: ${files[$i]}"
done

echo "Enter the index of the file you want to run: "
read index
if [ $index -lt 0 ] || [ $index -ge ${#files[@]} ]; then
    echo "Invalid index"
    exit 1
fi

# Compile Time Record
compile_start=$(date +%s%3N)
g++ ${files[$index]} -o ${files[$index]%.cpp}.out
compile_end=$(date +%s%3N)

# Run Time Record
run_start=$(date +%s%3N)
./${files[$index]%.cpp}.out
run_end=$(date +%s%3N)

echo "Compile Time: $(( (compile_end - compile_start) / 1000 )).$(( (compile_end - compile_start) % 1000 )) seconds"
echo "Run Time: $(( (run_end - run_start) / 1000 )).$(( (run_end - run_start) % 1000 )) seconds"

# Clean up
rm ${files[$index]%.cpp}.out