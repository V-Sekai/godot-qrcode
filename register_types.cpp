/* register_types.cpp */

#include "register_types.h"

#include "core/object/class_db.h"
#include "qrcodetexture.h"

void register_qrcode_types() {
	ClassDB::register_class<QRCodeTexture2D>();
}

void unregister_qrcode_types() {
	// Nothing to do here in this example.
}
