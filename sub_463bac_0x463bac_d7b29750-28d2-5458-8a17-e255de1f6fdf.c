// ============================================================
// 函数名称: sub_463bac
// 虚拟地址: 0x463bac
// WARP GUID: d7b29750-28d2-5458-8a17-e255de1f6fdf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4642f8
// ============================================================

int32_t __fastcallsub_463bac(int32_t arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    void* ebx = *(arg3 + 0x3c)
    int32_t var_1c = *(arg3 + 0x159) + 0xc
    int32_t* var_18 = arg5
    int32_t* var_14 = arg2
    
    while (i s< *(arg3 + 0x34))
        *var_14
        (*var_1c)(*var_18 + ((arg4 * *(ebx + 0xc)) << 2))
        var_14 = &var_14[1]
        var_18 = &var_18[1]
        var_1c += 4
        i += 1
        ebx += 0x54
    
    return i
}
