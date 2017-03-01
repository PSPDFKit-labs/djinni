// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#include "EnumUsageInterface.h"  // my header
#include "Color.h"
#include "translation.h"

namespace testsuite {

Color EnumUsageInterface::E (Color e)
{
    try {
        auto cppRet = _cppRef->e(transform<::testsuite::color, ::testsuite::Color>()(e));
        return transform<::testsuite::color, ::testsuite::Color>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::IBox<Color>^ EnumUsageInterface::O (Platform::IBox<Color>^ o)
{
    try {
        auto cppRet = _cppRef->o(transform<std::experimental::optional<::testsuite::color>, Platform::IBox<::testsuite::Color>^>()(o));
        return transform<std::experimental::optional<::testsuite::color>, Platform::IBox<::testsuite::Color>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::Collections::IVector<Color>^ EnumUsageInterface::L (Windows::Foundation::Collections::IVector<Color>^ l)
{
    try {
        auto cppRet = _cppRef->l(transform<std::vector<::testsuite::color>, Windows::Foundation::Collections::IVector<::testsuite::Color>^>()(l));
        return transform<std::vector<::testsuite::color>, Windows::Foundation::Collections::IVector<::testsuite::Color>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::Collections::IIterable<Color>^ EnumUsageInterface::S (Windows::Foundation::Collections::IIterable<Color>^ s)
{
    try {
        auto cppRet = _cppRef->s(transform<std::unordered_set<::testsuite::color>, Windows::Foundation::Collections::IIterable<::testsuite::Color>^>()(s));
        return transform<std::unordered_set<::testsuite::color>, Windows::Foundation::Collections::IIterable<::testsuite::Color>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::Collections::IMap<Color, Color>^ EnumUsageInterface::M (Windows::Foundation::Collections::IMap<Color, Color>^ m)
{
    try {
        auto cppRet = _cppRef->m(transform<std::unordered_map<::testsuite::color, ::testsuite::color>, Windows::Foundation::Collections::IMap<::testsuite::Color, ::testsuite::Color>^>()(m));
        return transform<std::unordered_map<::testsuite::color, ::testsuite::color>, Windows::Foundation::Collections::IMap<::testsuite::Color, ::testsuite::Color>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite
