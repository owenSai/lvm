#include <stub/stub.hpp>
#include "base/easylogging++.h"
#include <glua/glua_complie_op.h>
#include <glua/glua_chain_api.hpp>
#include <glua/glua_chain_rpc_api.h>
#include <fc/log/logger.hpp>

Stub::Stub() {
}

Stub::~Stub() {
}

#define CONTRACT_PATH  "D:/git/test_contract/"
#define CONTRACT_NAME  "USC_TEST1.glua"

void Stub::start() {
    // TODO: please start glua here for testing.
    lvm::lua::api::global_glua_chain_api = new lvm::lua::api::GluaChainRpcApi();
    CompileOp op;
    op.compile_lua(CONTRACT_PATH CONTRACT_NAME, true);
}
