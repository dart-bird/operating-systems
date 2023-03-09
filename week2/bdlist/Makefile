obj-m:= bdlist.o
PWD= $(shell pwd)

default:
	make -C /lib/modules/$(shell uname -r)/build/ KBUILD_EXTMOD=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build/ KBUILD_EXTMOD=$(PWD) clean
