TOOLCHAIN = W:/Toolchains/KOS_4.8.2

CC = $(TOOLCHAIN)/bin/kos32-gcc.exe
AR = $(TOOLCHAIN)/bin/kos32-ar.exe
CFLAGS = -O2 -fomit-frame-pointer -U__WIN32__ -U_Win32 -U_WIN32 -U__MINGW32__ -UWIN32 -Wall -Iinclude -I$(TOOLCHAIN)/libc/include
ARFLAGS = rcs

all: lib/libkos_ki.a

lib/libkos_ki.a: obj/kos_ki_lib.o
	-mkdir lib
	$(AR) $(ARFLAGS) lib/libkos_ki.a obj/kos_ki_lib.o

obj/kos_ki_lib.o: src/kos_ki_lib.c src/kos_ki_lib.h include/kos_ki.h
	-mkdir obj
	$(CC) $(CFLAGS) -c src/kos_ki_lib.c -o obj/kos_ki_lib.o
    
clean:
	-rm -f -r obj
	-rm -f -r lib