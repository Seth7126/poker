// ============================================================
// 函数名称: sub_412000
// 虚拟地址: 0x412000
// WARP GUID: 7691fd3f-a27f-52bf-a7c5-d72a62252199
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CharNextA
// [内部子函数调用]: sub_403ee0, sub_4116b4, sub_40423c, sub_408bec, sub_4115f8
// [被调用的父级函数]: sub_4ad8c0
// ============================================================

int32_t __convention("regparm")sub_412000(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    char* var_10 = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4115f8(arg1)
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x40))(ExceptionList, var_2c, var_28, ExceptionList_1, var_20, var_1c)
    char* lpsz = sub_40423c(arg2)
    
    while (true)
        char* eax_6
        eax_6.b = *lpsz
        
        if (eax_6.b - 1 u>= 0x20)
            break
        
        lpsz = lpsz
        lpsz = CharNextA(lpsz)
    
    while (true)
        char* eax_23
        eax_23.b = *lpsz
        
        if (eax_23.b == 0)
            break
        
        if (eax_23.b != 0x22)
            char* lpsz_1 = lpsz
            
            while (true)
                char* eax_11
                eax_11.b = *lpsz
                
                if (eax_11.b u<= 0x20)
                    break
                
                if (eax_11.b == 0x2c)
                    break
                
                lpsz = lpsz
                lpsz = CharNextA(lpsz)
            
            sub_403ee0(&var_10, lpsz_1, lpsz - lpsz_1)
        else
            sub_408bec(&lpsz, 0x22, &var_10)
        
        (*(*arg1 + 0x34))(arg1)
        
        while (true)
            char* eax_16
            eax_16.b = *lpsz
            
            if (eax_16.b - 1 u>= 0x20)
                break
            
            lpsz = lpsz
            lpsz = CharNextA(lpsz)
        
        if (*lpsz == 0x2c)
            char* eax_21
            
            do
                lpsz = lpsz
                lpsz = CharNextA(lpsz)
                eax_21.b = *lpsz
            while (eax_21.b - 1 u< 0x20)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4120fa
    return sub_4116b4(arg1)
}
