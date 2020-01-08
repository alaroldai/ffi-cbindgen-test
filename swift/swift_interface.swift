struct PointerToOpaque {
  var ptr: Swift.OpaquePointer!
  init() {

    return 
  }
  init(ptr: Swift.OpaquePointer!)
}
extension PointerToOpaque {
  @discardableResult static func create(times: Swift.UInt8) -> FFICBindgenTest.PointerToOpaque
  func sayHello()
}
@available(swift, obsoleted: 3, renamed: "PointerToOpaque.create(times:)") func PointerToOpaque_create(_ times: Swift.UInt8) -> FFICBindgenTest.PointerToOpaque
@available(swift, obsoleted: 3, renamed: "PointerToOpaque.sayHello(self:)") func PointerToOpaque_sayHello(_ self: FFICBindgenTest.PointerToOpaque)
struct SelfTypeTestStruct {
  var times: Swift.UInt8
  init() {

    return 
  }
  init(times: Swift.UInt8)
}
extension SelfTypeTestStruct {
  func should_exist_annotated_by_name()
  func should_exist_annotated_mut_by_name()
  func should_exist_annotated_mut_self()
  func should_exist_annotated_self()
  func should_exist_mut_unannotated()
  func should_exist_ref()
  mutating func should_exist_ref_mut()
  func should_exist_unannotated()
  func should_not_exist_box()
}
@available(swift, obsoleted: 3, renamed: "SelfTypeTestStruct.should_exist_annotated_by_name(self:)") func SelfTypeTestStruct_should_exist_annotated_by_name(_ self: FFICBindgenTest.SelfTypeTestStruct)
@available(swift, obsoleted: 3, renamed: "SelfTypeTestStruct.should_exist_annotated_mut_by_name(self:)") func SelfTypeTestStruct_should_exist_annotated_mut_by_name(_ self: FFICBindgenTest.SelfTypeTestStruct)
@available(swift, obsoleted: 3, renamed: "SelfTypeTestStruct.should_exist_annotated_mut_self(self:)") func SelfTypeTestStruct_should_exist_annotated_mut_self(_ self: FFICBindgenTest.SelfTypeTestStruct)
@available(swift, obsoleted: 3, renamed: "SelfTypeTestStruct.should_exist_annotated_self(self:)") func SelfTypeTestStruct_should_exist_annotated_self(_ self: FFICBindgenTest.SelfTypeTestStruct)
@available(swift, obsoleted: 3, renamed: "SelfTypeTestStruct.should_exist_mut_unannotated(self:)") func SelfTypeTestStruct_should_exist_mut_unannotated(_ self: FFICBindgenTest.SelfTypeTestStruct)
@available(swift, obsoleted: 3, renamed: "SelfTypeTestStruct.should_exist_ref(self:)") func SelfTypeTestStruct_should_exist_ref(_ self: Swift.UnsafePointer<FFICBindgenTest.SelfTypeTestStruct>!)
@available(swift, obsoleted: 3, renamed: "SelfTypeTestStruct.should_exist_ref_mut(self:)") func SelfTypeTestStruct_should_exist_ref_mut(_ self: Swift.UnsafeMutablePointer<FFICBindgenTest.SelfTypeTestStruct>!)
@available(swift, obsoleted: 3, renamed: "SelfTypeTestStruct.should_exist_unannotated(self:)") func SelfTypeTestStruct_should_exist_unannotated(_ self: FFICBindgenTest.SelfTypeTestStruct)
func free_function_should_exist_annotated_by_name(test_struct: FFICBindgenTest.SelfTypeTestStruct)
func free_function_should_exist_annotated_mut_by_name(test_struct: FFICBindgenTest.SelfTypeTestStruct)
func free_function_should_exist_ref(test_struct: Swift.UnsafePointer<FFICBindgenTest.SelfTypeTestStruct>!)
func free_function_should_exist_ref_mut(test_struct: Swift.UnsafeMutablePointer<FFICBindgenTest.SelfTypeTestStruct>!)
func rust_print_hello_world()

