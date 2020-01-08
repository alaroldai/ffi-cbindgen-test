#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

struct Foo;

struct FooRef {
  Foo *ptr;
};

extern "C" {

FooRef FooRef_create();

void FooRef_sayHello(FooRef self, uint8_t times) /*a comment!*/;

void rust_print_hello_world();

} // extern "C"
