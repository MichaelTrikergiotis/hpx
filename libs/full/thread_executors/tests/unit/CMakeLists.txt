# Copyright (c) 2020 The STE||AR-Group
#
# SPDX-License-Identifier: BSL-1.0
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

set(tests)

if(HPX_WITH_THREAD_EXECUTORS_COMPATIBILITY)
  set(tests
      ${tests}
      # thread_pool_attached_executors
      thread_pool_os_executors
  )

  if(HPX_WITH_THREAD_POOL_OS_EXECUTOR_COMPATIBILITY)
    set(tests ${tests} this_thread_executors
              standalone_thread_pool_os_executors
    )
  endif()

  if(HPX_WITH_EMBEDDED_THREAD_POOLS_COMPATIBILITY)
    set(tests
        ${tests} resource_manager thread_pool_executors
        thread_suspension_executor timed_this_thread_executors
        timed_thread_pool_executors
    )
  endif()
endif()

set(resource_manager_PARAMETERS THREADS_PER_LOCALITY 4)

foreach(test ${tests})
  set(sources ${test}.cpp)

  set(${test}_PARAMETERS THREADS_PER_LOCALITY 4)

  source_group("Source Files" FILES ${sources})

  set(folder_name "Tests/Unit/Modules/Full/ThreadExecutors")

  # add example executable
  add_hpx_executable(
    ${test}_test INTERNAL_FLAGS
    SOURCES ${sources} ${${test}_FLAGS}
    EXCLUDE_FROM_ALL
    HPX_PREFIX ${HPX_BUILD_PREFIX}
    FOLDER ${folder_name}
  )

  add_hpx_unit_test("modules.thread_executors" ${test} ${${test}_PARAMETERS})

endforeach()
