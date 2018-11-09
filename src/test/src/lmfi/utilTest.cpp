#include <Catch2/catch.hpp>
#include <lmfi/util.hpp>

using namespace lmfi::util;

TEST_CASE("utils") {
    SECTION("sayHello") {
        REQUIRE_NOTHROW(sayHello());
    }
}