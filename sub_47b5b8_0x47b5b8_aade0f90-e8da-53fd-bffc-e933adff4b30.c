// ============================================================
// 函数名称: sub_47b5b8
// 虚拟地址: 0x47b5b8
// WARP GUID: aade0f90-e8da-53fd-bffc-e933adff4b30
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402c90, sub_469d58, sub_40401c, sub_40287c, sub_403df8
// [被调用的父级函数]: sub_4d8208, sub_4692db, sub_508414, sub_4692e4
// ============================================================

int32_t* __fastcallsub_47b5b8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20c = ebx
    char var_208[0x100]
    void var_108
    void* eax
    int32_t* result_1
    int32_t* ebp_1
    result_1, ebp_1 = sub_469d58(eax, &var_108, 0xff, &var_208, arg4, arg1, arg2)
    sub_40287c(0x14, 1, &ebp_1[-0x41], &ebp_1[-0x81])
    int32_t ecx
    ecx.b = ebp_1[-0x81].b
    int32_t ecx_2 = sub_402c90(&ebp_1[-0x81], 0x47b638, ecx + 1)
    int32_t* result
    
    if (ecx == 0xffffffff)
        result = result_1
        sub_403df8(result)
    else
        result = result_1
        sub_40401c(ecx_2, &ebp_1[-0x41])
    
    *ebp_1
    return result
}
