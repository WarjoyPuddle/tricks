// Copyright (c) 2025 Wojciech Kałuża
// SPDX-License-Identifier: MIT
// For license details, see LICENSE file

#include "tricks/tricks.hpp"

#include <string>

auto main() -> int
{
  std::string const example_text{tricks::text::example()};

  return example_text.size() == 3 ? 0 : 1;
}
