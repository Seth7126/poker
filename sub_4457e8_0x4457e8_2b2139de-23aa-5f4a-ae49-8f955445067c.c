// ============================================================
// 函数名称: sub_4457e8
// 虚拟地址: 0x4457e8
// WARP GUID: 2b2139de-23aa-5f4a-ae49-8f955445067c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b2f0, sub_428990, sub_44987c, sub_40fa94, sub_4457a8, sub_449888, sub_407814
// [被调用的父级函数]: 无
// ============================================================

HANDLE __convention("regparm")sub_4457e8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if ((arg1[8].b & 0x10) != 0)
    if ((arg1[8].b & 0x10) != 0)
        return (*(*arg1 - 0x10))()
    
    void* eax_2 = *(arg2 + 8)
    int32_t ecx_4
    LPARAM edi_1
    void var_1c
    void var_14
    int32_t var_c_1
    
    if (*(eax_2 + 4) != 1)
        int32_t __saved_ebp
        int32_t* var_2c_1 = &__saved_ebp
        LPARAM eax_8
        void* edx_2
        eax_8, edx_2 = sub_4457a8(arg1[0x8c], arg2)
        edi_1 = eax_8
        
        if (edi_1 == 0)
            int32_t* var_2c_2 = &__saved_ebp
            edi_1 = sub_4457a8(arg1[0x1b], edx_2)
        
        sub_40fa94(0, 0, &var_1c)
        ecx_4 = sub_42b2f0(arg1, &var_1c, &var_14)
        var_c_1 = sub_407814(&var_14)
    else
        HANDLE result = sub_428990(*(eax_2 + 0xc))
        HANDLE i
        
        for (i = result; i != 0; i = *(i + 0x24))
            if (*(i + 0x150) != 0)
                break
        
        if (i == 0)
            return result
        
        edi_1 = *(i + 0x150)
        sub_40fa94(0, 0, &var_1c)
        ecx_4 = sub_42b2f0(i, &var_1c, &var_14)
        var_c_1 = sub_407814(&var_14)
    
    if ((arg1[0x84].b & 8) == 0)
        data_5317d8
        return sub_44987c(ecx_4, edi_1)
    
    data_5317d8
    sub_449888()
    data_5317d8
    return sub_449888()
}
