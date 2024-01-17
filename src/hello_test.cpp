#include "hello.hpp"

#include <userver/utest/utest.hpp>

UTEST(SayHelloTo, Basic) {
  EXPECT_EQ(first_service::SayHelloTo("Developer"), "Hello, Developer!\n");
  EXPECT_EQ(first_service::SayHelloTo({}), "Hello, unknown user!\n");
}
