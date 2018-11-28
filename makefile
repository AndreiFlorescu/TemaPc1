build: telefon.c ./Codif/encode.c ./Util/init.c
	gcc -Wall telefon.c ./Codif/encode.c ./Util/init.c -o telefon

run: telefon
	./telefon

clean: telefon
	rm telefon
