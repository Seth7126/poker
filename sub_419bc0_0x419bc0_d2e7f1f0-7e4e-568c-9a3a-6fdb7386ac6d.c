// ============================================================
// 函数名称: sub_419bc0
// 虚拟地址: 0x419bc0
// WARP GUID: d2e7f1f0-7e4e-568c-9a3a-6fdb7386ac6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419aac, sub_419b60, sub_419a88
// [被调用的父级函数]: sub_43329c, sub_4263dc, sub_4329c4, sub_42a4d8, sub_41ceb4, sub_42a430, sub_443300, sub_4192d0, sub_43d934, sub_444f24, sub_434670, sub_423ba4, sub_41cf54
// ============================================================

BOOL __convention("regparm")sub_419bc0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: BOOL result = *(arg1 + 4)
    BOOL result = *(arg1 + 4)
    
    if (arg2 != result)
        int32_t ecx
        
        if (result != 0)
            sub_419b60(arg1)
            POINT var_10
            ecx = sub_419a88(arg1, &var_10)
            *(arg1 + 0x18) = var_10.x
            *(arg1 + 0x1c) = var_10.y
            result = 0
            *(arg1 + 4) = 0
            *(arg1 + 8) &= 0xfe
        
        if (arg2 != 0)
            *(arg1 + 8) |= 1
            *(arg1 + 4) = arg2
            return sub_419aac(ecx, arg1 + 0x18)
    
    return result
}
