add_test( [==[empty simulation]==] C:/Users/Mina/Desktop/hw2/template/build/test/Debug/unit-tests.exe [==[empty simulation]==]  )
set_tests_properties( [==[empty simulation]==] PROPERTIES WORKING_DIRECTORY C:/Users/Mina/Desktop/hw2/template/build/test)
add_test( [==[no students]==] C:/Users/Mina/Desktop/hw2/template/build/test/Debug/unit-tests.exe [==[no students]==]  )
set_tests_properties( [==[no students]==] PROPERTIES WORKING_DIRECTORY C:/Users/Mina/Desktop/hw2/template/build/test)
add_test( [==[no space in bar]==] C:/Users/Mina/Desktop/hw2/template/build/test/Debug/unit-tests.exe [==[no space in bar]==]  )
set_tests_properties( [==[no space in bar]==] PROPERTIES WORKING_DIRECTORY C:/Users/Mina/Desktop/hw2/template/build/test)
add_test( [==[Simple simulation - one student]==] C:/Users/Mina/Desktop/hw2/template/build/test/Debug/unit-tests.exe [==[Simple simulation - one student]==]  )
set_tests_properties( [==[Simple simulation - one student]==] PROPERTIES WORKING_DIRECTORY C:/Users/Mina/Desktop/hw2/template/build/test)
add_test( [==[Simple simulation - one group]==] C:/Users/Mina/Desktop/hw2/template/build/test/Debug/unit-tests.exe [==[Simple simulation - one group]==]  )
set_tests_properties( [==[Simple simulation - one group]==] PROPERTIES WORKING_DIRECTORY C:/Users/Mina/Desktop/hw2/template/build/test)
add_test( [==[More complex simulation]==] C:/Users/Mina/Desktop/hw2/template/build/test/Debug/unit-tests.exe [==[More complex simulation]==]  )
set_tests_properties( [==[More complex simulation]==] PROPERTIES WORKING_DIRECTORY C:/Users/Mina/Desktop/hw2/template/build/test)
set( unit-tests_TESTS [==[empty simulation]==] [==[no students]==] [==[no space in bar]==] [==[Simple simulation - one student]==] [==[Simple simulation - one group]==] [==[More complex simulation]==])