// ============================================================
// 函数名称: sub_42fc10
// 虚拟地址: 0x42fc10
// WARP GUID: e82789ef-3aee-5416-b74f-42fe11c69c9a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindowVisible
// [内部子函数调用]: sub_431bd8, sub_4317d8, sub_42cf3c
// [被调用的父级函数]: sub_44bf24
// ============================================================

BOOL __convention("regparm")sub_42fc10(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    int32_t ebx
    
    if (arg1[0x4e].b == 0 || (arg1[0x10].b & 0x10) == 0 || arg1[9] == 0
            || (*(*(arg2 + 8) + 0x18) & 8) != 0)
        ebx = 0
    else
        ebx.b = 1
    
    BOOL eax_3
    
    if ((*(*(arg2 + 8) + 0x18) & 2) == 0)
        eax_3 = IsWindowVisible(arg1[0x53])
    
    if ((*(*(arg2 + 8) + 0x18) & 2) == 0 && eax_3 != 0)
        eax_3.b = 1
    else
        eax_3 = 0
    
    var_10.b = eax_3.b
    BOOL eax_6
    
    if ((*(*(arg2 + 8) + 0x18) & 1) == 0)
        eax_6 = IsWindowVisible(arg1[0x53])
    
    if ((*(*(arg2 + 8) + 0x18) & 1) == 0 && eax_6 != 0)
        eax_6.b = 1
    else
        eax_6 = 0
    
    var_10:1.b = eax_6.b
    
    if (ebx.b != 0)
        eax_6.b = var_10.b
        eax_6.b |= var_10:1.b
        
        if (eax_6.b != 0)
            sub_4317d8(arg1)
    
    if ((*(arg1 + 0x45) & 2) == 0)
        sub_431bd8(arg1)
    
    BOOL result = sub_42cf3c(arg1, arg2)
    
    if (ebx.b != 0)
        result.b = var_10.b
        result.b |= var_10:1.b
        
        if (result.b != 0)
            return sub_4317d8(arg1)
        
        result = *(arg2 + 8)
        
        if ((*(result + 0x18) & 0xc0) != 0)
            return sub_4317d8(arg1)
    
    return result
}
