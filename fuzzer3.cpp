#include <folly/IPAddress.h>
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {

folly::IPAddress::validate(data);
// folly::IPAddressV4::validate(data);
// folly::IPAddressV6::validate(data);
        return 0;
}