// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include <cstdint>
#include <string>
#include <utility>

namespace testsuite {

struct RecordWithDerivings final {
    int32_t key1;
    std::string key2;

    friend bool operator==(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);
    friend bool operator!=(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);

    friend bool operator<(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);
    friend bool operator>(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);

    friend bool operator<=(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);
    friend bool operator>=(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);

    RecordWithDerivings(int32_t new_key1,
                        std::string new_key2)
    : key1(std::move(new_key1))
    , key2(std::move(new_key2))
    {}
};

}  // namespace testsuite
