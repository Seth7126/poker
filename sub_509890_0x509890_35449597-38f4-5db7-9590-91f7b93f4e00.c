// ============================================================
// 函数名称: sub_509890
// 虚拟地址: 0x509890
// WARP GUID: 35449597-38f4-5db7-9590-91f7b93f4e00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_516c3c, sub_42bc48, sub_516d08, sub_44613c, sub_508844, sub_404188, sub_47a7ec, sub_509850, sub_403df8, sub_514468
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void*sub_509890()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t var_8 = 0
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_509850()
    *(*data_530304 + 0x1340) = 1
    *data_530674
    *data_530304
    void* ebp_1 = sub_47a7ec(*data_5308e8, &var_8, 0)
    long double x87_r0
    int32_t ebx_1 = sub_47ab08(*data_530304, *data_530674, *data_5308e8, x87_r0, nullptr)
    int32_t temp0 = *(ebp_1 - 4)
    
    if (temp0 != 0)
        sub_404188(*(ebp_1 - 4), "error")
        
        if (temp0 != 0)
            sub_404188(*(ebp_1 - 4), "selfkick")
            
            if (temp0 != 0)
                sub_404188(*(ebp_1 - 4), "prot")
                
                if (temp0 != 0)
                    int32_t ecx_5
                    int32_t edx_6
                    ecx_5, edx_6 = sub_404188(*(ebp_1 - 4), "shutdown")
                    
                    if (temp0 == 0)
                        sub_44613c(*data_530304, edx_6, ecx_5)
                else
                    sub_42bc48(*(*data_530304 + 0x60a8))
            else
                ebp_1 = sub_508844(nullptr, 0)
        else if (*(*data_530454 + 0x344) == 0)
            int32_t var_c_2 = ebx_1
            sub_516c3c(*data_530454, ebp_1 - 8)
        else
            int32_t var_c_1 = ebx_1
            sub_516d08(0, *data_530454, ebp_1 - 8)
        
        sub_514468(*data_530454, *(ebp_1 - 4))
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_5099d8
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
