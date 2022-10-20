
SHELL=bash

default: build



build:
	cd lib; if [[ ! -d "build" ]]; then mkdir build; fi
	cd lib/build && cmake ..
	cd lib/build && make



install:	build
	cd lib/build && make install

