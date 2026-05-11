// ============================================================
// 函数名称: sub_4afc93
// 虚拟地址: 0x4afc93
// WARP GUID: a9aee0fd-c1e3-5615-9708-07b75eca185a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4030d0, sub_4128c0, sub_404078, sub_404138, sub_4a2dfc, sub_408ad8, sub_404188, sub_403e4c, sub_408e1c, sub_49ca70, sub_40b4b0, sub_403e1c, sub_49e7fc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4afc93(char* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg2 += arg3.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t var_4 = 0
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    char* edi_1 = arg2
    void* var_20 = arg4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg2.b = 1
    int32_t* eax = sub_49ca70(sub_49c984+0x28, arg2, *(edi_1 + 0x8c))
    
    if (sub_404078(eax[8]) s> 0)
        sub_403e4c(&edi_1[0x74], eax[8])
        sub_403e4c(&edi_1[0x68], eax[9])
    
    sub_403e4c(*(arg1 + 0x104) + 0x20, *(edi_1 + 0x74))
    sub_403e4c(*(arg1 + 0x104) + 0x24, *(edi_1 + 0x68))
    void* ebp = sub_49e7fc(*(*(arg1 + 0x104) + 0x14), eax[5], 0x4aff8c, eax, edi_1, arg4 - 4)
    sub_403e4c(*(arg1 + 0x104) + 0x14, *(ebp - 4))
    sub_403e4c(*(arg1 + 0x104) + 4, eax[1])
    sub_403e4c(*(arg1 + 0x104) + 0x28, eax[0xa])
    
    if (sub_404078(eax[6]) s> 0)
        sub_403e4c(*(arg1 + 0x104) + 0x18, eax[6])
    
    if (sub_404078(eax[2]) s<= 0)
        sub_403e4c(*(arg1 + 0x104) + 8, "http")
    else
        sub_403e4c(*(arg1 + 0x104) + 8, eax[2])
    
    if (sub_404078(eax[4]) s<= 0)
        if (sub_408ad8(eax[2], "http") == 0)
            char eax_37
            int32_t edx_13
            eax_37, edx_13 = sub_408ad8(eax[2], "https")
            
            if (eax_37 == 0)
                if (sub_404078(*(*(arg1 + 0x104) + 0x10)) s<= 0)
                    edx_13.b = 1
                    sub_40b4b0(0x4af390, edx_13, nullptr)
                    sub_403828()
                    noreturn
            else
                sub_408e1c(0x1bb, ebp - 0xc)
                sub_403e4c(*(arg1 + 0x104) + 0x10, *(ebp - 0xc))
        else
            sub_408e1c(0x50, ebp - 8)
            sub_403e4c(*(arg1 + 0x104) + 0x10, *(ebp - 8))
    else
        sub_403e4c(*(arg1 + 0x104) + 0x10, eax[4])
    
    int32_t var_c_1 = *(*(arg1 + 0x104) + 0x14)
    int32_t var_10_1 = *(*(arg1 + 0x104) + 4)
    int32_t var_14_1 = *(*(arg1 + 0x104) + 0x28)
    sub_404138(&edi_1[0x8c], 3)
    
    if (edi_1[0x90] == 3 && sub_408ad8(eax[1], 0x4affb8) != 0)
        sub_403e4c(&edi_1[0x8c], eax[1])
    
    sub_4030d0(eax)
    
    if (edi_1[0x90] - 3 u< 4 && arg1[0xf4] != 1)
        int32_t edx_17
        edx_17.b = 1
        sub_40b4b0(0x4988ec, edx_17, "This request method is supported in HTTP 1.1")
        sub_403828()
        noreturn
    
    char eax_51 = edi_1[0x90]
    bool cond:0 = eax_51 == 2
    char temp2_1
    
    if (eax_51 != 2)
        temp2_1 = eax_51 - 2
        cond:0 = temp2_1 == 3
    
    if (eax_51 != 2 && temp2_1 != 3)
        cond:0 = false
        sub_4a2dfc(edi_1, 0xffffffff)
    else
        sub_4a2dfc(edi_1, sub_4128c0(*(edi_1 + 0x94)))
    
    sub_408e1c(0x50, ebp - 0x10)
    sub_404188(*(*(arg1 + 0x104) + 0x10), *(ebp - 0x10))
    
    if (cond:0)
        sub_403e4c(&edi_1[0x78], *(*(arg1 + 0x104) + 0x18))
    else
        void* esi_2 = *(arg1 + 0x104)
        int32_t var_c_2 = *(esi_2 + 0x18)
        void* const var_10_2 = &data_4afffc
        int32_t var_14_2 = *(esi_2 + 0x10)
        sub_404138(&edi_1[0x78], 3)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4aff7d
    return sub_403e1c(ebp - 0x10, 4)
}
