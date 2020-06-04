//
// Autogenerated from indy-sdk main header files (indy_*.h)
//

#include <stdio.h>
#include "findy_glue.h"
#include "findy_callback_types.h"

// cgo generated
#include "_cgo_export.h"


// TODO: replace this in the ACTUAL function definition TO ROUTE CALLBACKS TO go language
//
#define CALLBACK_FUNCTION_HERE (indy_handler_handle)handleHandler


indy_error_t findy_open_blob_storage_reader(indy_handle_t command_handle, char*type_, char*config_json ) {
	indy_error_t err = indy_open_blob_storage_reader(command_handle, type_, config_json, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

indy_error_t findy_open_blob_storage_writer(indy_handle_t command_handle, char*type_, char*config_json ) {
	indy_error_t err = indy_open_blob_storage_writer(command_handle, type_, config_json, CALLBACK_FUNCTION_HERE );
	if (err != Success) {
		handler(command_handle, err);
	}
	return err;
}

