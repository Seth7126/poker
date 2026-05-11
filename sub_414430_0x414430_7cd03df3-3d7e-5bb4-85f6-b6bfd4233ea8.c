// ============================================================
// 函数名称: sub_414430
// 虚拟地址: 0x414430
// WARP GUID: 7cd03df3-3d7e-5bb4-85f6-b6bfd4233ea8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413600, sub_413a6c, sub_415210
// [被调用的父级函数]: sub_4148a8, sub_41449c, sub_414aa0, sub_442d80, sub_414264, sub_4144f0, sub_415e4c, sub_414224, sub_4142a4, sub_4142f0, sub_415e60, sub_413b8c
// ============================================================

int32_t __convention("regparm")sub_414430(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    char eax_1 = sub_415210(ecx)
    int32_t result
    
    if (eax_1 == 2)
        char result_1
        sub_413a6c(arg1, &result_1, 1)
        result = sx.d(result_1)
    else if (eax_1 == 3)
        int16_t result_2
        sub_413a6c(arg1, &result_2, 2)
        result = sx.d(result_2)
    else
        if (eax_1 != 4)
            sub_413600()
            noreturn
        
        sub_413a6c(arg1, &result, 4)
    
    return result
}
