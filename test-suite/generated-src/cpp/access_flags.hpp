// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum_flags.djinni

#pragma once

#include <functional>

namespace testsuite {

enum class access_flags : unsigned {
    NOBODY = 0,
    OWNER_READ = 1 << 0,
    OWNER_WRITE = 1 << 1,
    OWNER_EXECUTE = 1 << 2,
    GROUP_READ = 1 << 3,
    GROUP_WRITE = 1 << 4,
    GROUP_EXECUTE = 1 << 5,
    SYSTEM_READ = 1 << 6,
    SYSTEM_WRITE = 1 << 7,
    SYSTEM_EXECUTE = 1 << 8,
    EVERYBODY = 0 | OWNER_READ | OWNER_WRITE | OWNER_EXECUTE | GROUP_READ | GROUP_WRITE | GROUP_EXECUTE | SYSTEM_READ | SYSTEM_WRITE | SYSTEM_EXECUTE,
};
constexpr access_flags operator|(access_flags lhs, access_flags rhs) noexcept {
    return static_cast<access_flags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs));
}
inline access_flags& operator|=(access_flags& lhs, access_flags rhs) noexcept {
    return lhs = lhs | rhs;
}
constexpr access_flags operator&(access_flags lhs, access_flags rhs) noexcept {
    return static_cast<access_flags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs));
}
inline access_flags& operator&=(access_flags& lhs, access_flags rhs) noexcept {
    return lhs = lhs & rhs;
}
constexpr access_flags operator^(access_flags lhs, access_flags rhs) noexcept {
    return static_cast<access_flags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs));
}
inline access_flags& operator^=(access_flags& lhs, access_flags rhs) noexcept {
    return lhs = lhs ^ rhs;
}
constexpr access_flags operator~(access_flags x) noexcept {
    return static_cast<access_flags>(~static_cast<unsigned>(x));
}

}  // namespace testsuite

namespace std {

template <>
struct hash<::testsuite::access_flags> {
    size_t operator()(::testsuite::access_flags type) const {
        return std::hash<unsigned>()(static_cast<unsigned>(type));
    }
};

}  // namespace std
