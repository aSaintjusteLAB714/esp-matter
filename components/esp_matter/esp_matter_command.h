// Copyright 2021 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <esp_matter.h>

namespace esp_matter {
namespace cluster {

/** Specific command create APIs
 *
 * If some standard command is not present here, it can be added.
 * If a custom command needs to be created, the low level esp_matter::command::create() API can be used.
 */

namespace group_key_management {
namespace command {
command_t *create_key_set_write(cluster_t *cluster);
command_t *create_key_set_read(cluster_t *cluster);
command_t *create_key_set_remove(cluster_t *cluster);
command_t *create_key_set_read_all_indices(cluster_t *cluster);
command_t *create_key_set_read_response(cluster_t *cluster);
command_t *create_key_set_read_all_indices_response(cluster_t *cluster);
} /* command */
} /* group_key_management */

namespace general_commissioning {
namespace command {
command_t *create_arm_fail_safe(cluster_t *cluster);
command_t *create_set_regulatory_config(cluster_t *cluster);
command_t *create_commissioning_complete(cluster_t *cluster);
command_t *create_arm_fail_safe_response(cluster_t *cluster);
command_t *create_set_regulatory_config_response(cluster_t *cluster);
command_t *create_commissioning_complete_response(cluster_t *cluster);
} /* command */
} /* general_commissioning */

namespace network_commissioning {
namespace command {
command_t *create_scan_networks(cluster_t *cluster);
command_t *create_add_or_update_wifi_network(cluster_t *cluster);
command_t *create_add_or_update_thread_network(cluster_t *cluster);
command_t *create_remove_network(cluster_t *cluster);
command_t *create_connect_network(cluster_t *cluster);
command_t *create_reorder_network(cluster_t *cluster);
command_t *create_scan_networks_response(cluster_t *cluster);
command_t *create_network_config_response(cluster_t *cluster);
command_t *create_connect_network_response(cluster_t *cluster);
} /* command */
} /* network_commissioning */

namespace administrator_commissioning {
namespace command {
command_t *create_open_commissioning_window(cluster_t *cluster);
command_t *create_open_basic_commissioning_window(cluster_t *cluster);
command_t *create_revoke_commissioning(cluster_t *cluster);
} /* command */
} /* administrator_commissioning */

namespace operational_credentials {
namespace command {
command_t *create_attestation_request(cluster_t *cluster);
command_t *create_certificate_chain_request(cluster_t *cluster);
command_t *create_csr_request(cluster_t *cluster);
command_t *create_add_noc(cluster_t *cluster);
command_t *create_update_noc(cluster_t *cluster);
command_t *create_update_fabric_label(cluster_t *cluster);
command_t *create_remove_fabric(cluster_t *cluster);
command_t *create_add_trusted_root_certificate(cluster_t *cluster);
command_t *create_attestation_response(cluster_t *cluster);
command_t *create_certificate_chain_response(cluster_t *cluster);
command_t *create_csr_response(cluster_t *cluster);
command_t *create_noc_response(cluster_t *cluster);
} /* command */
} /* operational_credentials */

namespace ota_provider {
namespace command {
command_t *create_query_image(cluster_t *cluster);
command_t *create_apply_update_request(cluster_t *cluster);
command_t *create_notify_update_applied(cluster_t *cluster);
command_t *create_query_image_response(cluster_t *cluster);
command_t *create_apply_update_response(cluster_t *cluster);
} /* command */
} /* ota_provider */

namespace ota_requestor {
namespace command {
command_t *create_announce_ota_provider(cluster_t *cluster);
} /* command */
} /* ota_requestor */

namespace identify {
namespace command {
command_t *create_identify(cluster_t *cluster);
command_t *create_trigger_effect(cluster_t *cluster);
} /* command */
} /* identify */

namespace groups {
namespace command {
command_t *create_add_group(cluster_t *cluster);
command_t *create_view_group(cluster_t *cluster);
command_t *create_get_group_membership(cluster_t *cluster);
command_t *create_remove_group(cluster_t *cluster);
command_t *create_remove_all_groups(cluster_t *cluster);
command_t *create_add_group_if_identifying(cluster_t *cluster);
command_t *create_add_group_response(cluster_t *cluster);
command_t *create_view_group_response(cluster_t *cluster);
command_t *create_get_group_membership_response(cluster_t *cluster);
command_t *create_remove_group_response(cluster_t *cluster);
} /* command */
} /* groups */

namespace scenes {
namespace command {
command_t *create_add_scene(cluster_t *cluster);
command_t *create_view_scene(cluster_t *cluster);
command_t *create_remove_scene(cluster_t *cluster);
command_t *create_remove_all_scenes(cluster_t *cluster);
command_t *create_store_scene(cluster_t *cluster);
command_t *create_recall_scene(cluster_t *cluster);
command_t *create_get_scene_membership(cluster_t *cluster);
command_t *create_add_scene_response(cluster_t *cluster);
command_t *create_view_scene_response(cluster_t *cluster);
command_t *create_remove_scene_response(cluster_t *cluster);
command_t *create_remove_all_scenes_response(cluster_t *cluster);
command_t *create_store_scene_response(cluster_t *cluster);
command_t *create_get_scene_membership_response(cluster_t *cluster);
} /* command */
} /* scenes */

namespace on_off {
namespace command {
command_t *create_off(cluster_t *cluster);
command_t *create_on(cluster_t *cluster);
command_t *create_toggle(cluster_t *cluster);
command_t *create_off_with_effect(cluster_t *cluster);
command_t *create_on_with_recall_global_scene(cluster_t *cluster);
command_t *create_on_with_timed_off(cluster_t *cluster);
} /* command */
} /* on_off */

namespace level_control {
namespace command {
command_t *create_move_to_level(cluster_t *cluster);
command_t *create_move(cluster_t *cluster);
command_t *create_step(cluster_t *cluster);
command_t *create_stop(cluster_t *cluster);
command_t *create_move_to_level_with_on_off(cluster_t *cluster);
command_t *create_move_with_on_off(cluster_t *cluster);
command_t *create_step_with_on_off(cluster_t *cluster);
command_t *create_stop_with_on_off(cluster_t *cluster);
} /* command */
} /* level_control */

namespace color_control {
namespace command {
command_t *create_move_to_hue(cluster_t *cluster);
command_t *create_move_hue(cluster_t *cluster);
command_t *create_step_hue(cluster_t *cluster);
command_t *create_move_to_saturation(cluster_t *cluster);
command_t *create_move_saturation(cluster_t *cluster);
command_t *create_step_saturation(cluster_t *cluster);
command_t *create_move_to_hue_and_saturation(cluster_t *cluster);
command_t *create_stop_move_step(cluster_t *cluster);
command_t *create_move_to_color_temperature(cluster_t *cluster);
command_t *create_move_color_temperature(cluster_t *cluster);
command_t *create_step_color_temperature(cluster_t *cluster);
command_t *create_move_to_color(cluster_t *cluster);
command_t *create_move_color(cluster_t *cluster);
command_t *create_step_color(cluster_t *cluster);
} /* command */
} /* color_control */

namespace thermostat {
namespace command {
command_t *create_setpoint_raise_lower(cluster_t *cluster);
} /* command */
} /* thermostat */

namespace door_lock {
namespace command {
command_t *create_lock_door(cluster_t *cluster);
command_t *create_unlock_door(cluster_t *cluster);
} /* command */
} /* door_lock */

} /* cluster */
} /* esp_matter */
