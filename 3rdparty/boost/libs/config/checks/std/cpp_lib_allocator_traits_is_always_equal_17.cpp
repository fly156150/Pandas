//  This file was automatically generated on Sun Apr 21 09:13:03 2019
//  by libs/config/tools/generate.cpp
//  Copyright John Maddock 2002-4.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.//
//  Revision $Id$
//

#ifdef __has_include
#if __has_include(<version>)
#include <version>
#endif
#endif

#include <memory>

#ifndef __cpp_lib_allocator_traits_is_always_equal
#error "Macro << __cpp_lib_allocator_traits_is_always_equal is not set"
#endif

#if __cpp_lib_allocator_traits_is_always_equal < 201411
#error "Macro __cpp_lib_allocator_traits_is_always_equal had too low a value"
#endif

int main( int, char *[] )
{
   return 0;
}
