//String Extension v1.01
//Written by Andrew Sturges
//April 2015

#ifndef _BASIC_STRINGEXT_H
#define _BASIC_STRINGEXT_H

#include <string>
#include <fstream>

std::string MidStr(const std::string&, unsigned int, unsigned int cutLen = std::string::npos);
std::string LeftStr(const std::string&, unsigned int);
std::string RightStr(const std::string&, unsigned int);
std::string TrimStr(const std::string&);
std::string LTrimStr(const std::string&);
std::string RTrimStr(const std::string&);
std::string UCaseStr(const std::string&);
std::string LCaseStr(const std::string&);
std::string NumToStr(double);
double StrToNum(const std::string&);
bool IsNumericStr(const std::string&);
void WriteStrToFile(std::ofstream&, const std::string&);

#endif
