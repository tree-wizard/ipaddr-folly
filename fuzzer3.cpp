#include <folly/IPAddress.h>
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {

follyy::StringPiece bin1(data, size);
folly::IPAddress::validate(bin1);
// folly::IPAddressV4::validate(data);
// folly::IPAddressV6::validate(data);
        return 0;
}
