// ============================================================
// 函数名称: sub_4668d0
// 虚拟地址: 0x4668d0
// WARP GUID: a9aa3a28-1f9b-5a59-8a34-12cf84116a4e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46032c, sub_4666ec, sub_4533f4
// [被调用的父级函数]: sub_465e68
// ============================================================

void* __convention("regparm")sub_4668d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x161)
    int32_t eax = *(arg1 + 0x161)
    int32_t var_30[0x4]
    sub_4533f4(&var_30, 0, 0x10)
    int32_t var_20[0x4]
    sub_4533f4(&var_20, 0, 0x10)
    void* result = nullptr
    int32_t i = 0
    void* var_34 = arg1 + 0xed
    
    while (i s< *(arg1 + 0xe9))
        result = *var_34
        int32_t edi_1 = *(result + 0x14)
        int32_t ebp_1 = *(result + 0x18)
        
        if (var_30[edi_1] == 0)
            if (arg1[edi_1 + 0x14] == 0)
                arg1[edi_1 + 0x14] = sub_46032c(arg1)
            
            result = sub_4666ec(arg1, arg1[edi_1 + 0x14], *(eax + (edi_1 << 2) + 0x4c))
            var_30[edi_1] = 1
        
        if (var_20[ebp_1] == 0)
            if (arg1[ebp_1 + 0x18] == 0)
                arg1[ebp_1 + 0x18] = sub_46032c(arg1)
            
            result = sub_4666ec(arg1, arg1[ebp_1 + 0x18], *(eax + (ebp_1 << 2) + 0x5c))
            var_20[ebp_1] = 1
        
        i += 1
        var_34 += 4
    
    return result
}
