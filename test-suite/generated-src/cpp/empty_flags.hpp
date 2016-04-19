// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#pragma once

#include <functional>

namespace testsuite {

enum class empty_flags : unsigned {
    NONE = 0,
    ALL = 0,
};
#if __cpp_constexpr >= 201103L
#define CONSTEXPR constexpr
#else
#define CONSTEXPR inline
#endif
CONSTEXPR empty_flags operator|(empty_flags lhs, empty_flags rhs) noexcept {
    return static_cast<empty_flags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs));
}
CONSTEXPR empty_flags& operator|=(empty_flags& lhs, empty_flags rhs) noexcept {
    return lhs = lhs | rhs;
}
CONSTEXPR empty_flags operator&(empty_flags lhs, empty_flags rhs) noexcept {
    return static_cast<empty_flags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs));
}
CONSTEXPR empty_flags& operator&=(empty_flags& lhs, empty_flags rhs) noexcept {
    return lhs = lhs & rhs;
}
CONSTEXPR empty_flags operator^(empty_flags lhs, empty_flags rhs) noexcept {
    return static_cast<empty_flags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs));
}
CONSTEXPR empty_flags& operator^=(empty_flags& lhs, empty_flags rhs) noexcept {
    return lhs = lhs ^ rhs;
}
CONSTEXPR empty_flags operator~(empty_flags x) noexcept {
    return static_cast<empty_flags>(~static_cast<unsigned>(x));
}
#undef CONSTEXPR

}  // namespace testsuite

namespace std {

template <>
struct hash<::testsuite::empty_flags> {
    size_t operator()(::testsuite::empty_flags type) const {
        return std::hash<unsigned>()(static_cast<unsigned>(type));
    }
};

}  // namespace std
