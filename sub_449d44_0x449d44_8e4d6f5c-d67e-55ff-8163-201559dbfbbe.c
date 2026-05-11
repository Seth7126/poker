// ============================================================
// 函数名称: sub_449d44
// 虚拟地址: 0x449d44
// WARP GUID: 8e4d6f5c-d67e-55ff-8163-201559dbfbbe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos, PtInRect
// [内部子函数调用]: sub_42b2f0, sub_449ec0, sub_447cd8, sub_42c754, sub_449cec, sub_44a0a0, sub_42a1dc, sub_407800
// [被调用的父级函数]: sub_42c820
// ============================================================

void* __convention("regparm")sub_449d44(BOOL arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: void var_18
    void var_18
    sub_407800(*(arg3 + 8), &var_18)
    int32_t pt
    sub_42b2f0(arg2, &var_18, &pt)
    int32_t edx_2
    edx_2.b = 1
    void* ebx = sub_447cd8(sub_42a1dc(&pt))
    
    if (ebx == 0 || *(ebx + 0x89) == 0)
        return sub_449ec0(arg1)
    
    void* result
    
    if (ebx == *(arg1 + 0x50))
        sub_407800(*(arg3 + 8), &var_18)
        sub_42b2f0(arg2, &var_18, &pt)
        int32_t var_1c
        int32_t var_34_1 = var_1c
        result = PtInRect(arg1 + 0x54, pt)
        
        if (result != 0)
            return result
    
    result.b = *(arg1 + 0x48)
    char var_2c_1 = result.b
    uint32_t var_30
    
    if (var_2c_1 == 0)
        var_30 = *(arg1 + 0x68)
    else
        var_30 = *(arg1 + 0x70)
    
    int32_t ecx_2
    ecx_2.b = var_2c_1
    sub_42c754(ebx, &var_30)
    
    if (var_2c_1 != 0 && var_30 == 0)
        *(arg1 + 0x48) = var_2c_1
        *(arg1 + 0x50) = ebx
        void point
        GetCursorPos(&point)
        return sub_44a0a0(arg1, &point)
    
    sub_449ec0(arg1)
    *(arg1 + 0x48) = var_2c_1
    *(arg1 + 0x50) = ebx
    return sub_449cec(arg1, var_30, 0)
}
