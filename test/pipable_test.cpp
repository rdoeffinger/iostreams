// (C) Copyright Jonathan Turkanis 2004
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt.)

// See http://www.boost.org/libs/iostreams for documentation.

#include <boost/test/unit_test.hpp>
#include "./pipable_test.hpp"

using boost::unit_test_framework::test_suite;      

test_suite* init_unit_test_suite(int, char* []) 
{
    test_suite* test = BOOST_TEST_SUITE("pipable test");
    test->add(BOOST_TEST_CASE(&pipable_test));
    return test;
}