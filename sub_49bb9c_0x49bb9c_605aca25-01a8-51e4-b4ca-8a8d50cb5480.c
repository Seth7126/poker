// ============================================================
// 函数名称: sub_49bb9c
// 虚拟地址: 0x49bb9c
// WARP GUID: 605aca25-01a8-51e4-b4ca-8a8d50cb5480
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49b788, sub_404078
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_49bb9c(int16_t arg1, int32_t arg2, int32_t* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    int16_t var_18 = arg1
    
    if (sub_404078(arg4) != 0)
        int32_t* eax_4
        eax_4, ebp_1 = sub_49b788(arg3, arg4)
        ebp_1[-6] = eax_4
        ebp_1[-4] = ebp_1[-6]
    else
        int32_t var_14_1 = 0
    
    *(ebp_1 - 0x12) = (*data_5302f0)(ebp_1[2])
    int32_t result = (*data_530264)(arg2, &ebp_1[-5], 0x10)
    *ebp_1
    return result
}
