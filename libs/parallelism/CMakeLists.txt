# Copyright (c) 2020 The STE||AR-Group
#
# SPDX-License-Identifier: BSL-1.0
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

# Do not edit this file! It has been generated by the
# libs/create_module_skeleton.py script.

include(HPX_Message)

# cmake-format: off
set(_hpx_parallelism_modules
    algorithms
    async_base
    async_combinators
    async_local
    execution
    executors
    futures
    lcos_local
    pack_traversal
    resiliency
    threading
    timed_execution
)
# cmake-format: on

hpx_info("")
hpx_info("Configuring libhpx_parallelism modules:")

foreach(module ${_hpx_parallelism_modules})
  add_subdirectory(${module})
endforeach()
