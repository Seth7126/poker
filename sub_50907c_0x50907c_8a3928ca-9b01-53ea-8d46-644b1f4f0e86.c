// ============================================================
// 函数名称: sub_50907c
// 虚拟地址: 0x50907c
// WARP GUID: 8a3928ca-9b01-53ea-8d46-644b1f4f0e86
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_520efc, sub_4c2de8, sub_4836b0, sub_512cbc, sub_4c2d7c, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

void* __convention("regparm")sub_50907c(char arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8:3.b = arg1
    int32_t edi = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) != 0 && sub_512cbc(*data_530454, ebx_1) != 0)
                int32_t temp3_1 = edi
                edi += 1
                
                if (add_overflow(temp3_1, 1))
                    sub_403010()
                    noreturn
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_5
    int32_t ecx_1
    eax_5, ecx_1 = sub_4c2de8(0)
    
    if (eax_5 s<= 1)
        var_8:3.b = 1
    
    if (var_8:3.b != 0 && *(*data_530454 + 0x1e1) == 0)
        *(*data_530454 + 0x1e1) = 1
        *data_5301f4
        sub_520efc(ecx_1, 0, i_1, edi - 1)
        void* eax_11 = data_5302c8
        *eax_11
        bool o_2 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t* edi_2 = *(*data_530304 + 0xab0) + *eax_11 * 0x81c0 + 0x140
        *edi_2 = 0x646e4504
        edi_2[1].b = data_509188.b
        sub_4836b0(*data_530304, *data_5302c8)
        *(*data_5301f4 + 0xffec) = 5
        *(*data_5301f4 + 0xfff0) = 0
        *(*data_5301f4 + 0x10004) = 6
    
    void* result
    result.b = var_8:2.b
    return result
}
