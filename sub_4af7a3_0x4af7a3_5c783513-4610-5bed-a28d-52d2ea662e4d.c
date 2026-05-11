// ============================================================
// 函数名称: sub_4af7a3
// 虚拟地址: 0x4af7a3
// WARP GUID: 5c783513-4610-5bed-a28d-52d2ea662e4d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_403248, sub_404078, sub_403260, sub_4ab120, sub_408ad8, sub_403e4c, sub_405ae8, sub_40b4b0, sub_403e1c, sub_408e80
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4af7a3(char* arg1, int16_t arg2, int32_t* arg3 @ esi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    void* entry_ebx
    *(entry_ebx + 0x6f) += arg1.b
    int32_t eflags
    int32_t esi = __outsd(arg2, *arg3, arg3, eflags)
    void* ebp = nullptr
    *0xffffff8b += arg2.b
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t var_4 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    void* var_c = entry_ebx
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t var_18 = 0
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_404078(*(*(arg1 + 0x10c) + 0x10)) s<= 0)
        char eax_26 = sub_408ad8(*(arg1 + 0xc0), *(*(arg1 + 0x104) + 0x18))
        int32_t eax_29
        
        if (eax_26 != 0)
            eax_29 = sub_408e80(*(*(arg1 + 0x104) + 0x10))
        
        if (eax_26 == 0 || eax_29 != *(arg1 + 0xd4))
            esp = &var_8
            
            if ((*(*arg1 + 0x54))() != 0)
                (*(*arg1 + 0x58))()
            
            *(*(arg1 + 0x104) + 0x18)
            (*(*arg1 + 0x88))()
            sub_408e80(*(*(arg1 + 0x104) + 0x10))
            (*(*arg1 + 0x8c))()
        
        if (sub_408ad8(*(*(arg1 + 0x104) + 8), "HTTPS") == 0)
            int32_t* edi_3 = *(arg1 + 0x74)
            
            if (edi_3 != 0 && sub_403248(edi_3, 0x4a9e20) != 0)
                sub_403260(edi_3, 0x4a9e20)
                ebp = sub_4ab120(edi_3, 1)
        else
            int32_t* ebx_1 = *(arg1 + 0x74)
            char eax_43
            
            if (ebx_1 != 0)
                eax_43 = sub_403248(ebx_1, 0x4a9e20)
            
            if (ebx_1 == 0 || eax_43 == 0)
                sub_405ae8(data_5308a0, 0xfffffff8)
                int32_t edx_11
                edx_11.b = 1
                sub_40b4b0(sub_4a6faf+0x161, edx_11, *0xfffffff8)
                sub_403828()
                noreturn
            
            sub_403260(ebx_1, 0x4a9e20)
            int32_t ebx_2
            ebx_2, ebp = sub_4ab120(ebx_1, 0)
            ebx_2.b = 1
    else
        if (sub_408ad8(*(arg1 + 0xc0), *(*(arg1 + 0x10c) + 0x10)) == 0
                || *(*(arg1 + 0x10c) + 0xc) != *(arg1 + 0xd4))
            esp = &var_8
            
            if ((*(*arg1 + 0x54))() != 0)
                (*(*arg1 + 0x58))()
        
        sub_403e4c(&arg1[0xc0], *(*(arg1 + 0x10c) + 0x10))
        *(arg1 + 0xd4) = *(*(arg1 + 0x10c) + 0xc)
        
        if (sub_408ad8(*(*(arg1 + 0x104) + 8), "HTTPS") == 0)
            entry_ebx.b = 2
            int32_t* edi_2 = *(arg1 + 0x74)
            
            if (edi_2 != 0 && sub_403248(edi_2, 0x4a9e20) != 0)
                sub_403260(edi_2, 0x4a9e20)
                ebp = sub_4ab120(edi_2, 1)
        else
            entry_ebx.b = 3
            int32_t* edi_1 = *(arg1 + 0x74)
            
            if (edi_1 != 0)
                if (sub_403248(edi_1, 0x4a9e20) == 0)
                    sub_405ae8(data_5308a0, 0xfffffffc)
                    int32_t edx_5
                    edx_5.b = 1
                    sub_40b4b0(sub_4a6faf+0x161, edx_5, *0xfffffffc)
                    sub_403828()
                    noreturn
                
                sub_403260(edi_1, 0x4a9e20)
                ebp = sub_4ab120(edi_1, 1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4afa14
    return sub_403e1c(ebp - 8, 2)
}
