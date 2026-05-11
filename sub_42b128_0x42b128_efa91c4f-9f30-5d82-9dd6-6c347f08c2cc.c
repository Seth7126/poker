// ============================================================
// 函数名称: sub_42b128
// 虚拟地址: 0x42b128
// WARP GUID: efa91c4f-9f30-5d82-9dd6-6c347f08c2cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42bba4, sub_42b1a0, sub_42c7f8, sub_403248
// [被调用的父级函数]: sub_443a1c
// ============================================================

int32_t __convention("regparm")sub_42b128(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (sub_403248(arg1, 0x427f2c) == 0)
    if (sub_403248(arg1, 0x427f2c) == 0)
        sub_42bba4(arg1, *(arg1 + 0x47), 0)
    
    int32_t result
    
    if (arg2 == arg1[9])
        result = sub_42b1a0(arg1, arg3)
    else
        result = sub_42c7f8(arg1, arg3)
    
    if (arg2 != 0 && arg2 != 0xffffffff)
        return result
    
    return (*(*arg1 + 0x60))()
}
