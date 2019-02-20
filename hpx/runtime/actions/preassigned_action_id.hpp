//  Copyright (c) 2007-2018 Hartmut Kaiser
//  Copyright (c)      2011 Bryce Lelbach
//  Copyright (c)      2011 Thomas Heller
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

/// \file hpx/runtime/actions/preassigned_action_id.hpp

#ifndef HPX_RUNTIME_ACTIONS_PREASSIGNED_ACTION_ID_HPP
#define HPX_RUNTIME_ACTIONS_PREASSIGNED_ACTION_ID_HPP

#include <hpx/config.hpp>

namespace hpx { namespace actions
{
    /// \cond NOINTERNAL

    enum preassigned_action_id
    {
        register_worker_action_id = 0,
        notify_worker_action_id,
        allocate_action_id,
        base_connect_action_id,
        base_disconnect_action_id,
        base_set_event_action_id,
        base_set_exception_action_id,
        broadcast_call_shutdown_functions_action_id,
        broadcast_call_startup_functions_action_id,
        broadcast_symbol_namespace_on_event_action_id,
        call_shutdown_functions_action_id,
        call_startup_functions_action_id,
        component_namespace_bind_prefix_action_id,
        component_namespace_bind_name_action_id,
        component_namespace_resolve_id_action_id,
        component_namespace_unbind_action_id,
        component_namespace_iterate_types_action_id,
        component_namespace_get_component_type_action_id,
        component_namespace_get_num_localities_action_id,
        component_namespace_statistics_counter_action_id,
        console_error_sink_action_id,
        console_logging_action_id,
        console_print_action_id,
        create_performance_counter_action_id,
        dijkstra_termination_action_id,
        free_component_action_id,
        garbage_collect_action_id,
        get_config_action_id,
        hpx_get_locality_name_action_id,
        hpx_lcos_server_barrier_create_component_action_id,
        hpx_lcos_server_latch_create_component_action_id,
        hpx_lcos_server_latch_wait_action_id,
        list_component_type_action_id,
        list_symbolic_name_action_id,
        load128_action_id,
        load16_action_id,
        load32_action_id,
        load64_action_id,
        load8_action_id,
        load_components_action_id,
        locality_namespace_allocate_action_id,
        locality_namespace_free_action_id,
        locality_namespace_localities_action_id,
        locality_namespace_resolve_locality_action_id,
        locality_namespace_get_num_localities_action_id,
        locality_namespace_get_num_threads_action_id,
        locality_namespace_get_num_overall_threads_action_id,
        locality_namespace_statistics_counter_action_id,
        output_stream_write_async_action_id,
        output_stream_write_sync_action_id,
        performance_counter_get_counter_info_action_id,
        performance_counter_get_counter_value_action_id,
        performance_counter_get_counter_values_array_action_id,
        performance_counter_set_counter_value_action_id,
        performance_counter_reset_counter_value_action_id,
        performance_counter_start_action_id,
        performance_counter_stop_action_id,
        primary_namespace_allocate_action_id,
        primary_namespace_begin_migration_action_id,
        primary_namespace_bind_gid_action_id,
        primary_namespace_colocate_action_id,
        primary_namespace_decrement_credit_action_id,
        primary_namespace_end_migration_action_id,
        primary_namespace_increment_credit_action_id,
        primary_namespace_resolve_gid_action_id,
        primary_namespace_route_action_id,
        primary_namespace_unbind_gid_action_id,
        primary_namespace_statistics_counter_action_id,
        remove_from_connection_cache_action_id,
        set_value_action_agas_bool_response_type_id,
        set_value_action_agas_id_type_response_type_id,
        shutdown_action_id,
        shutdown_all_action_id,
        store128_action_id,
        store16_action_id,
        store32_action_id,
        store64_action_id,
        store8_action_id,
        symbol_namespace_bind_action_id,
        symbol_namespace_resolve_action_id,
        symbol_namespace_unbind_action_id,
        symbol_namespace_iterate_action_id,
        symbol_namespace_on_event_action_id,
        symbol_namespace_statistics_counter_action_id,
        terminate_action_id,
        terminate_all_action_id,
        update_agas_cache_action_id,

