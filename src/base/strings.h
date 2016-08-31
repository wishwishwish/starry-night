/**
 * @file   strings.h/strings.cc
 * @deps   nope
 *
 * @author
 *   chef <191201771@qq.com>
 *     -initial release 2016-08-31
 *
 * @brief  std::string常用操作帮助函数
 *
 */

#ifndef _CHEF_BASE_STRINGS_H_
#define _CHEF_BASE_STRINGS_H_

#include <string>
#include <vector>

namespace chef {

  class strings {
    public:
      /**
       * @function compare
       * @return   0 或 >0 或 <0
       *
       */
      static int compare(const std::string &a, const std::string &b);

      static bool contains(const std::string &s, const std::string &substr);

      static bool contains_any(const std::string &s, const std::string &chars);

      static bool has_prefix(const std::string &s, const std::string &prefix);

      static bool has_suffix(const std::string &s, const std::string &suffix);

      static int count(const std::string &s, const std::string &sep);

      static std::string to_lower(const std::string &s);

      static std::string to_upper(const std::string &s);

      static std::string trim_left(const std::string &s, const std::string &cutset);

      static std::string trim_right(const std::string &s, const std::string &cutset);

      static std::string trim_prefix(const std::string &s, const std::string &prefix);

      static std::string trim_suffix(const std::string &s, const std::string &suffix);

      static std::vector<std::string> split(const std::string &s, char sep);

      static std::string join(const std::vector<std::string> &ss, const std::string &sep);
  };

} // namespace chef

#endif // _CHEF_BASE_STRINGS_H_
