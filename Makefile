include conf.mk
all: tplat test 
	echo "finished"
.PHONY: tplat
tplat: 
	echo "tplatbuild"
	make -C tplat
test:
	echo "test finished"
.PHONY: clean
clean:
	rm -rf *.o
