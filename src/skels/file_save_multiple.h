/*
 * File automatically generated by
 * gengen 1.2 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#ifndef FILE_SAVE_MULTIPLE_GEN_CLASS_H
#define FILE_SAVE_MULTIPLE_GEN_CLASS_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class file_save_multiple_gen_class
{
 protected:
  bool has_arg;
  string opt_name;
  string opt_var;
  string values;

 public:
  file_save_multiple_gen_class() :
    has_arg (false)
  {
  }
  
  file_save_multiple_gen_class(bool _has_arg, const string &_opt_name, const string &_opt_var, const string &_values) :
    has_arg (_has_arg), opt_name (_opt_name), opt_var (_opt_var), values (_values)
  {
  }

  static void
  generate_string(const string &s, ostream &stream, unsigned int indent)
  {
    if (!indent || s.find('\n') == string::npos)
      {
        stream << s;
        return;
      }

    string::size_type pos;
    string::size_type start = 0;
    string ind (indent, ' ');
    while ( (pos=s.find('\n', start)) != string::npos)
      {
        stream << s.substr (start, (pos+1)-start);
        start = pos+1;
        if (start+1 <= s.size ())
          stream << ind;
      }
    if (start+1 <= s.size ())
      stream << s.substr (start);
  }

  void set_has_arg(bool _has_arg)
  {
    has_arg = _has_arg;
  }

  void set_opt_name(const string &_opt_name)
  {
    opt_name = _opt_name;
  }

  void set_opt_var(const string &_opt_var)
  {
    opt_var = _opt_var;
  }

  void set_values(const string &_values)
  {
    values = _values;
  }

  void generate_file_save_multiple(ostream &stream, unsigned int indent = 0);
  
};

#endif // FILE_SAVE_MULTIPLE_GEN_CLASS_H
