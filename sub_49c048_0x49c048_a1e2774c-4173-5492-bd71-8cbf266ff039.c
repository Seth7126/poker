// ============================================================
// 函数名称: sub_49c048
// 虚拟地址: 0x49c048
// WARP GUID: a1e2774c-4173-5492-bd71-8cbf266ff039
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49b788, sub_402d00
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_49c048(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int16_t var_14
    sub_402d00(&var_14, 0x10, 0)
    var_14 = 2
    int32_t* eax_2
    int32_t* ebp_1
    eax_2, ebp_1 = sub_49b788(arg3, arg4)
    ebp_1[-5] = eax_2
    ebp_1[-3] = ebp_1[-5]
    *(ebp_1 - 0xe) = (*data_5302f0)(ebp_1[2])
    int32_t var_8 = 0x10
    void* var_c = &ebp_1[-4]
    int32_t var_10 = ebp_1[4]
    var_14.d = ebp_1[5]
    int32_t result = (*data_53024c)(arg2, arg1, var_14)
    *ebp_1
    return result
}
