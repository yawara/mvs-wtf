from ctypes import *


def main():
    lib = cdll.LoadLibrary("./libenumerate.so")
    print(lib.MVS_WTF_enumerate())


if __name__ == '__main__':
    main()
