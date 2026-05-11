// ============================================================
// 函数名称: sub_4b526c
// 虚拟地址: 0x4b526c
// WARP GUID: d56c97fa-92c4-5b2e-8e0b-b395b3be0623
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4b4e78, sub_409040, sub_40c05c, sub_40b4ec, sub_404078, sub_4b4e2c, sub_4b44d0, sub_4b5160, sub_405ae8, sub_403e1c, sub_404364, sub_4b51e4, sub_403df8, sub_409ae0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b526c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_3c = ebx
    int32_t esi
    int32_t var_40 = esi
    int32_t var_38 = 0
    int32_t var_2c = 0
    int32_t var_18 = 0
    void* var_14 = nullptr
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t* var_44 = &var_4
    int32_t (* var_48)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0xc8))(ExceptionList, var_48, var_44)
    int32_t eax_2
    void* ebp_1
    struct _EXCEPTION_REGISTRATION_RECORD* esi_2
    eax_2, ebp_1, esi_2 = sub_40c05c(var_14, arg2)
    
    if (eax_2 != 0 && sub_404078(esi_2) != 0)
        int32_t* ebx_2
        ebx_2, ebp_1 = sub_4b44d0(esi_2, ebp_1 - 9, ebp_1 - 4, ebp_1 - 8)
        int32_t* eax_7 = ebx_2[0x92]
        
        if (eax_7 != 0)
            (*(*eax_7 + 0xbc))(var_8)
        else if (*(ebp_1 - 9) == 0)
            sub_4b5160(ebx_2, *(ebp_1 - 4))
        else
            void* var_c_2 = ebp_1 - 0x14
            void* eax_8
            eax_8.b = *(ebp_1 - 9)
            *(ebp_1 - 0x24) = eax_8.b
            *(ebp_1 - 0x20) = 2
            *(ebp_1 - 0x1c) = *(ebp_1 - 4)
            *(ebp_1 - 0x18) = 0xb
            sub_409ae0(1, ebp_1 - 0x24, "%s:%s", var_c_2)
            sub_4b5160(ebx_2, *(ebp_1 - 0x14))
        
        int32_t eax_12 = sub_404364(U"*", *(ebp_1 - 8))
        int32_t eax_13
        
        if (eax_12 s<= 0)
            eax_13 = sub_404364(sub_4b543f+5, *(ebp_1 - 8))
        
        if (eax_12 s<= 0 && eax_13 s<= 0)
            if (sub_404078(*(ebp_1 - 8)) s> 0)
                int32_t* ebx_3 = sub_4b4e78(ebx_2, *(ebp_1 - 8))
                
                if (sub_409040(*(ebp_1 - 8)) == 0)
                    *(ebp_1 - 0x30) = esi_2
                    *(ebp_1 - 0x2c) = 0xb
                    void* var_c_3 = ebp_1 - 0x30
                    int32_t var_10 = 0
                    sub_405ae8(data_5308e4, ebp_1 - 0x34)
                    int32_t edx_14
                    edx_14.b = 1
                    sub_40b4ec(sub_40eacb+0x7d, edx_14, *(ebp_1 - 0x34), var_10)
                    sub_403828()
                    noreturn
                
                sub_4b4e2c(ebx_3, ebp_1 - 0x28)
                
                if (*(ebp_1 - 0x28) == 0)
                    sub_4b51e4(ebx_3, *(ebp_1 - 8))
                    sub_4b4e78(ebx_3, *(ebp_1 - 8))
        else
            sub_4b51e4(ebx_2, *(ebp_1 - 8))
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4b5418
    sub_403df8(ebp_1 - 0x34)
    sub_403df8(ebp_1 - 0x28)
    sub_403e1c(ebp_1 - 0x14, 2)
    return sub_403e1c(ebp_1 - 8, 2)
}