        base_lco_with_value_gid_get,
        base_lco_with_value_gid_set,
        base_lco_with_value_vector_gid_get,
        base_lco_with_value_vector_gid_set,
        base_lco_with_value_id_get,
        base_lco_with_value_id_set,
        base_lco_with_value_vector_id_get,
        base_lco_with_value_vector_id_set,
        base_lco_with_value_unused_get,
        base_lco_with_value_unused_set,
        base_lco_with_value_float_get,
        base_lco_with_value_float_set,
        base_lco_with_value_double_get,
        base_lco_with_value_double_set,
        base_lco_with_value_int8_get,
        base_lco_with_value_int8_set,
        base_lco_with_value_uint8_get,
        base_lco_with_value_uint8_set,
        base_lco_with_value_int16_get,
        base_lco_with_value_int16_set,
        base_lco_with_value_uint16_get,
        base_lco_with_value_uint16_set,
        base_lco_with_value_int32_get,
        base_lco_with_value_int32_set,
        base_lco_with_value_uint32_get,
        base_lco_with_value_uint32_set,
        base_lco_with_value_int64_get,
        base_lco_with_value_int64_set,
        base_lco_with_value_uint64_get,
        base_lco_with_value_uint64_set,
        base_lco_with_value_uint128_get,
        base_lco_with_value_uint128_set,
        base_lco_with_value_bool_get,
        base_lco_with_value_bool_set,
        base_lco_with_value_hpx_section_get,
        base_lco_with_value_hpx_section_set,
        base_lco_with_value_hpx_counter_info_get,
        base_lco_with_value_hpx_counter_info_set,
        base_lco_with_value_hpx_counter_value_get,
        base_lco_with_value_hpx_counter_value_set,
        base_lco_with_value_hpx_counter_values_array_get,
        base_lco_with_value_hpx_counter_values_array_set,
        base_lco_with_value_hpx_memory_data_get,
        base_lco_with_value_hpx_memory_data_set,
        base_lco_with_value_std_string_get,
        base_lco_with_value_std_string_set,
        base_lco_with_value_std_bool_ptrdiff_get,
        base_lco_with_value_std_bool_ptrdiff_set,
        base_lco_with_value_vector_bool_get,
        base_lco_with_value_vector_bool_set,
        base_lco_with_value_naming_address_get,
        base_lco_with_value_naming_address_set,
        base_lco_with_value_gva_tuple_get,
        base_lco_with_value_gva_tuple_set,
        base_lco_with_value_std_pair_address_id_type_get,
        base_lco_with_value_std_pair_address_id_type_set,
        base_lco_with_value_std_pair_gid_type_get,
        base_lco_with_value_std_pair_gid_type_set,
        base_lco_with_value_id_type_get,
        base_lco_with_value_id_type_set,
        base_lco_with_value_vector_std_int64_get,
        base_lco_with_value_vector_std_int64_set,
        base_lco_with_value_vector_id_gid_get,
        base_lco_with_value_vector_id_gid_set,
        base_lco_with_value_vector_std_uint32_get,
        base_lco_with_value_vector_std_uint32_set,
        base_lco_with_value_parcelset_endpoints_get,
        base_lco_with_value_parcelset_endpoints_set,
        base_lco_with_value_vector_compute_host_target_get,
        base_lco_with_value_vector_compute_host_target_set,
        base_lco_with_value_vector_compute_cuda_target_get,
        base_lco_with_value_vector_compute_cuda_target_set,

        // typed continuations...
        typed_continuation_hpx_agas_response,

        last_action_id
    };

    /// \endcond
}}

#endif