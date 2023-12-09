# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-src"
  "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-build"
  "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-subbuild/catch2-populate-prefix"
  "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-subbuild/catch2-populate-prefix/tmp"
  "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
  "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-subbuild/catch2-populate-prefix/src"
  "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Mina/Desktop/hw2/template/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
