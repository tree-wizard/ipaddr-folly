#include <folly/IPAddress.h>
#include <folly/String.h>
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {

folly::StringPiece bin1(data, size);
folly::IPAddress::tryCreateNetwork(data);

        return 0;
}