.PHONY: help
help:
	@echo Help:
	@echo "make dockerimage\n\tCreates the zaleos-ubuntu Docker image from the included Dockerfile"

.PHONY: dockerimage
dockerimage: Dockerfile
	docker build -t zaleos-ubuntu .
