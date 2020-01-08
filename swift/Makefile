cbindgen=~/src/github/alaroldai/cbindgen/target/debug/cbindgen

define SWIFT_INTERFACE_GENERATION_SCRIPT
import FFICBindgenTest
:type lookup FFICBindgenTest
endef

export SWIFT_INTERFACE_GENERATION_SCRIPT

swift_interface.swift:
	@echo "$$SWIFT_INTERFACE_GENERATION_SCRIPT" | swift -I $(dir $(realpath $(firstword $(MAKEFILE_LIST)))) -L../target/debug -lffi_cbindgen_test | tail -n+3 > swift_interface.swift

all: ../target/debug/swift_driver

../target/debug/swift_driver: ffi_cbindgen_test.h ../target/debug/libffi_cbindgen_test.a main.swift
	swiftc -o ../target/debug/swift_driver -I . -L../target/debug -lffi_cbindgen_test main.swift

ffi_cbindgen_test.h: cbindgen.toml ../src/lib.rs
	$(cbindgen) -v -c cbindgen.toml --lang c ../src/lib.rs -o ffi_cbindgen_test.h

../target/debug/libffi_cbindgen_test.a: ../src/lib.rs
	cargo build
