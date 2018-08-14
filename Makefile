all: libenumerate.so main
main: main.c
	gcc -Wall -O0 -g -I./ main.c -o main -L./ -lenumerate
libenumerate.so: enumerate.c
	gcc -Wall -O0 -g -I /opt/MVS/include/ enumerate.c -shared -o libenumerate.so -L /opt/MVS/lib/64/ -lMvCameraControl
clean:
	rm libenumerate.so main
test:
	LD_LIBRARY_PATH=./ ./main
	python3 main.py
