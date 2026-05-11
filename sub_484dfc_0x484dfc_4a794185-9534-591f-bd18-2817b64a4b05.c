// ============================================================
// 函数名称: sub_484dfc
// 虚拟地址: 0x484dfc
// WARP GUID: 4a794185-9534-591f-bd18-2817b64a4b05
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_47a078, sub_488509, sub_484e24
// ============================================================

int32_t __fastcallsub_484dfc(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char var_1c
    char var_1c
    __builtin_memcpy(&var_1c, arg2, 0x14)
    int32_t var_10
    int32_t result
    result.b = var_10 == 2
    
    if (var_1c != 0)
        result.b = 1
    
    return result
}
