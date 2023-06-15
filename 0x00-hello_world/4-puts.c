#!/bin/bash
echo 'int main(void){
	puts("Programming is like building a multilingual puzzle"\n);
	return 0;
}' > main.c
gcc main.c -o program 
./program
rm main.c program
