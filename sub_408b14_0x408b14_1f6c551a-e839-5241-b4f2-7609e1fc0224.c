// ============================================================
// 函数名称: sub_408b14
// 虚拟地址: 0x408b14
// WARP GUID: 1f6c551a-e839-5241-b4f2-7609e1fc0224
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CompareStringA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43945c
// ============================================================

int32_t __convention("regparm")sub_408b14(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: return CompareStringA(0x400, 1, arg1, arg3, arg2, arg3) - 2
    return CompareStringA(0x400, 1, arg1, arg3, arg2, arg3) - 2
}
