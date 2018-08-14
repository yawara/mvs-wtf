enumerate:
	gcc -I/opt/MVS/include -L/opt/MVS/lib/64/ -lMvCameraControl -shared enumerate.c -o libenumerate.so
	gcc -I./ -L./ -lenumerate main.cpp
