// ============================================================
// 函数名称: sub_464a00
// 虚拟地址: 0x464a00
// WARP GUID: d200068c-d1da-564a-a676-86dd3b678c77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_466034, sub_4533f4
// [被调用的父级函数]: sub_4654a8
// ============================================================

int32_t __convention("regparm")sub_464a00(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_24 = arg2
    int32_t var_24 = arg2
    void* edi = *(arg1 + 0x161)
    *(edi + 0x20) = arg1
    *(edi + 0xc) = var_24
    arg2.b = *(arg1 + 0x131) == 0
    int32_t edx = arg2 & 1
    
    if (*(arg1 + 0x139) != 0)
        if (edx == 0)
            *(edi + 4) = sub_465154
            
            if (*(edi + 0x40) == 0)
                *(edi + 0x40) = (*arg1[1])(var_24, edx)
        else
            *(edi + 4) = sub_4650ac
    else if (edx == 0)
        *(edi + 4) = sub_464f18
    else
        *(edi + 4) = sub_464dec
    
    if (var_24 == 0)
        *(edi + 8) = sub_4653ac
    else
        *(edi + 8) = sub_4653e8
    
    int32_t i = 0
    void* var_14 = edi + 0x24
    void* var_18 = arg1 + 0xed
    
    while (i s< *(arg1 + 0xe9))
        void* eax_4 = *var_18
        *var_14 = 0
        int32_t ebx_2
        
        if (edx == 0)
            ebx_2 = *(eax_4 + 0x18)
            *(edi + 0x34) = ebx_2
            
            if (ebx_2 s< 0 || ebx_2 s>= 4)
            label_464b1c:
                void* eax_7 = *arg1
                *(eax_7 + 0x14) = 0x31
                *(eax_7 + 0x18) = ebx_2
                (**arg1)(var_24, edx, i, var_18, var_14)
            else if (arg1[ebx_2 + 0x18] == 0 && var_24 == 0)
                goto label_464b1c
            
        label_464b2e:
            
            if (var_24 != 0)
                if (*(edi + (ebx_2 << 2) + 0x5c) == 0)
                    *(edi + (ebx_2 << 2) + 0x5c) = (*arg1[1])(var_24, edx, i, var_18, var_14)
                
                sub_4533f4(*(edi + (ebx_2 << 2) + 0x5c), 0, 0x404)
            else if (edx == 0)
                sub_466034(arg1, arg1[ebx_2 + 0x18], edi + (ebx_2 << 2) + 0x4c)
            else
                sub_466034(arg1, arg1[ebx_2 + 0x14], edi + (ebx_2 << 2) + 0x4c)
        else if (*(arg1 + 0x139) == 0)
            ebx_2 = *(eax_4 + 0x14)
            
            if (ebx_2 s< 0 || ebx_2 s>= 4)
            label_464aec:
                void* eax_5 = *arg1
                *(eax_5 + 0x14) = 0x31
                *(eax_5 + 0x18) = ebx_2
                (**arg1)(var_24, edx, i, var_18, var_14)
            else if (arg1[ebx_2 + 0x14] == 0 && var_24 == 0)
                goto label_464aec
            
            goto label_464b2e
        i += 1
        var_14 += 4
        var_18 += 4
    
    *(edi + 0x38) = 0
    *(edi + 0x3c) = 0
    *(edi + 0x18) = 0
    *(edi + 0x1c) = 0
    int32_t result = arg1[0x30]
    *(edi + 0x44) = result
    *(edi + 0x48) = 0
    return result
}
