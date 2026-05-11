// ============================================================
// 函数名称: sub_4653e8
// 虚拟地址: 0x4653e8
// WARP GUID: 95643ffc-542b-59d6-8c97-398450397d63
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46032c, sub_4666ec, sub_4533f4, sub_464d1c
// [被调用的父级函数]: sub_464a00
// ============================================================

void* __convention("regparm")sub_4653e8(int32_t* arg1)
{
    // 第一条实际指令: uint32_t eax = *(arg1 + 0x161)
    uint32_t eax = *(arg1 + 0x161)
    sub_464d1c(eax)
    int32_t edx
    edx.b = *(arg1 + 0x131) == 0
    int32_t edx_1 = edx & 1
    int32_t var_20[0x4]
    sub_4533f4(&var_20, 0, 0x10)
    void* result = nullptr
    int32_t i = 0
    void* ebp = arg1 + 0xed
    
    while (i s< *(arg1 + 0xe9))
        result = *ebp
        int32_t ebx_1
        
        if (edx_1 == 0)
            ebx_1 = *(result + 0x18)
        label_46544d:
            
            if (var_20[ebx_1] == 0)
                void** edi_1
                
                if (edx_1 == 0)
                    edi_1 = &arg1[ebx_1 + 0x18]
                else
                    edi_1 = &arg1[ebx_1 + 0x14]
                
                if (*edi_1 == 0)
                    *edi_1 = sub_46032c(arg1)
                
                result = sub_4666ec(arg1, *edi_1, *(eax + (ebx_1 << 2) + 0x5c))
                var_20[ebx_1] = 1
        else if (*(arg1 + 0x139) == 0)
            ebx_1 = *(result + 0x14)
            goto label_46544d
        i += 1
        ebp += 4
    
    return result
}
