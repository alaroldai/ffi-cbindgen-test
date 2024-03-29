#define DEMO_SWIFT_NAME(_name) __attribute__((swift_name(#_name)))

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Box_SelfTypeTestStruct Box_SelfTypeTestStruct;

typedef struct Opaque Opaque;

typedef struct {
  Opaque *ptr;
} PointerToOpaque;

typedef struct {
  uint8_t times;
} SelfTypeTestStruct;

PointerToOpaque PointerToOpaque_create(uint8_t times) DEMO_SWIFT_NAME(PointerToOpaque.create(times:));

void PointerToOpaque_sayHello(PointerToOpaque self)
/*a comment!*/ DEMO_SWIFT_NAME(PointerToOpaque.sayHello(self:));

void SelfTypeTestStruct_should_exist_annotated_by_name(SelfTypeTestStruct self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_exist_annotated_by_name(self:));

void SelfTypeTestStruct_should_exist_annotated_mut_by_name(SelfTypeTestStruct self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_exist_annotated_mut_by_name(self:));

void SelfTypeTestStruct_should_exist_annotated_mut_self(SelfTypeTestStruct self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_exist_annotated_mut_self(self:));

void SelfTypeTestStruct_should_exist_annotated_self(SelfTypeTestStruct self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_exist_annotated_self(self:));

void SelfTypeTestStruct_should_exist_mut_unannotated(SelfTypeTestStruct self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_exist_mut_unannotated(self:));

void SelfTypeTestStruct_should_exist_ref(const SelfTypeTestStruct *self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_exist_ref(self:));

void SelfTypeTestStruct_should_exist_ref_mut(SelfTypeTestStruct *self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_exist_ref_mut(self:));

void SelfTypeTestStruct_should_exist_unannotated(SelfTypeTestStruct self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_exist_unannotated(self:));

void SelfTypeTestStruct_should_not_exist_box(Box_SelfTypeTestStruct self) DEMO_SWIFT_NAME(SelfTypeTestStruct.should_not_exist_box(self:));

void free_function_should_exist_annotated_by_name(SelfTypeTestStruct test_struct) DEMO_SWIFT_NAME(free_function_should_exist_annotated_by_name(test_struct:));

void free_function_should_exist_annotated_mut_by_name(SelfTypeTestStruct test_struct) DEMO_SWIFT_NAME(free_function_should_exist_annotated_mut_by_name(test_struct:));

void free_function_should_exist_ref(const SelfTypeTestStruct *test_struct) DEMO_SWIFT_NAME(free_function_should_exist_ref(test_struct:));

void free_function_should_exist_ref_mut(SelfTypeTestStruct *test_struct) DEMO_SWIFT_NAME(free_function_should_exist_ref_mut(test_struct:));

void free_function_should_not_exist_box(Box_SelfTypeTestStruct boxed) DEMO_SWIFT_NAME(free_function_should_not_exist_box(boxed:));

void rust_print_hello_world(void) DEMO_SWIFT_NAME(rust_print_hello_world());
