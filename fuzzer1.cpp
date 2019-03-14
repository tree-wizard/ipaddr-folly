#include <folly/IPAddress.h>
#include <folly/String.h>
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {

folly::StringPiece bin1(data, size);
folly::IPAddress::tryCreateNetwork(bin1);

        return 0;
}
