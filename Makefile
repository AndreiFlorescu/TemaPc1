build: telefon.c ./Codif/encode.c ./Decodif/decode.c ./AutoCorrect/dex.c ./PrimPerf/prpf.c ./Util/init.c
	gcc -Wall telefon.c ./Codif/encode.c ./Decodif/decode.c ./AutoCorrect/dex.c ./PrimPerf/prpf.c ./Util/init.c -o telefon

run: telefon
	./telefon

clean:
	rm telefon
