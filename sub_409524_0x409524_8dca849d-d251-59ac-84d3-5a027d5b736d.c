// ============================================================
// 函数名称: sub_409524
// 虚拟地址: 0x409524
// WARP GUID: 8dca849d-d251-59ac-84d3-5a027d5b736d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4091b0, sub_40c218, sub_4b498a
// ============================================================

void* __convention("regparm")sub_409524(char* arg1, char arg2)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    char* edi = arg1
    int32_t i = 0xffffffff
    arg1.b = 0
    bool cond:2 = false
    
    while (i != 0)
        char temp0_1 = *edi
        cond:2 = 0 != temp0_1
        edi = &edi[1]
        i -= 1
        
        if (0 == temp0_1)
            break
    
    int32_t i_1 = not.d(i)
    char* edi_1 = var_8
    arg1.b = arg2
    
    while (i_1 != 0)
        char temp1_1 = *edi_1
        cond:2 = arg1.b != temp1_1
        edi_1 = &edi_1[1]
        i_1 -= 1
        
        if (arg1.b == temp1_1)
            break
    
    if (cond:2)
        return nullptr
    
    return edi_1 - 1
}
