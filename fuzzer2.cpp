#include <folly/IPAddress.h>
#include <folly/String.h>
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {

folly::StringPiece bin1(data, size);
folly::IPAddress::tryFromString(bin1);
//folly::IPAddressV6::tryFromString(data);
//folly::IPAddressV4::tryFromString(data);

        return 0;
}
