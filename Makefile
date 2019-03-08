CC=clang-7
CXX=clang++-7

FOLLY=/root/proxygen/proxygen/folly

all: Fuzzer

clean:
        rm -rf ipaddr

Fuzzer: fuzzer.cpp
        $(CXX) -o ipaddr -ggdb fuzzer.cpp -I$(FOLLY)/include $(FOLLY)/_build/libfolly.so -fsanitize=fuzzer,undefined -fsanitize-recover=address -lfolly -lboost_system -lglog
