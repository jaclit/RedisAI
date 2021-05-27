#pragma once
#include "redismodule.h"
#include "execution/run_info.h"

/**
 * @brief  Parse and validate MODELEXECUTE command: create a modelRunCtx based on the model obtained
 * from the key space and save it in the op. The keys of the input and output tensors are stored in
 * the op's inkeys and outkeys arrays, the model key is saved in op's runkey, and the given timeout
 * is saved as well (if given, otherwise it is zero).
 * @return Returns REDISMODULE_OK if the command is valid, REDISMODULE_ERR otherwise.
 */
int ParseModelExecuteCommand(RedisAI_RunInfo *rinfo, RAI_DagOp *currentOp, RedisModuleString **argv,
                             int argc);
