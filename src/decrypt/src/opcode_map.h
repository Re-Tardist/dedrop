
//#include <windows.h>
#include "opcode.h"

#define _INVALID_OPCODE (255)

/**
 * This array maps the opcodes from Dropbox ones to regular Python 2.5.4 opcodes.
 */
UINT8 opcode_map[] = {
		/*  0 */ STOP_CODE, POP_BLOCK, BINARY_OR, INPLACE_MODULO, BINARY_SUBSCR, 
        /*  5 */ BINARY_TRUE_DIVIDE, INPLACE_ADD, BINARY_LSHIFT, INPLACE_MULTIPLY, PRINT_ITEM, 
        /* 10 */ INPLACE_OR, INPLACE_LSHIFT, BINARY_DIVIDE, DUP_TOP, PRINT_NEWLINE, 
        /* 15 */ POP_TOP, SLICE + 0, SLICE + 1, SLICE + 2, SLICE + 3, 
        /* 20 */ PRINT_EXPR, BINARY_XOR, BINARY_RSHIFT, INPLACE_XOR, INPLACE_AND, 
        /* 25 */ UNARY_CONVERT, YIELD_VALUE, INPLACE_DIVIDE, BINARY_POWER, INPLACE_SUBTRACT, 
        /* 30 */ INPLACE_TRUE_DIVIDE, STORE_SUBSCR, INPLACE_FLOOR_DIVIDE, PRINT_ITEM_TO, UNARY_INVERT, 
        /* 35 */ PRINT_NEWLINE_TO, BINARY_MULTIPLY, WITH_CLEANUP, UNARY_NOT, GET_ITER, 
        /* 40 */ BREAK_LOOP, BINARY_MODULO, BUILD_CLASS, BINARY_FLOOR_DIVIDE, DELETE_SLICE + 0, 
        /* 45 */ DELETE_SLICE + 1, DELETE_SLICE + 2, DELETE_SLICE + 3, UNARY_POSITIVE, ROT_FOUR, 
        /* 50 */ BINARY_AND, LOAD_LOCALS, BINARY_ADD, NOP, UNARY_NEGATIVE, 
        /* 55 */ BINARY_SUBTRACT, IMPORT_STAR, INPLACE_POWER, INPLACE_RSHIFT, ROT_TWO, 
        /* 60 */ ROT_THREE, STORE_SLICE + 0, STORE_SLICE + 1, STORE_SLICE + 2, STORE_SLICE + 3, 
        /* 65 */ EXEC_STMT, RETURN_VALUE, END_FINALLY, _INVALID_OPCODE, DELETE_SUBSCR, 
        /* 70 */ STORE_MAP, _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, 
        /* 75 */ _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, 
        /* 80 */ LOAD_GLOBAL, DELETE_FAST, LOAD_CONST, LIST_APPEND, SETUP_LOOP, 
        /* 85 */ SETUP_FINALLY, MAKE_FUNCTION, BUILD_SLICE, BUILD_MAP, LOAD_NAME, 
        /* 90 */ BUILD_TUPLE, FOR_ITER, STORE_FAST, _INVALID_OPCODE, STORE_ATTR, 
        /* 95 */ MAKE_CLOSURE, LOAD_ATTR, DELETE_ATTR, IMPORT_NAME, IMPORT_FROM, 
        /* 100 */ _INVALID_OPCODE, RAISE_VARARGS, LOAD_FAST, UNPACK_SEQUENCE, DELETE_NAME, 
        /* 105 */ STORE_NAME, CONTINUE_LOOP, LOAD_CLOSURE, DELETE_GLOBAL, LOAD_DEREF, 
        /* 110 */ STORE_DEREF, COMPARE_OP, CALL_FUNCTION, JUMP_ABSOLUTE, DUP_TOPX, 
        /* 115 */ STORE_GLOBAL, SETUP_EXCEPT, BUILD_LIST, BUILD_SET, JUMP_FORWARD, 
        /* 120 */ JUMP_IF_FALSE_OR_POP, POP_JUMP_IF_TRUE, JUMP_IF_TRUE_OR_POP, POP_JUMP_IF_FALSE, _INVALID_OPCODE, 
        /* 125 */ _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, 
        /* 130 */ _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, CALL_FUNCTION_VAR, CALL_FUNCTION_KW, 
        /* 135 */ CALL_FUNCTION_VAR_KW, SETUP_WITH, _INVALID_OPCODE, _INVALID_OPCODE, _INVALID_OPCODE, 
        /* 140 */ EXTENDED_ARG, SET_ADD, MAP_ADD 
};
