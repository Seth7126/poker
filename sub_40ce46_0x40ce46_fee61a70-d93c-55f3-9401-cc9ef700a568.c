// ============================================================
// 函数名称: sub_40ce46
// 虚拟地址: 0x40ce46
// WARP GUID: fee61a70-d93c-55f3-9401-cc9ef700a568
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40ce46(char* arg1, int32_t arg2, int32_t arg3, char* arg4 @ esi)
{
    // 第一条实际指令: int32_t var_4 = arg2
    int32_t var_4 = arg2
    int32_t* esp = &var_4
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = arg1:1.b
    char* entry_ebx
    arg1:1.b += entry_ebx:1.b
    void* ecx_1
    bool cond:4_1
    bool cond:6_1
    bool cond:9_1
    bool cond:16_1
    
    if (temp1 != neg.b(entry_ebx:1.b) && arg3 == 1)
        *(arg3 - 1 + arg1) += arg1.b
        char* var_8 = entry_ebx
        esp = &var_8
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp2_1 = arg1.b
        arg1.b += entry_ebx:1.b
        cond:4_1 = temp2_1 == neg.b(entry_ebx:1.b)
        cond:6_1 = temp2_1 == neg.b(entry_ebx:1.b)
        cond:9_1 = temp2_1 == neg.b(entry_ebx:1.b)
        cond:16_1 = temp2_1 == neg.b(entry_ebx:1.b)
        ecx_1 = arg3 - 2
        
        if (temp2_1 == neg.b(entry_ebx:1.b) || ecx_1 != 0)
            goto label_40cead
        
        arg1.b += arg2:1.b
        *entry_ebx += arg2.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        trap(0xd)
    
    ecx_1 = arg3 - 2
    void* ecx_4
    
    if (temp1 != neg.b(entry_ebx:1.b) && ecx_1 == 0)
        arg1[0x5307] += ecx_1.b
        *arg1 += arg1.b
        char temp3_1 = arg1:1.b
        arg1:1.b += entry_ebx.b
        cond:4_1 = temp3_1 == neg.b(entry_ebx.b)
        cond:6_1 = temp3_1 == neg.b(entry_ebx.b)
        cond:9_1 = temp3_1 == neg.b(entry_ebx.b)
        cond:16_1 = temp3_1 == neg.b(entry_ebx.b)
    label_40cead:
        ecx_4 = ecx_1 - 1
        
        if (cond:4_1 || ecx_4 != 0)
            goto label_40cf01
        
        arg1[7] += arg1:1.b
        *(esp - 4) = entry_ebx
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp6 = arg1.b
        arg1.b += entry_ebx.b
        
        if (temp6 == neg.b(entry_ebx.b) || ecx_4 != 1)
            if (temp6 == neg.b(entry_ebx.b) || ecx_4 != 2)
                jump(0x40cf61)
            
            jump(0x40cf0f)
        
        *(arg4 + arg1) += entry_ebx.b
        *(esp - 8) = entry_ebx
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp8 = arg1:1.b
        arg1:1.b += arg2.b
        
        if (temp8 == neg.b(arg2.b) || ecx_4 != 2)
            jump(0x40cf19)
        
        jump(0x40cec7)
    
    ecx_4 = ecx_1 - 1
    char* ecx_8
    
    if (temp1 == neg.b(entry_ebx:1.b) || ecx_4 != 0)
        ecx_8 = ecx_4 - 1
        
        if (temp1 == neg.b(entry_ebx:1.b) || ecx_8 != 0)
            if (temp1 == neg.b(entry_ebx:1.b) || ecx_8 != 1)
                if (temp1 == neg.b(entry_ebx:1.b) || ecx_8 != 2)
                    jump(sub_40d01e+0x27)
                
                jump(0x40cff3)
            
            arg1[0x530a] += (ecx_8 - 1).b
            *arg1 += arg1.b
            arg1[0xdc0052e1] += (ecx_8 - 1).b
            char* eax_2
            int16_t ecx_14
            void* __return_addr_1
            eax_2, __return_addr_1, ecx_14 = (*arg2)()
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            __return_addr = __return_addr_1
            eax_2[0x52fe] += ecx_14:1.b
            *eax_2 += eax_2.b
            eax_2[0xc80052e1] += eax_2.b
            *entry_ebx |= __return_addr_1.b
            *eax_2 += eax_2.b
            char temp9 = *eax_2
            *eax_2 += eax_2.b
            
            if (temp9 s< neg.b(eax_2.b))
                jump(0x40cfaf)
            
            jump(sub_40cf8a+0x44)
        
        arg1[0x5303] += ecx_8:1.b
        *arg1 += arg1.b
        ecx_8[0x9240052] += arg1:1.b
    else
        arg1.b += arg2.b
        arg1.b += 0x53
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp4_1 = arg1.b
        char temp5_1 = arg1.b
        arg1.b *= 2
        cond:6_1 = temp4_1 == neg.b(temp5_1)
        cond:9_1 = temp4_1 == neg.b(temp5_1)
        cond:16_1 = temp4_1 == neg.b(temp5_1)
    label_40cf01:
        
        if (not(cond:6_1) && ecx_4 == 1)
            arg1:1.b *= 2
            *entry_ebx += arg2
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg1.b += 0x53
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg1[0x880052e1] += entry_ebx:1.b
            arg1[0x53] += (&arg1[0x53]).b
            void* eax
            eax:1.b = 0xe1
            *0x700052dd = arg2
            *(eax + 0x70005330) += arg2.b
            *eax += eax.b
            eax.b = 0xe1
            *0x700052d9 = arg2
            *(arg2 + eax + 0x53) += entry_ebx.b
            char temp7 = *eax
            *eax -= 0x1f
            eax.b = *arg4
            
            if (temp7 != 0x1f && ecx_4 == 2)
                eax:1.b = 0xe1 + eax.b
                undefined
            
            if (temp7 == 0x1f || ecx_4 != 3)
                jump(sub_40cf8a+0x5b)
            
            jump(sub_40cf8a+9)
        
        ecx_8 = ecx_4 - 2
        
        if (cond:9_1 || ecx_8 != 0)
            if (cond:16_1 || ecx_8 != 1)
                jump(&data_40cffc:1)
            
            jump(0x40cfab)
        
        *(ecx_8 * 2) += arg1:1.b
    
    *(esp - 4) = entry_ebx
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x780052e1] += arg1:1.b
    *entry_ebx |= arg2.b
    *arg1 += arg1.b
    char temp10 = *arg1
    *arg1 += arg1.b
    bool p = unimplemented  {add byte [eax], al}
    bool a = unimplemented  {add byte [eax], al}
    bool z = temp10 == neg.b(arg1.b)
    bool d
    *(esp - 8) = (add_overflow(temp10, arg1.b) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (temp10 + arg1.b s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
        | (temp10 + arg1.b u< temp10 ? 1 : 0)
    
    if (z || ecx_8 != 1)
        if (z || ecx_8 != 2)
            jump(&data_40d00c:9)
        
        jump(0x40cfc3)
    
    arg1[5] += arg1.b
    *(esp - 0xc) = entry_ebx
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x700052e1] += entry_ebx.b
    *entry_ebx += arg2
    *arg1 += arg1.b
    char temp11 = *arg1
    *arg1 += arg1.b
    
    if (temp11 == neg.b(arg1.b) || ecx_8 != 2)
        jump(sub_40cf8a+0x4f)
    
    jump(0x40cf87)
}
