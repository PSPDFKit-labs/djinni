// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception.djinni

#pragma once

#include "cpp_exception.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeCppException final : ::djinni::JniInterface<::testsuite::CppException, NativeCppException> {
public:
    using CppType = std::shared_ptr<::testsuite::CppException>;
    using JniType = jobject;

    using Boxed = NativeCppException;

    ~NativeCppException();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeCppException>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return {jniEnv, ::djinni::JniClass<NativeCppException>::get()._toJava(jniEnv, c)}; }

private:
    NativeCppException();
    friend ::djinni::JniClass<NativeCppException>;
    friend ::djinni::JniInterface<::testsuite::CppException, NativeCppException>;

};

}  // namespace djinni_generated
