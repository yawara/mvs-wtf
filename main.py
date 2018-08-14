from ctypes import *


def main():
    lib = cdll.LoadLibrary("./libenumerate.so")
    n = lib.MVS_WTF_enumerate()
    print("n: {} in main.py".format(n))


if __name__ == '__main__':
    main()
