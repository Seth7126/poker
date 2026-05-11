// ============================================================
// 函数名称: sub_51b4f0
// 虚拟地址: 0x51b4f0
// WARP GUID: e47508e7-97fb-59b2-83df-af968ea90977
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_403df8, sub_40422c, sub_403010
// [被调用的父级函数]: sub_52b7f8, sub_52b63c, sub_4ceed4, sub_52ba68, sub_4c60d8, sub_52b8e8
// ============================================================

char** __convention("regparm")sub_51b4f0(void* arg1, char* arg2, char** arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    char* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0xac0) s< 5 && (*(data_530598 + 0x24) s> 1 || arg4 == 0x15))
        int32_t temp0_1 = *(arg1 + 0xac0)
        *(arg1 + 0xac0) += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
        
        sub_403e4c(arg1 + (*(arg1 + 0xac0) << 2) + 0xa6c, var_8)
        sub_403e4c(arg1 + (*(arg1 + 0xac0) << 2) + 0xa80, *arg3)
        
        if (arg5 != 0xffffffff)
            sub_403df8(arg3)
        
        *(arg1 + (*(arg1 + 0xac0) << 2) + 0xa94) = arg5
        *(arg1 + (*(arg1 + 0xac0) << 2) + 0xaa8) = arg4
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_51b5b4
    char** result = &var_8
    sub_403df8(result)
    return result
}
