//
// Originally Autogenerated from indy-sdk main header files (indy_*.h)
//

#include <stdio.h>
#include "findy_glue.h"
#include "findy_callback_types.h"

// cgo generated
#include "_cgo_export.h"

#define CALLBACK_FUNCTION_HERE (indy_handler_str)strHandler

indy_error_t findy_sign_and_submit_request(indy_handle_t cmd_handle, indy_handle_t pool_handle, indy_handle_t wallet_handle, char *submitter_did, char *request_json) {
	indy_error_t err = indy_sign_and_submit_request(cmd_handle, pool_handle, wallet_handle, submitter_did, request_json, (indy_handler_str)strHandler );
	if (err != Success) {
		strHandler(cmd_handle, err, "ERROR");
	}
	return err;
}

indy_error_t findy_submit_request(indy_handle_t command_handle, indy_handle_t pool_handle, char *request_json ) {
	indy_error_t err = indy_submit_request(command_handle, pool_handle, request_json, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_submit_action(indy_handle_t command_handle, indy_handle_t pool_handle, char *request_json, char *nodes, indy_i32_t timeout ) {
	indy_error_t err = indy_submit_action(command_handle, pool_handle, request_json, nodes, timeout, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_sign_request(indy_handle_t command_handle, indy_handle_t wallet_handle, char *submitter_did, char *request_json ) {
	indy_error_t err = indy_sign_request(command_handle, wallet_handle, submitter_did, request_json, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_multi_sign_request(indy_handle_t command_handle, indy_handle_t wallet_handle, char *submitter_did, char *request_json ) {
	indy_error_t err = indy_multi_sign_request(command_handle, wallet_handle, submitter_did, request_json, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_ddo_request(indy_handle_t command_handle, char *submitter_did, char *target_did ) {
	indy_error_t err = indy_build_get_ddo_request(command_handle, submitter_did, target_did, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_nym_request(indy_handle_t cmd_handle, char *submitter_did, char *target_did, char *verkey, char *alias, char *role) {
	indy_error_t err = indy_build_nym_request(cmd_handle, submitter_did, target_did, verkey, alias, role, (indy_handler_str)strHandler );
	if (err != Success) {
		strHandler(cmd_handle, err, "ERROR");
	}
	return err;
}

indy_error_t findy_build_attrib_request(indy_handle_t command_handle, char *submitter_did, char *target_did, char *hash, char *raw, char *enc ) {
	indy_error_t err = indy_build_attrib_request(command_handle, submitter_did, target_did, hash, raw, enc, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_attrib_request(indy_handle_t command_handle, char *submitter_did, char *target_did, char *hash, char *raw, char *enc ) {
	indy_error_t err = indy_build_get_attrib_request(command_handle, submitter_did, target_did, hash, raw, enc, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_nym_request(indy_handle_t command_handle, char *submitter_did, char *target_did ) {
	indy_error_t err = indy_build_get_nym_request(command_handle, submitter_did, target_did, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_schema_request(indy_handle_t command_handle, char *submitter_did, char *data ) {
	indy_error_t err = indy_build_schema_request(command_handle, submitter_did, data, CALLBACK_FUNCTION_HERE ); //request_json
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

//
indy_error_t findy_build_get_schema_request(indy_handle_t command_handle, char *submitter_did, char *id ) {
	indy_error_t err = indy_build_get_schema_request(command_handle, submitter_did, id, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_parse_get_schema_response(indy_handle_t command_handle, char *get_schema_response ) {
	indy_error_t err = indy_parse_get_schema_response(command_handle, get_schema_response, (indy_handler_str_str)strStrHandler );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_cred_def_request(indy_handle_t command_handle, char *submitter_did, char *data ) {
	indy_error_t err = indy_build_cred_def_request(command_handle, submitter_did, data, CALLBACK_FUNCTION_HERE );//request_json
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_cred_def_request(indy_handle_t command_handle, char *submitter_did, char *id ) {
	indy_error_t err = indy_build_get_cred_def_request(command_handle, submitter_did, id, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_parse_get_cred_def_response(indy_handle_t command_handle, char *get_cred_def_response ) {
	indy_error_t err = indy_parse_get_cred_def_response(command_handle, get_cred_def_response, (indy_handler_str_str)strStrHandler );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_node_request(indy_handle_t command_handle, char *submitter_did, char *target_did, char *data ) {
	indy_error_t err = indy_build_node_request(command_handle, submitter_did, target_did, data, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_validator_info_request(indy_handle_t command_handle, char *submitter_did ) {
	indy_error_t err = indy_build_get_validator_info_request(command_handle, submitter_did, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_txn_request(indy_handle_t command_handle, char *submitter_did, char *ledger_type, indy_i32_t seq_no ) {
	indy_error_t err = indy_build_get_txn_request(command_handle, submitter_did, ledger_type, seq_no, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_pool_config_request(indy_handle_t command_handle, char *submitter_did, indy_bool_t writes, indy_bool_t force ) {
	indy_error_t err = indy_build_pool_config_request(command_handle, submitter_did, writes, force, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_pool_restart_request(indy_handle_t command_handle, char *submitter_did, char *action, char *datetime ) {
	indy_error_t err = indy_build_pool_restart_request(command_handle, submitter_did, action, datetime, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_pool_upgrade_request(indy_handle_t command_handle, char *submitter_did, char *name, char *version, char *action, char *sha256, indy_i32_t timeout, char *schedule, char *justification, indy_bool_t reinstall, indy_bool_t force, char *package_ ) {
	indy_error_t err = indy_build_pool_upgrade_request(command_handle, submitter_did, name, version, action, sha256, timeout, schedule, justification, reinstall, force, package_, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_revoc_reg_def_request(indy_handle_t command_handle, char *submitter_did, char *data ) {
	indy_error_t err = indy_build_revoc_reg_def_request(command_handle, submitter_did, data, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_revoc_reg_def_request(indy_handle_t command_handle, char *submitter_did, char *id ) {
	indy_error_t err = indy_build_get_revoc_reg_def_request(command_handle, submitter_did, id, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_parse_get_revoc_reg_def_response(indy_handle_t command_handle, char *get_revoc_ref_def_response ) {
	indy_error_t err = indy_parse_get_revoc_reg_def_response(command_handle, get_revoc_ref_def_response, (indy_handler_str_str)strStrHandler );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_revoc_reg_entry_request(indy_handle_t command_handle, char *submitter_did, char *revoc_reg_def_id, char *rev_def_type, char *value ) {
	indy_error_t err = indy_build_revoc_reg_entry_request(command_handle, submitter_did, revoc_reg_def_id, rev_def_type, value, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_revoc_reg_request(indy_handle_t command_handle, char *submitter_did, char *revoc_reg_def_id, long long timestamp ) {
	indy_error_t err = indy_build_get_revoc_reg_request(command_handle, submitter_did, revoc_reg_def_id, timestamp, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_parse_get_revoc_reg_response(indy_handle_t command_handle, char *get_revoc_reg_response ) {
	indy_error_t err = indy_parse_get_revoc_reg_response(command_handle, get_revoc_reg_response,  (indy_handler_str_str_ull)strStrUllHandler );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_build_get_revoc_reg_delta_request(indy_handle_t command_handle, char *submitter_did, char *revoc_reg_def_id, long long from, long long to ) {
	indy_error_t err = indy_build_get_revoc_reg_delta_request(command_handle, submitter_did, revoc_reg_def_id, from, to, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_parse_get_revoc_reg_delta_response(indy_handle_t command_handle, char *get_revoc_reg_delta_response ) {
	indy_error_t err = indy_parse_get_revoc_reg_delta_response(command_handle, get_revoc_reg_delta_response, (indy_handler_str_str_ull)strStrUllHandler );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_get_response_metadata(indy_handle_t command_handle, char *response ) {
	indy_error_t err = indy_get_response_metadata(command_handle, response, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

