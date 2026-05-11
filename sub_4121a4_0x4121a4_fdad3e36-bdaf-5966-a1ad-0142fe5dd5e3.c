// ============================================================
// 函数名称: sub_4121a4
// 虚拟地址: 0x4121a4
// WARP GUID: fdad3e36-bdaf-5966-a1ad-0142fe5dd5e3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0, sub_4115f8, sub_4116b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4121a4(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    char* var_c = nullptr
    char* ebx_1 = arg2
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4115f8(arg1)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x40))(ExceptionList, var_24, var_20, ExceptionList_1, var_18, var_14)
    
    if (ebx_1 != 0)
        while (*ebx_1 != 0)
            char* eax_2 = ebx_1
            
            while (true)
                char edx_1 = *ebx_1
                
                if (edx_1 == 0)
                    break
                
                if (edx_1 == 0xa)
                    break
                
                if (edx_1 == 0xd)
                    break
                
                ebx_1 = &ebx_1[1]
            
            sub_403ee0(&var_c, eax_2, ebx_1 - eax_2)
            (*(*arg1 + 0x34))(arg1)
            
            if (*ebx_1 == 0xd)
                ebx_1 = &ebx_1[1]
            
            if (*ebx_1 == 0xa)
                ebx_1 = &ebx_1[1]
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_412242
    return sub_4116b4(arg1)
}
