
FROM ubuntu:20.04

RUN apt-get update && \ 
    DEBIAN_FRONTEND=noninteractive apt-get install -y g++ cmake

COPY . /app
WORKDIR /app/build

RUN cmake .. && make

CMD ["./StudentApp"]
