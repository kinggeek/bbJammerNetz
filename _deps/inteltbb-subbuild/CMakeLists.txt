# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.17.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(inteltbb-populate NONE)

include(ExternalProject)
ExternalProject_Add(inteltbb-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://github.com/oneapi-src/oneTBB/releases/download/v2020.2/tbb-2020.2-win.zip"
                    SOURCE_DIR          "D:/PROJECT/jammerNetz/JammerNetz/_deps/inteltbb-src"
                    BINARY_DIR          "D:/PROJECT/jammerNetz/JammerNetz/_deps/inteltbb-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
