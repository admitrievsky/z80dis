FROM debian:bullseye-slim

RUN apt-get update && apt-get install -y build-essential
RUN apt-get install -y curl
RUN curl https://pasmo.speccy.org/bin/pasmo-0.5.5.tar.gz > pasmo-0.5.5.tar.gz && tar xf pasmo-0.5.5.tar.gz
WORKDIR pasmo-0.5.5
RUN ./configure && make && make install
RUN mkdir /app
WORKDIR /app
