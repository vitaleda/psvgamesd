#include "hook_ids.h"

//since same hook vars are used for same hooks with different behavior
//it is better to keep variables in one place

tai_hook_ref_t sd_read_hook_ref;
SceUID sd_read_hook_id = -1;

SceUID gen_init_2_patch_uid = -1; // patch of zero func in gen_init_2 function

SceUID hs_dis_patch1_uid = -1; //high speed disable patch 1
SceUID hs_dis_patch2_uid = -1; //high speed disable patch 2

tai_hook_ref_t init_sd_hook_ref;
SceUID init_sd_hook_id = -1; // hook of sd init function in Sdif

tai_hook_ref_t send_command_hook_ref;
SceUID send_command_hook_id = -1;

tai_hook_ref_t gc_cmd56_handshake_hook_ref;
SceUID gc_cmd56_handshake_hook_id = -1;

tai_hook_ref_t mmc_read_hook_ref;
SceUID mmc_read_hook_id = -1;

tai_hook_ref_t get_insert_state_hook_ref;
SceUID get_insert_state_hook_id = -1; 

tai_hook_ref_t clear_sensitive_data_hook_ref;
SceUID clear_sensitive_data_hook_id = -1;

SceUID insert_handler_patch_id = -1;

SceUID remove_handler_patch_id = -1;
