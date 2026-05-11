// ============================================================
// 函数名称: sub_49bc14
// 虚拟地址: 0x49bc14
// WARP GUID: 64b908f3-7372-5a91-bd37-4abbff02f572
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49b788
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_49bc14(int16_t arg1, int32_t arg2, int32_t* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int16_t var_14 = arg1
    int32_t* eax_1
    int32_t* ebp_1
    eax_1, ebp_1 = sub_49b788(arg3, arg4)
    ebp_1[-5] = eax_1
    ebp_1[-3] = ebp_1[-5]
    *(ebp_1 - 0xe) = (*data_5302f0)(ebp_1[2])
    void* var_c = &ebp_1[-4]
    int32_t result = (*data_52ff30)(arg2)
    *ebp_1
    return result
}
