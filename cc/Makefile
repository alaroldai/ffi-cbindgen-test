all: ../target/debug/cc_driver

../target/debug/cc_driver: ffi_cbindgen_test.h ../target/debug/libffi_cbindgen_test.a main.cc
	clang++ -o ../target/debug/cc_driver ../target/debug/libffi_cbindgen_test.a main.cc

ffi_cbindgen_test.h: ../src/lib.rs
	cbindgen --lang c++ ../src/lib.rs -o ffi_cbindgen_test.h

../target/debug/libffi_cbindgen_test.a: ../src/lib.rs
	cargo build