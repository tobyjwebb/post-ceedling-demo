.PHONY: help
help:
	@echo Help:
	@echo "make dockerimage\n\tCreates the zaleos-ubuntu Docker image from the included Dockerfile"
	@echo "make urltest\n\tBuilds the urltest executable binary"

urltest: src/urltest.c src/urltest.h src/urltestlib1.c src/urltestlib1.h src/urltestlib2.c src/urltestlib2.h
	gcc src/urltest.c src/urltestlib1.c src/urltestlib2.c -o urltest

.PHONY: dockerimage
dockerimage: Dockerfile
	docker build --no-cache -t zaleos-ubuntu .
