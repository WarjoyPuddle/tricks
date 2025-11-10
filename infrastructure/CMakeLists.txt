# Copyright (c) 2025 Wojciech Kałuża
# SPDX-License-Identifier: MIT
# For license details, see LICENSE file

cmake_minimum_required(VERSION 4.0)

project(
  project_tricks
  VERSION 0.0.1
  DESCRIPTION "C++ library for common scripting tasks"
  LANGUAGES CXX)

enable_testing()

option(BUILD_SHARED_LIBS "Build shared libraries" FALSE)

include(${CMAKE_CURRENT_SOURCE_DIR}/tools.cmake)

new_implementation_library(
  TARGET
  tricks_impl
  DIRECTORY
  src/tricks
  INCLUDE_PREFIX
  tricks
  SOURCES
  tricks.cpp
  PUBLIC_HEADERS
  tricks.hpp)

new_exported_library(TARGET tricks INTERFACE_LINKS tricks_impl)

if(DEFINED PRESET_BUILD_TESTS_hbaOdCRUtos3noqP
   AND PRESET_BUILD_TESTS_hbaOdCRUtos3noqP)
  add_custom_target(all_tests)

  new_test_library(
    TARGET
    test_helpers
    DIRECTORY
    test/test_helpers
    SOURCES
    test_helpers.cpp
    PUBLIC_HEADERS
    test_helpers.hpp)

  new_basic_test(000_text)
endif()

prepare_installation()
