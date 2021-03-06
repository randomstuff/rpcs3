#include "stdafx.h"
#include "Emu/Cell/PPUModule.h"

namespace vm { using namespace ps3; }

logs::channel cellMusicDecode("cellMusicDecode");

// Return Codes
enum
{
	CELL_MUSIC_DECODE_DECODE_FINISHED         = 0x8002C101,
	CELL_MUSIC_DECODE_ERROR_PARAM             = 0x8002C102,
	CELL_MUSIC_DECODE_ERROR_BUSY              = 0x8002C103,
	CELL_MUSIC_DECODE_ERROR_NO_ACTIVE_CONTENT = 0x8002C104,
	CELL_MUSIC_DECODE_ERROR_NO_MATCH_FOUND    = 0x8002C105,
	CELL_MUSIC_DECODE_ERROR_INVALID_CONTEXT   = 0x8002C106,
	CELL_MUSIC_DECODE_ERROR_DECODE_FAILURE    = 0x8002C107,
	CELL_MUSIC_DECODE_ERROR_NO_MORE_CONTENT   = 0x8002C108,
	CELL_MUSIC_DECODE_DIALOG_OPEN             = 0x8002C109,
	CELL_MUSIC_DECODE_DIALOG_CLOSE            = 0x8002C10A,
	CELL_MUSIC_DECODE_ERROR_NO_LPCM_DATA      = 0x8002C10B,
	CELL_MUSIC_DECODE_NEXT_CONTENTS_READY     = 0x8002C10C,
	CELL_MUSIC_DECODE_ERROR_GENERIC           = 0x8002C1FF,
};

s32 cellMusicDecodeInitialize()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeInitializeSystemWorkload()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeFinalize()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeSelectContents()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeSetDecodeCommand()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeGetDecodeStatus()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeRead()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeGetSelectionContext()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeSetSelectionContext()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeGetContentsId()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeInitialize2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeInitialize2SystemWorkload()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeFinalize2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeSelectContents2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeSetDecodeCommand2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeGetDecodeStatus2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeRead2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeGetSelectionContext2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeSetSelectionContext2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}

s32 cellMusicDecodeGetContentsId2()
{
	UNIMPLEMENTED_FUNC(cellMusicDecode);
	return CELL_OK;
}


DECLARE(ppu_module_manager::cellMusicDecode)("cellMusicDecodeUtility", []()
{
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeInitialize);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeInitializeSystemWorkload);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeFinalize);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeSelectContents);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeSetDecodeCommand);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeGetDecodeStatus);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeRead);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeGetSelectionContext);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeSetSelectionContext);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeGetContentsId);

	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeInitialize2);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeInitialize2SystemWorkload);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeFinalize2);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeSelectContents2);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeSetDecodeCommand2);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeGetDecodeStatus2);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeRead2);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeGetSelectionContext2);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeSetSelectionContext2);
	REG_FUNC(cellMusicDecodeUtility, cellMusicDecodeGetContentsId2);
});
