// ============================================================
// 函数名称: sub_4077b4
// 虚拟地址: 0x4077b4
// WARP GUID: 209b1cec-2b2f-5f5a-99b6-2845d2709483
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GlobalLock, GlobalAlloc
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_412ca4
// ============================================================

int32_t __convention("regparm")sub_4077b4(enum GLOBAL_ALLOC_FLAGS arg1, uint32_t arg2)
{
    // 第一条实际指令: return GlobalLock(GlobalAlloc(arg1, arg2))
    return GlobalLock(GlobalAlloc(arg1, arg2))
}
