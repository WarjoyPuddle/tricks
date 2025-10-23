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
