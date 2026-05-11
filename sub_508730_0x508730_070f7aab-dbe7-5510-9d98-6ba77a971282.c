// ============================================================
// 函数名称: sub_508730
// 虚拟地址: 0x508730
// WARP GUID: 070f7aab-dbe7-5510-9d98-6ba77a971282
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_508224, sub_5082d0, sub_403e1c, sub_5082a0, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_50e9c0, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_508730(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t var_18 = 0
    int32_t (* var_1c)() = nullptr
    int32_t* var_c = arg2
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_11 = 1
    arg2.b = 1
    int32_t* ExceptionList_1 = sub_508224(0x507294, arg2)
    (*(**arg1 + 0x40))(ExceptionList, var_34, var_30)
    int32_t* var_18_1 = &var_4
    var_1c = j_sub_40353c
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t i_2 = (*(**arg3 + 0x14))(ExceptionList_1, var_1c, var_18_1)
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t esi_1 = 0
        int32_t i
        
        do
            (*(**arg3 + 0xc))()
            
            if (var_18_1 != 0)
                var_18_1 = arg4
                var_1c = &var_1c
                sub_5082d0(ExceptionList_1, var_18_1, 0x4d2, var_1c)
                
                if (var_1c != 0)
                    (*(**arg1 + 0x34))()
                    (*(**var_c + 0x34))()
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t var_14
    fsbase->NtTib.ExceptionList = var_14
    int32_t edx_6
    edx_6.b = 1
    sub_5082a0(ExceptionList_1, edx_6)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_508835
    return sub_403e1c(&var_1c, 2)
}
