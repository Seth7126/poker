// ============================================================
// 函数名称: sub_4af7b0
// 虚拟地址: 0x4af7b0
// WARP GUID: d85c69dc-92db-5ef6-9c35-74d9e2569f88
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_403248, sub_404078, sub_403260, sub_4ab120, sub_408ad8, sub_403e4c, sub_405ae8, sub_40b4b0, sub_403e1c, sub_408e80
// [被调用的父级函数]: sub_4b008c
// ============================================================

int32_t __convention("regparm")sub_4af7b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_404078(*(arg1[0x43] + 0x10)) s<= 0)
        char eax_26 = sub_408ad8(arg1[0x30], *(arg1[0x41] + 0x18))
        int32_t eax_29
        
        if (eax_26 != 0)
            eax_29 = sub_408e80(*(arg1[0x41] + 0x10))
        
        if (eax_26 == 0 || eax_29 != arg1[0x35])
            esp = &var_8
            
            if ((*(*arg1 + 0x54))() != 0)
                (*(*arg1 + 0x58))()
            
            *(arg1[0x41] + 0x18)
            (*(*arg1 + 0x88))()
            sub_408e80(*(arg1[0x41] + 0x10))
            (*(*arg1 + 0x8c))()
        
        if (sub_408ad8(*(arg1[0x41] + 8), "HTTPS") == 0)
            int32_t* edi_3 = arg1[0x1d]
            
            if (edi_3 != 0 && sub_403248(edi_3, 0x4a9e20) != 0)
                sub_403260(edi_3, 0x4a9e20)
                ebp_1 = sub_4ab120(edi_3, 1)
        else
            int32_t* ebx_2 = arg1[0x1d]
            char eax_43
            
            if (ebx_2 != 0)
                eax_43 = sub_403248(ebx_2, 0x4a9e20)
            
            if (ebx_2 == 0 || eax_43 == 0)
                sub_405ae8(data_5308a0, &var_c)
                int32_t edx_13
                edx_13.b = 1
                sub_40b4b0(sub_4a6faf+0x161, edx_13, var_c)
                sub_403828()
                noreturn
            
            sub_403260(ebx_2, 0x4a9e20)
            int32_t ebx_3
            ebx_3, ebp_1 = sub_4ab120(ebx_2, 0)
            ebx_3.b = 1
    else
        if (sub_408ad8(arg1[0x30], *(arg1[0x43] + 0x10)) == 0 || *(arg1[0x43] + 0xc) != arg1[0x35])
            esp = &var_8
            
            if ((*(*arg1 + 0x54))() != 0)
                (*(*arg1 + 0x58))()
        
        sub_403e4c(&arg1[0x30], *(arg1[0x43] + 0x10))
        arg1[0x35] = *(arg1[0x43] + 0xc)
        
        if (sub_408ad8(*(arg1[0x41] + 8), "HTTPS") == 0)
            ebx.b = 2
            int32_t* edi_2 = arg1[0x1d]
            
            if (edi_2 != 0 && sub_403248(edi_2, 0x4a9e20) != 0)
                sub_403260(edi_2, 0x4a9e20)
                ebp_1 = sub_4ab120(edi_2, 1)
        else
            ebx.b = 3
            int32_t* edi_1 = arg1[0x1d]
            
            if (edi_1 != 0)
                if (sub_403248(edi_1, 0x4a9e20) == 0)
                    sub_405ae8(data_5308a0, &var_8)
                    int32_t edx_6
                    edx_6.b = 1
                    sub_40b4b0(sub_4a6faf+0x161, edx_6, var_8)
                    sub_403828()
                    noreturn
                
                sub_403260(edi_1, 0x4a9e20)
                ebp_1 = sub_4ab120(edi_1, 1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4afa14
    return sub_403e1c(&ebp_1[-2], 2)
}
