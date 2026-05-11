// ============================================================
// 函数名称: sub_40ad30
// 虚拟地址: 0x40ad30
// WARP GUID: 9a98358b-a34a-540e-a832-0513b7072502
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ae8, sub_40acbc
// [被调用的父级函数]: sub_40ad6c
// ============================================================

char** __fastcallsub_40ad30(int32_t arg1, int32_t arg2, uint32_t arg3 @ eax, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    char** result = sub_40acbc(nullptr, arg3, *(arg5 - 4), arg4)
    
    if (*arg4 != 0)
        return result
    
    return sub_405ae8(*(arg1 + (arg2 << 2)), arg4)
}
