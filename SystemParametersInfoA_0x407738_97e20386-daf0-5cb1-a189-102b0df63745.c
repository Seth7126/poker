// ============================================================
// 函数名称: SystemParametersInfoA
// 虚拟地址: 0x407738
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44c644, sub_4359e0, sub_435a60, sub_4206e7, sub_4476f4, sub_4207bf, sub_447eec, sub_420613, sub_447c14, sub_43b56c, sub_447ebc
// ============================================================

BOOL __stdcallSystemParametersInfoA(enum SYSTEM_PARAMETERS_INFO_ACTION uiAction, uint32_t uiParam, void* pvParam, enum SYSTEM_PARAMETERS_INFO_UPDATE_FLAGS fWinIni)
{
    // 第一条实际指令: return SystemParametersInfoA(uiAction, uiParam, pvParam, fWinIni) __tailcall
    return SystemParametersInfoA(uiAction, uiParam, pvParam, fWinIni) __tailcall
}
