#ifndef __BILLING_UTILS_HPP__
#define __BILLING_UTILS_HPP__

#include <sstream>
#include <iomanip>
#include <vector>
#include <string>

namespace Utils
{
  std::vector<char> hexToBytes(const std::string& hex);

  std::string bytesToHex(const char* data, const std::size_t len);

  template<typename T>
  std::string numberToHex(T i, const std::size_t width)
  {
    std::stringstream sstream;
    sstream << std::setfill('0') << std::setw(width) << std::hex << i;

    return sstream.str();
  }
}

#endif

