// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#pragma once

#include "empty_record.hpp"

namespace testsuite {

/**
 * Empty record
 * (Second line of multi-line documentation.
 *   Indented third line of multi-line documentation.)
 */
public ref class EmptyRecord sealed : public Platform::Object {
public:
    EmptyRecord() {}
internal:
    ::testsuite::EmptyRecord toCpp();
    static EmptyRecord^ fromCpp(const ::testsuite::EmptyRecord& value);
};

}  // namespace testsuite
