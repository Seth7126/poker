// ============================================================
// 函数名称: sub_49c370
// 虚拟地址: 0x49c370
// WARP GUID: 52b87d67-b2a0-55f8-a399-a2a45b220631
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_49ada4, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49c370(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1[3] + 0x40))(ExceptionList, var_24, var_20)
    (*(*arg1 + 0x24))(var_8)
    void* eax_6 = (*data_5303d4)(sub_40423c(var_c))
    
    if (eax_6 != 0)
        var_8 = *(eax_6 + 0xc)
        int32_t esi_1 = 0
        
        while (*(var_8 + (esi_1 << 2)) != 0)
            *(var_8 + (esi_1 << 2))
            (*(*arg1 + 0x7c))(var_8)
            (*(*arg1[3] + 0x34))()
            int32_t temp0_1 = esi_1
            esi_1 += 1
            
            if (add_overflow(temp0_1, 1))
                sub_403010()
                noreturn
    else
        sub_49ada4()
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49c41a
    return sub_403e1c(&var_10, 2)
}
