// ============================================================
// 函数名称: sub_465e68
// 虚拟地址: 0x465e68
// WARP GUID: 383b0999-9c20-5875-bcb9-7dec173a7750
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_466034, sub_4533f4
// [被调用的父级函数]: sub_4669a8
// ============================================================

void* __convention("regparm")sub_465e68(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x161)
    void* result = *(arg1 + 0x161)
    
    if (arg2 == 0)
        *(result + 4) = sub_466418
        *(result + 8) = sub_466528
    else
        *(result + 4) = sub_46663c
        *(result + 8) = sub_4668d0
    
    int32_t i = 0
    void* var_14 = result + 0x14
    void* var_18 = arg1 + 0xed
    
    while (i s< *(arg1 + 0xe9))
        void* eax_3 = *var_18
        int32_t esi_1 = *(eax_3 + 0x14)
        int32_t edi_1 = *(eax_3 + 0x18)
        
        if (esi_1 s< 0 || esi_1 s>= 4)
        label_465ef4:
            void* eax_4 = *arg1
            *(eax_4 + 0x14) = 0x31
            *(eax_4 + 0x18) = esi_1
            (**arg1)(arg2, result, i, var_18, var_14)
        else if (arg1[esi_1 + 0x14] == 0 && arg2 == 0)
            goto label_465ef4
        
        if (edi_1 s< 0 || edi_1 s>= 4)
        label_465f1c:
            void* eax_6 = *arg1
            *(eax_6 + 0x14) = 0x31
            *(eax_6 + 0x18) = edi_1
            (**arg1)(arg2, result, i, var_18, var_14)
        else if (arg1[edi_1 + 0x18] == 0 && arg2 == 0)
            goto label_465f1c
        
        if (arg2 == 0)
            sub_466034(arg1, arg1[esi_1 + 0x14], (esi_1 << 2) + result + 0x2c)
            sub_466034(arg1, arg1[edi_1 + 0x18], (edi_1 << 2) + result + 0x3c)
        else
            if (*(result + (esi_1 << 2) + 0x4c) == 0)
                *(result + (esi_1 << 2) + 0x4c) = (*arg1[1])(arg2, result, i, var_18, var_14)
            
            sub_4533f4(*(result + (esi_1 << 2) + 0x4c), 0, 0x404)
            
            if (*(result + (edi_1 << 2) + 0x5c) == 0)
                *(result + (edi_1 << 2) + 0x5c) = (*arg1[1])(arg2, result, i, var_18, var_14)
            
            sub_4533f4(*(result + (edi_1 << 2) + 0x5c), 0, 0x404)
        
        *var_14 = 0
        i += 1
        var_14 += 4
        var_18 += 4
    
    *(result + 0xc) = 0
    *(result + 0x10) = 0
    *(result + 0x24) = arg1[0x30]
    *(result + 0x28) = 0
    return result
}
