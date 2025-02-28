#include <MWwsWidgetsAdapter/MWwsWidgetsAdapter.hpp>
#include <Logger/Logger.hpp>
#include <memory>

// MIT License
// Copyright (c) 2024-2025 Tomáš Mark


// main is replaced by wxIMPLEMENT_APP(MyApp);
int mainIsIrelevant() {

#ifdef NDEBUG
  LOG.info("Release configuration!");
#else
  LOG.info("Debug configuration!");
#endif

  char hw[] = "Hello, World!";
  std::unique_ptr<library::MWwsWidgetsAdapter> lib;
  try {
    lib.reset(new library::MWwsWidgetsAdapter());  // c++11
    // lib = std::make_unique<library::MWwsWidgetsAdapter>();  // c++14
    //san::scream();
    { LOG.info(hw); }
    { LOG.debug(hw); }
    { LOG.warning(hw); }
    { LOG.error(hw); }
  } catch (std::exception& e) { LOG.error(e.what()); }
  return 0;
}  // main