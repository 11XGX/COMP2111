#!/bin/bash

for i in {0..8}
do
	./uniqtest < ./testInputs/test${i}.txt > ./myOutputs/myOutput${i}.txt
	uniq ./testInputs/test${i}.txt > ./expectedOutputs/expectedOutput${i}.txt
	diff ./myOutputs/myOutput${i}.txt ./expectedOutputs/expectedOutput${i}.txt > "./diffs/diff${i}.txt"
done

echo "Output of diff:"
cat ./diffs/*
echo "Nothing above signifies success."
