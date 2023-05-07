#pragma once
#include <string>

//#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
//#define LEAVERDYNAMICLIB_API __declspec(dllexport)
//#else
//#define LEAVERDYNAMICLIB_API __declspec(dllimport)
//#endif

class Leaver
{
public:
  void  leave(std::string str);
};
