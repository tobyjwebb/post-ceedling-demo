FROM ubuntu:19.04

ENV TZ UTC

RUN apt-get update && \
	DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends build-essential git gem ruby make gcc valgrind vim && \
	apt-get clean && rm -rf /var/cache/apt/archives/* && \
    rm -rf /var/lib/apt/lists/* && \
	cd /tmp/ && \
	git clone --recursive --depth=1 --single-branch --branch develop https://github.com/zaleos/Ceedling.git ceedling && \
	cd ceedling && \
	gem build ceedling.gemspec && \
	gem install ceedling-*.gem && \
	cd /root/ && \
	rm -rf /tmp/ceedling

VOLUME /root/basic-ceedling-example
WORKDIR /root/basic-ceedling-example

CMD bash