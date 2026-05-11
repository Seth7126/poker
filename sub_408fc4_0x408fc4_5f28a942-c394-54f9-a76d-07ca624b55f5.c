// ============================================================
// 函数名称: sub_408fc4
// 虚拟地址: 0x408fc4
// WARP GUID: 5f28a942-c394-54f9-a76d-07ca624b55f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetFilePointer
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_412a9c
// ============================================================

uint32_t __convention("regparm")sub_408fc4(HANDLE arg1, int32_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    // 第一条实际指令: return SetFilePointer(arg1, arg2, nullptr, arg3)
    return SetFilePointer(arg1, arg2, nullptr, arg3)
}
