
SHELL=bash

default: build



build:
	cd lib; if [[ ! -d "build" ]]; then mkdir build; fi
	cd lib/build && cmake ..
	cd lib/build && make


distclean:
	rm -rf lib/build



install:	build
	cd lib/build && make install


package:	build
	cd lib/build && make package
