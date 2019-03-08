run, then errors out. Need to debug:


#include <folly/IPAddress.h>
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {

        folly::IPAddress v4map(data);
folly::IPAddress::createIPv6(v4map);
folly::IPAddress::createIPv4(v4map);
        return 0;
}


#include <folly/IPAddress.h>
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {

        folly::IPAddressV4 a2(data);
        return 0;
}



#include <folly/IPAddress.h>
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {

folly::IPAddressV6::fromInverseArpaName(data);
folly::IPAddressV4::fromInverseArpaName(data);
        return 0;
}


#include <folly/IPAddress.h>
#include <folly/Format.h>
extern "C" int LLVMFuzzerTestOneInput(const unsigned char *data, size_t size) {

        auto byteRange = folly::ByteRange(data, size);
		folly::IPAddress::fromBinary(byteRange);
        return 0;
}

